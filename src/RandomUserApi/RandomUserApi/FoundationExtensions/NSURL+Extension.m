//
//  NSURL+Extension.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/17/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "NSURL+Extension.h"

@implementation NSURL (Extension)

+(NSURL *)urlForScheme:(NSString *)scheme host:(NSString *)host path:(NSArray *)components parameters:(NSString *)parameters {
	
	NSArray *componentArray = [@[@""] arrayByAddingObjectsFromArray:components];
	
	NSString *path = [componentArray componentsJoinedByString:@"/"];
	
	NSURL *resultURL = [[NSURL alloc] initWithScheme:scheme host:host path:path];
	
	NSString *parameterizedUrl = [[resultURL absoluteString] stringByAppendingFormat:@"?%@", parameters];
	
	resultURL = [NSURL URLWithString:parameterizedUrl];
	
	return resultURL;
	
}

@end
