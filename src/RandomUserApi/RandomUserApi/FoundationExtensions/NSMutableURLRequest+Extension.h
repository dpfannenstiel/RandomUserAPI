//
//  NSMutableURLRequest+Extension.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/18/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const HTTPGet = @"GET";

@interface NSMutableURLRequest (Extension)

+(NSMutableURLRequest *)requestWithUrl:(NSURL *)url method:(NSString *)method data:(NSData *)data;

@end
