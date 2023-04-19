//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BUMopubAdMarkUpDelegate-Protocol.h"
#import "BUNativeExpressAdViewDelegate-Protocol.h"

@class BUNativeExpressAdManager, BUNativeExpressAdView, NSDictionary, NSString, NSTimer, UIViewController;
@protocol BUNativeExpressBannerViewDelegate;

@interface BUNativeExpressBannerView : UIView <BUNativeExpressAdViewDelegate, BUMopubAdMarkUpDelegate>
{
    _Bool _isCarousel;
    id <BUNativeExpressBannerViewDelegate> _delegate;
    long long _interval;
    UIViewController *_rootViewController;
    BUNativeExpressAdView *_expressAdView;
    BUNativeExpressAdView *_anotherExpressAdView;
    BUNativeExpressAdManager *_nativeExpressAdManager;
    BUNativeExpressAdManager *_anotherAdManager;
    NSTimer *_timer;
    long long _playItems;
    NSString *_lastAdm;
    struct CGSize _adSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) BUNativeExpressAdManager *anotherAdManager; // @synthesize anotherAdManager=_anotherAdManager;
@property(retain, nonatomic) BUNativeExpressAdView *anotherExpressAdView; // @synthesize anotherExpressAdView=_anotherExpressAdView;
- (void)dealloc;
@property(nonatomic) __weak id <BUNativeExpressBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BUNativeExpressAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
- (id)initWithSlotID:(id)arg1 adloadSeq:(long long)arg2 primeRit:(id)arg3 rootViewController:(id)arg4 adSize:(struct CGSize)arg5 IsSupportDeepLink:(_Bool)arg6;
- (id)initWithSlotID:(id)arg1 adloadSeq:(id)arg2 primeRit:(id)arg3 rootViewController:(id)arg4 adSize:(struct CGSize)arg5 IsSupportDeepLink:(_Bool)arg6 interval:(long long)arg7;
- (id)initWithSlotID:(id)arg1 rootViewController:(id)arg2 adSize:(struct CGSize)arg3 IsSupportDeepLink:(_Bool)arg4;
- (id)initWithSlotID:(id)arg1 rootViewController:(id)arg2 adSize:(struct CGSize)arg3 IsSupportDeepLink:(_Bool)arg4 interval:(long long)arg5;
- (void)initializeNativeExpressManagerWithSlotID:(id)arg1 adloadSeq:(long long)arg2 primeRit:(id)arg3 rootViewController:(id)arg4 adSize:(struct CGSize)arg5 IsSupportDeepLink:(_Bool)arg6;
@property(readonly, nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool isCarousel; // @synthesize isCarousel=_isCarousel;
@property(copy, nonatomic) NSString *lastAdm; // @synthesize lastAdm=_lastAdm;
- (void)loadAdData;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) BUNativeExpressAdManager *nativeExpressAdManager; // @synthesize nativeExpressAdManager=_nativeExpressAdManager;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (void)nativeExpressAdView:(id)arg1 dislikeWithReason:(id)arg2;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
@property(nonatomic) long long playItems; // @synthesize playItems=_playItems;
- (void)replaceExpressAdView:(id)arg1 isAnother:(_Bool)arg2;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)setMopubAdMarkUp:(id)arg1;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
