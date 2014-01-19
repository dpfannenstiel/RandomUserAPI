//
//  NSString+JSONParsingInformalProtocol.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const JPIPException;

@interface NSString (JSONParsingInformalProtocol)

-(NSString *)selectorValue;
-(NSString *)urlEncoded;

@end
