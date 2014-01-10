//
//  RULocation+Parsing.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RULocation.h"

@interface RULocation (Parsing)

-(void)parseStreet:(id)value;
-(void)parseCity:(id)value;
-(void)parseState:(id)value;
-(void)parseZip:(id)value;

@end
