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

/*! A model object representation of a user from the Random User API
 
 This class is a concrete implementation of a RUObject.
 */
@interface RUUser : RUObject

/*! The string representation of the user's gender.
 
 This property should not be altered directly by the consumer of the API.
 Instead use the `gender` property.
 
 @see gender
 */
@property (nonatomic, strong) NSString *genderString;

/*! The name object of the user.
 
 RUName is also a concrete subclass of RUObject.
 */
@property (nonatomic, strong) RUName *name;

/*! The location of the user.
 
 RULocation is also a concrete subclass of RUObject.
 */
@property (nonatomic, strong) RULocation *location;

/*! The user's email address.
 */
@property (nonatomic, strong) NSString *email;

/*! The user's password.
 */
@property (nonatomic, strong) NSString *password;

/*! The md5 hash of the user.
 */
@property (nonatomic, strong) NSString *md5Hash;

/*! The sha1 has of the user.
 */
@property (nonatomic, strong) NSString *sha1Hash;

/*! The user's phone number.
 */
@property (nonatomic, strong) NSString *phone;

/*! The user's cell phone number.
 */
@property (nonatomic, strong) NSString *cell;

/*! The user's SSN
 */
@property (nonatomic, strong) NSString *ssn;

/*! The url of the user's picture
 */
@property (nonatomic, strong) NSString *pictureUrl;

/*! The seed value of the user.
 
 This value may be sent to the API to generate this user.
 */
@property (nonatomic, strong) NSString *seed;

/*! The version of the API used to generate this user.
 */
@property (nonatomic, strong) NSString *version;

/*! The user's username.
 */
@property (nonatomic, strong) NSString *username;

/*! The user's registration number.
 */
@property (nonatomic, strong) NSString *registered;

/*! The sha256 hash of the user.
 */
@property (nonatomic, strong) NSString *sha256;

/*! This property is undocumented from the API.
 
 The Random User API has not documented what this property is for, nor can an
 educated guess be made about it's purpose.
 
 */
@property (nonatomic, strong) NSString *salt;

// TODO:  Add dob

@end