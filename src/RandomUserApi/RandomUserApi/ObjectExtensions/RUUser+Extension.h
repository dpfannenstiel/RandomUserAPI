//
//  RUUser+Extension.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUUser.h"

/*! Defines a gender type.
 */
typedef NS_ENUM(NSInteger, RUUserGender) {
	
	/*! The gender is unset.
	 */
	RUUserGenderUnset = 0,
	
	/*! The gender is male.
	 */
	RUUserGenderMale = 1,
	
	/*! The gender is female.
	 */
	RUUserGenderFemale = 2
	
};


@interface RUUser (Extension)

/*! Access the gender of the user as a typedef property.
 
 The readwrite feature of this property sets or interprets the `genderString`
 as a RUUserGender each time this property is set of accessed.
 
 @see genderString
 */
@property (nonatomic, readwrite) RUUserGender gender;

@end
