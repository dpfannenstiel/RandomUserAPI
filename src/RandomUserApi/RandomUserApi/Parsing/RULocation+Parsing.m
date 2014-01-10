//
//  RULocation+Parsing.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RULocation+Parsing.h"

@implementation RULocation (Parsing)

-(void)parseStreet:(id)value {
	RUParseString(street, value);
}

-(void)parseCity:(id)value {
	RUParseString(city, value);
}

-(void)parseState:(id)value {
	RUParseString(state, value);
}

-(void)parseZip:(id)value {
	RUParseString(zip, value);
}

@end
