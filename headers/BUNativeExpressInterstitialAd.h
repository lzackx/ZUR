//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUMopubAdMarkUpDelegate-Protocol.h"
#import "BUNativeExpressAdViewDelegate-Protocol.h"

@class BUNativeExpressAdManager, BUNativeExpressAdView, NSDictionary, NSString;
@protocol BUNativeExpresInterstitialAdDelegate;

@interface BUNativeExpressInterstitialAd : NSObject <BUNativeExpressAdViewDelegate, BUMopubAdMarkUpDelegate>
{
    id <BUNativeExpresInterstitialAdDelegate> _delegate;
    BUNativeExpressAdManager *_nativeExpressAdManager;
    BUNativeExpressAdView *_expressAdView;
    struct CGSize _adSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) __weak id <BUNativeExpresInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BUNativeExpressAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
- (id)initWithSlotID:(id)arg1 adSize:(struct CGSize)arg2;
- (id)initWithSlotID:(id)arg1 adloadSeq:(long long)arg2 primeRit:(id)arg3 adSize:(struct CGSize)arg4;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (void)loadAdData;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) BUNativeExpressAdManager *nativeExpressAdManager; // @synthesize nativeExpressAdManager=_nativeExpressAdManager;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
- (void)setMopubAdMarkUp:(id)arg1;
- (_Bool)showAdFromRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
