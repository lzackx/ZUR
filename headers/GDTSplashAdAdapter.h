//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTSplashAdDelegate-Protocol.h"
#import "GDTSplashAdNetworkAdapterProtocol-Protocol.h"

@class GDTSplashAdImp, GDTSplashAdMediator, NSString, UIColor, UIImage;

@interface GDTSplashAdAdapter : NSObject <GDTSplashAdNetworkAdapterProtocol, GDTSplashAdDelegate>
{
    UIColor *backgroundColor;
    UIImage *backgroundImage;
    long long fetchDelay;
    GDTSplashAdMediator *_conncetor;
    GDTSplashAdImp *_splashAdImp;
    struct CGPoint skipButtonCenter;
}

+ (id)adapterVersion;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage;
- (void)cancelLoad;
@property(nonatomic) __weak GDTSplashAdMediator *conncetor; // @synthesize conncetor=_conncetor;
- (long long)eCPM;
- (id)eCPMLevel;
@property(nonatomic) long long fetchDelay; // @synthesize fetchDelay;
- (id)initWithAdNetworkConnector:(id)arg1 posId:(id)arg2 extStr:(id)arg3;
- (_Bool)isAdValid;
- (_Bool)isContractAd;
- (void)loadAd;
- (void)loadAdAndShowInWindow:(id)arg1 withBottomView:(id)arg2 skipView:(id)arg3;
- (long long)mediationPrice;
- (long long)priority;
@property(nonatomic) struct CGPoint skipButtonCenter; // @synthesize skipButtonCenter;
@property(retain, nonatomic) GDTSplashAdImp *splashAdImp; // @synthesize splashAdImp=_splashAdImp;
- (void)showAdInWindow:(id)arg1 withBottomView:(id)arg2 skipView:(id)arg3;
- (void)splashAdApplicationWillEnterBackground:(id)arg1;
- (void)splashAdClicked:(id)arg1;
- (void)splashAdClosed:(id)arg1;
- (void)splashAdDidDismissFullScreenModal:(id)arg1;
- (void)splashAdDidLoad:(id)arg1;
- (void)splashAdDidPresentFullScreenModal:(id)arg1;
- (void)splashAdExposured:(id)arg1;
- (void)splashAdFailToPresent:(id)arg1 withError:(id)arg2;
- (void)splashAdLifeTime:(unsigned long long)arg1;
- (void)splashAdSuccessPresentScreen:(id)arg1;
- (void)splashAdWillClosed:(id)arg1;
- (void)splashAdWillDismissFullScreenModal:(id)arg1;
- (void)splashAdWillPresentFullScreenModal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

