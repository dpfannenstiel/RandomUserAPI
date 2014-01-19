//
//  RULocation.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RULocation.h"

@implementation RULocation

-(NSString *)description {
	return [NSString stringWithFormat:@"%@: {%@, %@, %@, %@}", NSStringFromClass([self class]), _street, _city, _state, _zip];
}

@end
