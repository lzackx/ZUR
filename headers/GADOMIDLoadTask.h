//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface GADOMIDLoadTask : NSObject
{
    NSURL *_url;
    unsigned long long _attemptsCount;
    unsigned long long _attemptNumber;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _responseParser;
    CDUnknownBlockType _completionHandler;
}

+ (id)sharedSession;
+ (id)taskToLoadStringFromURL:(id)arg1 attemptsCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)taskToLoadStringFromURL:(id)arg1 attemptsCount:(unsigned long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)taskToSendPingToURL:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(readonly, nonatomic) unsigned long long attemptsCount; // @synthesize attemptsCount=_attemptsCount;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (void)handleResponseWithData:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 attemptsCount:(unsigned long long)arg2 completionQueue:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType responseParser; // @synthesize responseParser=_responseParser;
- (void)start;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

@end

