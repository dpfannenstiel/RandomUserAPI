//
//  RUSession.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject.h"

typedef void (^NSURLSessionTaskCompletion)(NSData *data, NSURLResponse *response, NSError *error);

@interface RUSession : RUObject

@property (nonatomic, readonly) NSURLSession *urlSession;

+(id)defaultSession;

@end
