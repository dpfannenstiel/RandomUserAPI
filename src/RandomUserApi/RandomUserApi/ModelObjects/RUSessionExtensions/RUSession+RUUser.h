//
//  RUSession+RUUser.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/18/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUSession.h"
#import "RUHeaders.h"

@interface RUSession (RUUser)

/*! Retrieve a user from the service.
 
 A NSURLSessionDataTask will be generated and communicate with the server.  The
 response from the server will be handled internally and then the results will
 be passed to the completionBlock.
 
 @param parameters A dictionary of parameters that will be sent to the service.
 @param completionBlock A response block what will be called on the main thread
 after communication with the server is complete.
 */
-(void)getUserForParameters:(NSDictionary *)parameters completion:(RUSessionModelObjectCompletion)completionBlock;

@end
