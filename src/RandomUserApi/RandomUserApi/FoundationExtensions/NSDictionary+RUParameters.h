//
//  NSDictionary+RUParameters.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (RUParameters)

+(NSDictionary *)parameterDictionaryWithSeed:(NSString *)string;

@end
