//
//  RUName.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject+Parsing.h"

/*! A model object representation of a name from the Random User API
 
 This class is a concrete implementation of a RUObject.
 */
@interface RUName : RUObject

/*! The title of a user.
 
 Typically this may be "Mr.", "Mrs.", "Dr.", etc.  But exact values are undefined.
 */
@property (nonatomic, strong) NSString *title;

/*! The user's first name.
 */
@property (nonatomic, strong) NSString *first;

/*! The user's last name.
 */
@property (nonatomic, strong) NSString *last;

@end