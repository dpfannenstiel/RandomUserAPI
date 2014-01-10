//
//  RUName+Parsing.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUName.h"

@interface RUName (Parsing)

-(void)parseTitle:(id)value;
-(void)parseFirst:(id)value;
-(void)parseLast:(id)value;

@end
