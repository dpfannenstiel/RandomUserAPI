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
static NSString *const RUParameterKeyKey = @"key";
static NSString *const RUParameterKeyGender = @"gender";
static NSString *const RUParameterKeyResults = @"results";

@implementation NSDictionary (RUParameters)

+(NSDictionary *)parameterDictionaryWithSeed:(NSString *)string {
	
	NSDictionary *result = nil;
	
	if (string) {
		result = @{RUParameterKeySeed:string};
	}
	
	return result;
}

-(NSDictionary *)dictionaryByAddingSeed:(NSString *)string {
	NSMutableDictionary *d = [NSMutableDictionary dictionaryWithDictionary:self];
	[d setObject:string forKey:RUParameterKeySeed];
	return d;
}

-(NSDictionary *)dictionaryByAddingGender:(RUUserGender)gender {
	NSAssert(gender != RUUserGenderUnset, @"Attempt to request an invalid gender");
	NSMutableDictionary *d = [NSMutableDictionary dictionaryWithDictionary:self];
	
	NSString *string = (gender == RUUserGenderMale ? @"male" : @"female");
	[d setObject:string forKey:RUParameterKeyGender];
	return d;
}

-(NSDictionary *)dictionaryByAddingResults:(NSNumber *)results {
	NSMutableDictionary *d = [NSMutableDictionary dictionaryWithDictionary:self];
	[d setObject:results forKey:RUParameterKeyResults];
	return d;
}

-(NSDictionary *)dictionaryByAddingKey:(NSString *)key {
	NSMutableDictionary *d = [NSMutableDictionary dictionaryWithDictionary:self];
	[d setObject:key forKey:RUParameterKeyKey];
	return d;
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
