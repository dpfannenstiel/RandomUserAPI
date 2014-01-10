//
//  RUName.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject+Parsing.h"

@interface RUName : RUObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *first;
@property (nonatomic, strong) NSString *last;

@end