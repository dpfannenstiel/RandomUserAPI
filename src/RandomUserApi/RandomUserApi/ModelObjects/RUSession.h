//
//  RUSession.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject.h"

typedef void (^NSURLSessionTaskCompletion)(NSData *data, NSURLResponse *response, NSError *error);

/*! RUSession is responsible for all communication with the API
 */
@interface RUSession : RUObject

/*! The connection session.
 
 The that can be used to generate data tasks.
 */
@property (nonatomic, readonly) NSURLSession *urlSession;

/*! The singleton instance of RUSession.
 */
+(id)defaultSession;

@end
