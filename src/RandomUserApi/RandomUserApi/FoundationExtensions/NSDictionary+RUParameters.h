//
//  NSDictionary+RUParameters.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RUUser+Extension.h"

@interface NSDictionary (RUParameters)

/*! Generates a dictionary to seed the API with.
 
 @param string The seed value.
 @return A dictionary that may be used to seed the API with later.
 */
+(NSDictionary *)parameterDictionaryWithSeed:(NSString *)string;

/*! Adds the API seed to an instantiated parameter dictionary.
 
 @param string The seed value.
 @return The recieving dictionary with the ``seed`` parameter added.
 */
-(NSDictionary *)dictionaryByAddingSeed:(NSString *)string;

/*! Requests the API respond with a user of the specified gender.
 
 @param gender The desired gender.  Must not be ``RUUserGenderUnset``.
 @return The recieving dictionary with the ``gender`` parameter added.
 @exception NSInternalInconsistencyException If the gender is ``RUUserGenderUnset``.
 */
-(NSDictionary *)dictionaryByAddingGender:(RUUserGender)gender;

/*! Requests the API respond with the requested number of data points.
 
 @param results The number of requested random users, up to 100 if no key is also provided.
 @return The recieving dictionary with the ``results`` parameter set.
 */
-(NSDictionary *)dictionaryByAddingResults:(NSNumber *)results;

/*! Adds the user key to the parameter dictionary.
 
 @param key The RandomAPI client key.
 @return The recieving dictionary with the ``key`` parameter set.
 */
-(NSDictionary *)dictionaryByAddingKey:(NSString *)key;

/*! Generates a the dictionary as a parameter string.
 
 The keys and values are joined by a "=" and the values are encoded for use in
 URLs.  These strings are then joined by "&" to create the entire parameter string.
 
 @return The parameter string.
 */
-(NSString *)parameterStringValue;

@end
