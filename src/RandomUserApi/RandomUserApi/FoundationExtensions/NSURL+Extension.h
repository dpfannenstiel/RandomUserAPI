//
//  NSURL+Extension.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/17/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Extension)

/*! Generate a URL.
 
 @param scheme The scheme to assign to the url.  May not be `nil`.
 @param host The host for the url. May not be `nil`.
 @param components The elements of the path components to include in the url or `nil`.
 @param parameters The parameters to include in the url.
 @return A fully qualified URL for use.
 */
+(NSURL *)urlForScheme:(NSString *)scheme host:(NSString *)host path:(NSArray *)components parameters:(NSString *)parameters;

@end
