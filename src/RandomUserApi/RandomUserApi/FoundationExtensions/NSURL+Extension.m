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
	
	NSArray *componentArray = @[@""];
	componentArray = [componentArray arrayByAddingObjectsFromArray:components];
	NSString *path = ([componentArray count] > 1 ? [componentArray componentsJoinedByString:@"/"] : @"/");
	NSURL *resultURL = [[NSURL alloc] initWithScheme:scheme host:host path:path];
	NSString *urlString = [resultURL absoluteString];
	if (parameters) {
		urlString = [urlString stringByAppendingFormat:@"?%@", parameters];
	}
	resultURL = [NSURL URLWithString:urlString];
	
	return resultURL;
	
}

@end
