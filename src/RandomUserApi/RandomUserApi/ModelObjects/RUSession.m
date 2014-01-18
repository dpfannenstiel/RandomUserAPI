//
//  RUSession.m
//  RandomUserApi
//
//  Created by Dustin Pfannenstiel on 1/16/14.
//  Copyright (c) 2014 Dustin Pfannenstiel. All rights reserved.
//

#import "RUSession.h"

static RUSession *_defaultSession = nil;

@interface RUSession () <NSURLSessionTaskDelegate>

@property (nonatomic, strong) NSURLSession *internalSession;

@end

@implementation RUSession

+(instancetype)defaultSession {

	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{

		_defaultSession = [[self alloc] init];
		
	});
	
	return _defaultSession;
}

-(id)init {
	
	if ((self = [super init])) {
		_internalSession = [NSURLSession sessionWithConfiguration:nil delegate:self delegateQueue:nil];

	}
	
	return self;
}

-(NSURLSession *)urlSession {
	return _internalSession;
}

#pragma mark - NSURLSessionDelegate
- (void)URLSession:(NSURLSession *)session didBecomeInvalidWithError:(NSError *)error {
	
}

- (void)URLSession:(NSURLSession *)session didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition, NSURLCredential *))completionHandler {
	
}

- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)session {
	
}

#pragma mark - NSURLSessionTaskDelegate
- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error {
	
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didReceiveChallenge:(NSURLAuthenticationChallenge *)challenge completionHandler:(void (^)(NSURLSessionAuthChallengeDisposition, NSURLCredential *))completionHandler {
	
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend {
	
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task needNewBodyStream:(void (^)(NSInputStream *))completionHandler {
	
}

- (void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task willPerformHTTPRedirection:(NSHTTPURLResponse *)response newRequest:(NSURLRequest *)request completionHandler:(void (^)(NSURLRequest *))completionHandler {
	
}

@end
