//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSURL, UIImage;
@protocol OS_dispatch_queue;

@interface GADSafeBrowsingReport : NSObject
{
    NSMutableArray *_resources;
    NSNumber *_lastPreClickResourceIndex;
    NSMutableDictionary *_resourceIndexForCanonicalURL;
    NSMutableDictionary *_requestIndicesForRedirectToURL;
    NSMutableDictionary *_parentTransactionForTransaction;
    NSMutableDictionary *_childTransactionsForTransaction;
    NSMutableDictionary *_requestIPAddresses;
    NSMutableSet *_autoClickResources;
    NSString *_clickString;
    NSSet *_excludedHeaders;
    NSURL *_landingPageURL;
    NSURL *_mainDocumentURL;
    UIImage *_renderedAd;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)addAutoClickAttempt:(id)arg1;
- (void)addClickThrough:(id)arg1;
- (void)addPlaceholderTransactionForRequest:(id)arg1;
- (void)addTransaction:(id)arg1;
- (void)addTransaction:(id)arg1 parentIndex:(id)arg2;
- (void)createDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dictionaryForResourceAtIndex:(unsigned long long)arg1;
- (id)initWithRootTransaction:(id)arg1 configuration:(id)arg2;
@property(copy) NSURL *mainDocumentURL;
@property(readonly) _Bool malicious;
- (id)parentIndexForRequest:(id)arg1;
- (id)redirectSourceForRequest:(id)arg1;
- (id)referringResourceForRequest:(id)arg1;
@property(retain) UIImage *renderedAd;

@end

