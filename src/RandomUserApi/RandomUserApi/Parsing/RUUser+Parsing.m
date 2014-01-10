//
//  RUUser+Parsing.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUUser+Parsing.h"
#import "RUName+Parsing.h"
#import "RULocation+Parsing.h"

@implementation RUUser (Parsing)

-(void)parseName:(id)value {
	RUParseModelObject(name, RUName, value);
}

-(void)parseLocation:(id)value {
	RUParseModelObject(location, RULocation, value);
}

-(void)parseGender:(id)value {
	RUParseString(genderString, value);
}

-(void)parseEmail:(id)value {
	RUParseString(email, value);
}

-(void)parsePassword:(id)value {
	RUParseString(password, value);
}

-(void)parseMd5_hash:(id)value {
	RUParseString(md5Hash, value);
}

-(void)parseSha1_hash:(id)value {
	RUParseString(sha1Hash, value);
}

-(void)parsePhone:(id)value {
	RUParseString(phone, value);
}

-(void)parseCell:(id)value {
	RUParseString(cell, value);
}

-(void)parseSSN:(id)value {
	RUParseString(ssn, value);
}

-(void)parsePicture:(id)value {
	RUParseString(pictureUrl, value);
}

@end
