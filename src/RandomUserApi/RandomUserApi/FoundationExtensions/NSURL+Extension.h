//
//  NSURL+Extension.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/17/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Extension)

+(NSURL *)urlForScheme:(NSString *)scheme host:(NSString *)host path:(NSArray *)components parameters:(NSString *)parameters;

@end
