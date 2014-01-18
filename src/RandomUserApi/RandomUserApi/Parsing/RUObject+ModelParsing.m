//
//  RUObject+ModelParsing.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject+ModelParsing.h"

NSString * const RUObjectException = @"RUObjectException";

NSString * const RUUnableToParseString = @"RUObject is unable to parse value as a string";

@implementation RUObject (ModelParsing)

-(NSString *)parseString:(id)value {
	
	NSString *result = nil;
	
	if ([value isKindOfClass:[NSString class]]) {
		result = (NSString *)value;
	} else if ([value isKindOfClass:[NSData class]]) {
		result = [[NSString alloc] initWithData:((NSData *)value) encoding:NSStringEncodingConversionAllowLossy];
	} else if ([value respondsToSelector:@selector(stringValue)]) {
		result = [value stringValue];
	} else if ( value || (value != [NSNull null])) {
		NSException *exception = [NSException exceptionWithName:RUObjectException reason:RUUnableToParseString userInfo:@{@"value":value}];
		@throw exception;
	}
	
	return result;
	
}

@end
