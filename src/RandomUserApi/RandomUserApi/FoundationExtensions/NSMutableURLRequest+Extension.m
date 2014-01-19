//
//  NSMutableURLRequest+Extension.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/18/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "NSMutableURLRequest+Extension.h"

@implementation NSMutableURLRequest (Extension)

+(NSMutableURLRequest *)requestWithUrl:(NSURL *)url method:(NSString *)method data:(NSData *)data {
	
	NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url];
	[request setHTTPMethod:method];
	if ([data length] > 0) {
		[request setHTTPBody:data];
	}
	
	return request;
}

@end
