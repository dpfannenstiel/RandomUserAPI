//
//  RUSession.h
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUObject.h"

@interface RUSession : RUObject

@property (nonatomic, readonly) NSURLSession *urlSession;

+(id)defaultSession;

@end
