//
//  RUUser+Parsing.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUUser.h"

@interface RUUser (Parsing)

-(void)parseName:(id)value;
-(void)parseLocation:(id)value;
-(void)parseGender:(id)value;
-(void)parseEmail:(id)value;
-(void)parsePassword:(id)value;
-(void)parseMd5_hash:(id)value;
-(void)parseSha1_hash:(id)value;
-(void)parsePhone:(id)value;
-(void)parseCell:(id)value;
-(void)parseSSN:(id)value;
-(void)parsePicture:(id)value;

@end
