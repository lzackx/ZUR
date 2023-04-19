//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, GADURLSession, GADWebViewPinger, NSMutableSet;
@protocol OS_dispatch_queue;

@interface GADPinger : NSObject
{
    GADURLSession *_pingerSession;
    GADWebViewPinger *_webViewPinger;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableSet *_activeRetryURLStrings;
    GADObserverCollection *_observers;
    double _lastRetryAttemptInterval;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (id)pendingRetryURLStrings;
- (void)pingRequest:(id)arg1 context:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)pingRetryURLInternal:(id)arg1;
- (void)pingRetryURLs;
- (void)pingRetryURLsIfTimeElapsed;
- (void)pingURL:(id)arg1 context:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeURLStringFromPendingRetryRequests:(id)arg1;
- (void)savePendingRetryURLStrings:(id)arg1;
- (void)storeRetryURL:(id)arg1;

@end

