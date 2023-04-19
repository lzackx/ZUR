//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORESRVResolverDelegate-Protocol.h"

@class JCORESRVResolver, NSArray, NSDictionary, NSString, NSThread;

@interface JCOREAddressAnalysisController : NSObject <JCORESRVResolverDelegate>
{
    long long _parseHostState;
    NSArray *_dataList;
    NSDictionary *_dnsResults;
    NSDictionary *_srvResults;
    NSDictionary *_wifiResults;
    NSThread *_currentThread;
    JCORESRVResolver *_resolver;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)addAddressAnalysis:(id)arg1;
- (void)addDNSCache:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addSRVCache:(id)arg1;
- (void)addValue:(id)arg1;
- (void)addWifiCache:(id)arg1;
- (id)addressListForType:(id)arg1 statusCode:(long long)arg2 within:(double)arg3;
- (id)addressListForType:(id)arg1 within:(double)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (id)arrayInFixedTime:(double)arg1;
- (id)arrayWithSisResult:(id)arg1;
- (id)arrayWithType:(id)arg1 array:(id)arg2;
@property(nonatomic) __weak NSThread *currentThread; // @synthesize currentThread=_currentThread;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *dnsResults; // @synthesize dnsResults=_dnsResults;
- (id)filePath;
- (id)findAnalysisObject:(id)arg1;
- (long long)findIndex:(id)arg1;
- (id)findObjectWithAnalysis:(id)arg1;
- (id)getAddressFromDNS:(id)arg1 timeout:(double)arg2;
- (id)getAddressFromSRV:(id)arg1 timeout:(double)arg2;
- (id)getCacheWithWifiInfo:(id)arg1;
- (id)getDNSCacheWithDomain:(id)arg1;
- (id)getSRVCacheWithDomain:(id)arg1;
- (id)init;
- (id)newObjectWith:(id)arg1;
@property(nonatomic) long long parseHostState; // @synthesize parseHostState=_parseHostState;
- (id)parseWithHost:(id)arg1 timeout:(double)arg2;
- (void)removeDNSCache:(id)arg1;
- (void)removeDNSCacheWithDomain:(id)arg1;
- (void)removeResolver;
- (void)removeSRVCache:(id)arg1;
- (void)removeSrvRecode;
- (void)removeWifiCache:(id)arg1;
- (void)reset:(id)arg1;
@property(readonly, nonatomic) JCORESRVResolver *resolver; // @synthesize resolver=_resolver;
- (void)restoreAnalysisDataList:(id)arg1;
- (void)restoreDataFromFile;
- (void)restoreDnsResults:(id)arg1;
- (void)restoreSrvResults:(id)arg1;
- (void)restoreWifiCache:(id)arg1;
- (id)runWithSRVName:(id)arg1 timeout:(double)arg2;
- (void)saveDataToFile;
@property(retain, nonatomic) NSDictionary *srvResults; // @synthesize srvResults=_srvResults;
@property(retain, nonatomic) NSDictionary *wifiResults; // @synthesize wifiResults=_wifiResults;
- (void)sortList;
- (double)successRateWithArray:(id)arg1 type:(id)arg2;
- (void)updateObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

