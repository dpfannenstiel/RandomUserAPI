//
//  RUUser+Extension.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUUser+Extension.h"

@implementation RUUser (Extension)

-(void)setGender:(RUUserGender)gender {
	
	switch (gender) {
		case RUUserGenderFemale:
			self.genderString = @"female";
			break;
		case RUUserGenderMale:
			self.genderString = @"male";
			break;
		default:
			break;
	}
	
}

-(RUUserGender)gender {
	
	if ([[self.genderString lowercaseString] isEqualToString:@"female"]) {
		return RUUserGenderFemale;
	} else if ([[self.genderString lowercaseString] isEqualToString:@"male"]) {
		return RUUserGenderMale;
	}
	return RUUserGenderUnset;
	
}

@end
