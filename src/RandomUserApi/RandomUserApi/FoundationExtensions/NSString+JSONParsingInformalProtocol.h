//
//  NSString+JSONParsingInformalProtocol.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const JPIPException;

@interface NSString (JSONParsingInformalProtocol)

/*! Generates a formatted selector string from the reciever.
 
 The reciever has it's first character capitalized and replaces the whitespace
 with an "_".  Then it is prefixed with the stiring "parse" and suffixed with a
 ":".
 
 @return A formatted selector string.
 @throws JPIPException The JSON Parsing Informal Protocol requires selector source
 values to be at least one character in length.
 */
-(NSString *)selectorValue;

/*! Generate a string properly encoded for use in an url.
 
 This method encodes a string for use in an url, espicially as a query parameter
 value.  Some characters such as "=", "?", and "&" are acceptable in an URL, but
 have to be encoded to not be interpreted by the service as control characters.
 
 @return The encoded string.
 */
-(NSString *)urlEncoded;

@end
