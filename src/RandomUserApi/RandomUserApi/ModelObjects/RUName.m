//
//  RUName.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUName.h"

@implementation RUName

-(NSString *)description {
	return [NSString stringWithFormat:@"%@: {%@, %@, %@}", NSStringFromClass([self class]), _title, _first, _last];
}

@end
