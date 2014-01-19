//
//  RUUser.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUUser.h"

@implementation RUUser

-(NSString *)description {
	NSString *result = [NSString stringWithFormat:@"{%@, %@}", self.username, self.seed];
	return result;
}

@end
