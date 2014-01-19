//
//  NSDictionary+RUParameters.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (RUParameters)

/*! Generates a dictionary to seed the API with.
 
 @param string The seed value.
 @return A dictionary that may be used to seed the API with later.
 */
+(NSDictionary *)parameterDictionaryWithSeed:(NSString *)string;

/*! Generates a the dictionary as a parameter string.
 
 The keys and values are joined by a "=" and the values are encoded for use in
 URLs.  These strings are then joined by "&" to create the entire parameter string.
 
 @return The parameter string.
 */
-(NSString *)parameterStringValue;

@end
