//
//  RUObject.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject.h"
#import "NSString+JSONParsingInformalProtocol.h"

@implementation RUObject

-(id)initWithJSONDictionary:(NSDictionary *)jsonDictionary {
	
	if ((self = [super init])) {
		
		id value;
		NSString *selectorString;
		SEL selector;
		
		NSArray *keys = [jsonDictionary allKeys];
		for (NSString *k in keys) {
			
			value = [jsonDictionary valueForKey:k];
			@try {
				selectorString = [k selectorValue];
			} @catch (NSException *e) {
				DLog(@"%@", e);
				continue;
			}
			selector = NSSelectorFromString(selectorString);
			if ([self respondsToSelector:selector]) {
				SuppressPerformSelectorLeakWarning([self performSelector:selector withObject:value]);
			}
#ifdef DEBUG
			else {
				DLog(@"Parsing Failed: %@ - %@", NSStringFromClass([self class]), k );
			}
#endif
			
		}
		
	}
	
	return self;
}

@end
