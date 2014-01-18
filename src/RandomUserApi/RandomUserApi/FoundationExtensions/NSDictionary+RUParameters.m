//
//  NSDictionary+RUParameters.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "NSDictionary+RUParameters.h"

static NSString *const RUParameterKeySeed = @"seed";

@implementation NSDictionary (RUParameters)

+(NSDictionary *)parameterDictionaryWithSeed:(NSString *)string {
	
	NSDictionary *result = nil;
	
	if (string) {
		result = @{RUParameterKeySeed:string};
	}
	
	return result;
}

@end
