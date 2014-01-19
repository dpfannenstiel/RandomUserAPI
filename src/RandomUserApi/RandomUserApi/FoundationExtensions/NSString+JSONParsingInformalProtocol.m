//
//  NSString+JSONParsingInformalProtocol.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "NSString+JSONParsingInformalProtocol.h"

NSString * const JPIPException = @"JPIPException";

static NSString * const JPIPStringExceptionReasonStringLength = @"String had length of 0";

@implementation NSString (JSONParsingInformalProtocol)

-(NSString *)selectorValue {
	
	if ([self length] == 0) {
		NSException *exception = [NSException exceptionWithName:JPIPException reason:JPIPStringExceptionReasonStringLength userInfo:nil];
		
		@throw exception;
	}
	
	NSString *noWhiteSpace = [self stringByReplacingOccurrencesOfString:@" " withString:@"_"];
	noWhiteSpace = [noWhiteSpace stringByReplacingCharactersInRange:NSMakeRange(0,1) withString:[[noWhiteSpace substringToIndex:1] capitalizedString]];
	NSString *results = [NSString stringWithFormat:@"parse%@:", noWhiteSpace];
	return results;
	
}

-(NSString *)urlEncoded {
	
	CFStringRef unsafeString = (__bridge CFStringRef)self;
	
	CFStringRef safeString = CFURLCreateStringByAddingPercentEscapes (NULL, unsafeString, NULL, CFSTR("/%&=?$#+-~@<>|\\*,.()[]{}^!"), kCFStringEncodingUTF8);
	
	NSString *results = (NSString *)CFBridgingRelease(safeString);
	
	return results;
}
@end
