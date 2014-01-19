//
//  RUObject.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

/*! The root object for all model objects from the API.
 
 RUObject is an abstract class and should not be instantiated. Instead concrete
 classes should inherit from this class and be used.
 
 */
@interface RUObject : NSObject

/*! Populate a concrete RUObject from a JSON dictionary.
 
 The concrete sublcasses should conform to the JSONParsing Informal Protocol.
 
 @param jsonDictionary The JSON dictionary that should be parsed into a native
 model object.
 @return An instantiated RUObject representing the model object.
 */
-(id)initWithJSONDictionary:(NSDictionary *)jsonDictionary;

@end
