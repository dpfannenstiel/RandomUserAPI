//
//  NSURL+RU.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "NSURL+RU.h"
#import "NSURL+Extension.h"

@implementation NSURL (RU)

+(NSURL *)urlForRUUserParameterString:(NSString *)parameterString {
	
	return [NSURL urlForScheme:RUScheme host:RUHost path:nil parameters:parameterString];
	
}

@end
