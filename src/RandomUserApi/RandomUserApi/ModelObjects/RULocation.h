//
//  RULocation.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject+Parsing.h"

/*! A model object representation of a location from the Random User API
 
 This class is a concrete implementation of a RUObject.
 */
@interface RULocation : RUObject

/*! The street address.
 */
@property (nonatomic, strong) NSString *street;

/*! The city.
 */
@property (nonatomic, strong) NSString *city;

/*! The state.
 */
@property (nonatomic, strong) NSString *state;

/*! The zip code.
 */
@property (nonatomic, strong) NSString *zip;

@end