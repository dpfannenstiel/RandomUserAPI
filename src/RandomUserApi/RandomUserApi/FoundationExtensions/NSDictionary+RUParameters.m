//
//  NSDictionary+RUParameters.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "NSDictionary+RUParameters.h"
#import "NSString+JSONParsingInformalProtocol.h"

static NSString *const RUParameterKeySeed = @"seed";

@implementation NSDictionary (RUParameters)

+(NSDictionary *)parameterDictionaryWithSeed:(NSString *)string {
	
	NSDictionary *result = nil;
	
	if (string) {
		result = @{RUParameterKeySeed:string};
	}
	
	return result;
}

-(NSString *)parameterStringValue {
	
	NSMutableArray *array = [NSMutableArray array];
	NSString *pair;
	NSString *value;
	
	for (NSString *k in [self allKeys]) {
		value = [self objectForKey:k];
		pair = [NSString stringWithFormat:@"%@=%@", k, [value urlEncoded]];
		[array addObject:pair];
	}
	
	return ([array count] > 0 ? [array componentsJoinedByString:@"&"] : nil);
}

@end
