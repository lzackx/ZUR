//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GDTMediaCacheWorkerManager : NSObject
{
    NSMutableDictionary *_cachedWorkerDictionary;
    NSMutableDictionary *_consumerDictionary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)addConsumer:(id)arg1 forURL:(id)arg2;
- (id)cacheWorkerForURL:(id)arg1;
- (id)cacheWorkerForURL:(id)arg1 specifiedFilePath:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *cachedWorkerDictionary; // @synthesize cachedWorkerDictionary=_cachedWorkerDictionary;
@property(retain, nonatomic) NSMutableDictionary *consumerDictionary; // @synthesize consumerDictionary=_consumerDictionary;
- (id)init;
- (void)removeConsumer:(id)arg1 forURL:(id)arg2;

@end
