//
//  RUName+Parsing.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUName+Parsing.h"

@implementation RUName (Parsing)

-(void)parseTitle:(id)value {
	RUParseString(title, value);
}

-(void)parseFirst:(id)value {
	RUParseString(first, value);
}

-(void)parseLast:(id)value {
	RUParseString(last, value);
}

@end
