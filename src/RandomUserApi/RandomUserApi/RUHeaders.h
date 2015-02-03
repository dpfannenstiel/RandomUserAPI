//
//  RUHeaders.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/18/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#ifndef RandomUserApi_RUHeaders_h
#define RandomUserApi_RUHeaders_h

#import "RUObject.h"

typedef void (^RUSessionModelObjectCompletion)(RUObject *object, NSError *error, NSDictionary *infoDictionary);
typedef void (^RUSessionArrayCompletion)(NSArray *array, NSError *error, NSDictionary *infoDictionary);

#endif
