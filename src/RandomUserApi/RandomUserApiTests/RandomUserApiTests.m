//
//  RandomUserApiTests.m
//  RandomUserApiTests
//
//  Created by Dustin Pfannenstiel on 1/9/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "RUKit.h"

#define Waiting(x) \
	while(!x) { \
		[[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate distantFuture]]; \
	}

@interface RandomUserApiTests : XCTestCase

@end

@implementation RandomUserApiTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

-(void)testUrlGeneration {
	
	NSString *scheme = @"http";
	NSString *host = @"test.com";
	NSArray *path = @[@"first", @"second"];
	NSString *parameters = @"sample=param";
	
	NSString *testUrlStringValue = [NSString stringWithFormat:@"%@://%@/first/second?%@", scheme, host, parameters];
	
	NSURL *url = [NSURL urlForScheme:scheme host:host path:path parameters:parameters];
	
	NSString *absoluteURL = [url absoluteString];
	
	XCTAssertTrue([testUrlStringValue isEqualToString:absoluteURL], @"Test String: %@, is unequal to sample string: %@", absoluteURL, testUrlStringValue);
	
}

-(void)testSimpleConnection {
	
	__block BOOL complete = NO;
	__block BOOL success = NO;
	
	[[RUSession defaultSession] getUserForParameters:nil completion:^(RUObject *object, NSError *error) {

		RUUser *o = (RUUser *)object;
		
		if (error == nil) {
			DLog(@"Object: %@", o);
			success = YES;
		}
		
		complete = YES;
	
	}];
	
	Waiting(complete);
	
	XCTAssertTrue(success, @"An error occured getting a user");
	
}

@end
