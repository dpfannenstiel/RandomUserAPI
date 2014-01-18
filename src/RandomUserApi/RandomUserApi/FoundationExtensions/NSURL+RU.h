//
//  NSURL+RU.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const RUScheme = @"http";
static NSString *const RUHost = @"randomuser.me";

@interface NSURL (RU)

+(NSURL *)urlForRUUserParameterString:(NSString *)parameterString;

@end
