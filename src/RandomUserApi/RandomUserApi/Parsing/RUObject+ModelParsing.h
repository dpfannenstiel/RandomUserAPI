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

// TODO: Figure this out.
#define RUParseModelObject(target, className, value) \
	className *object = [[className alloc] initWithJSONDictionary:value]; \
	self.target = object;

@interface RUObject (ModelParsing)

-(NSString *)parseString:(id)value;

@end
