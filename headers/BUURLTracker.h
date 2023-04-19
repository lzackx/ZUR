//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUPersistence, NSURLSession;

@interface BUURLTracker : NSObject
{
    BUPersistence *_persistence;
    NSURLSession *_uploadSession;
}

+ (id)shareURLTracker;
- (void).cxx_destruct;
- (id)adIdCachedKey:(id)arg1 dataDict:(id)arg2;
- (void)addTimesCachedKey:(id)arg1 dataDict:(id)arg2;
- (void)cacheFailedURL:(id)arg1 dict:(id)arg2;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) BUPersistence *persistence; // @synthesize persistence=_persistence;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)removeURLFromCacheWithKey:(id)arg1;
- (void)sendAdEvent:(id)arg1 url:(id)arg2 statusCode:(long long)arg3;
- (void)sendEventWithURL:(id)arg1 statusCode:(long long)arg2;
@property(retain, nonatomic) NSURLSession *uploadSession; // @synthesize uploadSession=_uploadSession;
- (long long)timesCachedKey:(id)arg1 dataDict:(id)arg2;
- (void)trackURL:(id)arg1;
- (void)trackURL:(id)arg1 model:(id)arg2;
- (void)trackURL:(id)arg1 model:(id)arg2 isNormal:(_Bool)arg3;
- (void)trackURLs:(id)arg1;
- (void)trackURLs:(id)arg1 model:(id)arg2;
- (id)urlCachedKey:(id)arg1 dataDict:(id)arg2;

@end

