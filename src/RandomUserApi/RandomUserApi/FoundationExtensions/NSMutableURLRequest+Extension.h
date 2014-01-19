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

/*!  Generate a URL request to access a service with.
 
 @param url The URL to send the request to.
 @param method The HTTP method to send with the request.
 @param data The data to include in the body of the request.
 @return A request with standard values pre-populated.
 */
+(NSMutableURLRequest *)requestWithUrl:(NSURL *)url method:(NSString *)method data:(NSData *)data;

@end
