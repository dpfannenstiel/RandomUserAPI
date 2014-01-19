//
//  RUObject+ModelParsing.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject.h"

extern NSString * const RUObjectException;

#define RUParseString(target, value) \
	NSString *parsedValue = nil; \
	@try { \
		parsedValue = [self parseString:value];	\
	} \
	@catch (NSException *e) { \
		NSLog(@"%@", e); \
	} \
	self.target = parsedValue;

#define RUParseModelObject(target, className, value) \
	className *object = [[className alloc] initWithJSONDictionary:value]; \
	self.target = object;

@interface RUObject (ModelParsing)

/*! Get the string value for an object for parsing purposes.
 
 The provided value is turned into a string if at all possible.  If the value is
 a string it is cast and returned.  If it is a NSNumber a string is generated.
 If value responds to `stringValue` is used to parse the value.
 
 @param value The value to parse to a string.
 @return A string representation of the passed object or `nil` if the value is nil.
 @throws RUObjectException if the value may not be parsed to a string.
 */
-(NSString *)parseString:(id)value;

@end
