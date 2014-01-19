//
//  NSURL+RU.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const RUScheme = @"http";
static NSString *const RUHost = @"api.randomuser.me";

@interface NSURL (RU)

/*!  Generate an URL to retrieve a User from the RandomUser API.
 
 @param parameterString The parameters to pass to the API.
 @return A fully qualified URL for use.
 */
+(NSURL *)urlForRUUserParameterString:(NSString *)parameterString;

@end
