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

-(void)getUserForParameters:(NSDictionary *)parameters completion:(RUSessionModelObjectCompletion)completionBlock;

@end
