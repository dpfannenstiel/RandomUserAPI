//
//  RUSession+RUUser.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/18/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUSession+RUUser.h"
#import "NSDictionary+RUParameters.h"
#import "NSURL+RU.h"
#import "NSMutableURLRequest+Extension.h"
#import "RUUser+Extension.h"

@implementation RUSession (RUUser)

-(void)getUserForParameters:(NSDictionary *)parameters completion:(RUSessionModelObjectCompletion)completionBlock {
	
	NSURLSessionTaskCompletion taskCompletion = ^(NSData *data, NSURLResponse *response, NSError *error) {
		
		DataLog(@"sample data", data);
		
		RUUser *user = nil;
		NSError *finalError = error;
		
		if (finalError == nil) {
			
			NSError *jsonError = nil;
			id object = [NSJSONSerialization JSONObjectWithData:data options:0 error:&jsonError];
			
			if (!jsonError && [object isKindOfClass:[NSDictionary class]]) {
				
				NSArray *o = (NSArray *)[object objectForKey:@"results"];
				
				if ([o count] > 0) {
					NSDictionary *resultDict = [o objectAtIndex:0];
					user = [[RUUser alloc] initWithJSONDictionary:[resultDict objectForKey:@"user"]];
					user.seed = [resultDict objectForKey:@"seed"];
					user.version = [resultDict objectForKey:@"version"];
					
					DLog(@"%@", user.name);
					DLog(@"%@", user.location);
					
				}
			} else if (jsonError) {
				finalError = jsonError;
			}
			
		}
		
		dispatch_async(dispatch_get_main_queue(), ^{
			completionBlock(user, finalError);
		});
		
	};
	
	NSString *parameterString = [parameters parameterStringValue];
	NSURL *url = [NSURL urlForRUUserParameterString:parameterString];
	NSMutableURLRequest *request = [NSMutableURLRequest requestWithUrl:url method:HTTPGet data:nil];
	NSURLSessionDataTask *task = [self.urlSession dataTaskWithRequest:request completionHandler:taskCompletion];
	[task resume];
}

@end
