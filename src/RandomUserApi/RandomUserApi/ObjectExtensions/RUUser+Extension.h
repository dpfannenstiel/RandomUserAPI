//
//  RUUser+Extension.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUUser.h"

typedef NS_ENUM(NSInteger, RUUserGender) {
	
	RUUserGenderUnset = 0,
	
	RUUserGenderMale = 1,
	
	RUUserGenderFemale = 2
	
};


@interface RUUser (Extension)

@property (nonatomic, readwrite) RUUserGender gender;

@end
