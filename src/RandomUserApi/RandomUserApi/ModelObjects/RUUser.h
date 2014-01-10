//
//  RUUser.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject+Parsing.h"

@class RUName;
@class RULocation;

@interface RUUser : RUObject

@property (nonatomic, strong) NSString *genderString;

@property (nonatomic, strong) RUName *name;

@property (nonatomic, strong) RULocation *location;

@property (nonatomic, strong) NSString *email;

@property (nonatomic, strong) NSString *password;

@property (nonatomic, strong) NSString *md5Hash;

@property (nonatomic, strong) NSString *sha1Hash;

@property (nonatomic, strong) NSString *phone;

@property (nonatomic, strong) NSString *cell;

@property (nonatomic, strong) NSString *ssn;

@property (nonatomic, strong) NSString *pictureUrl;

@property (nonatomic, strong) NSString *seed;

@end


/*


 {
 results: [{
	user: {
	gender: "male",
	email: "gabriel.richardson45@example.com",
	password: "godfather",
	md5 hash: "15d628391f0eb58d7724041ab9a12ae2",
	sha1 hash: "58be9e2c7f22cd75d7af3c9e175b6465b280d61d",
	phone: "(471)-543-4073",
	cell: "(651)-308-4754",
	SSN: "160-76-1677",
	picture: "http://api.randomuser.me/0.2/portraits/men/23.jpg"
	},
	seed: "smallFrog"
	}]
 }

*/