//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUNativeExpressBannerView, NSArray, NSError;

@protocol BUNativeExpressBannerViewDelegate <NSObject>

@optional
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)arg1 didLoadFailWithError:(NSError *)arg2;
- (void)nativeExpressBannerAdView:(BUNativeExpressBannerView *)arg1 dislikeWithReason:(NSArray *)arg2;
- (void)nativeExpressBannerAdViewDidClick:(BUNativeExpressBannerView *)arg1;
- (void)nativeExpressBannerAdViewDidCloseOtherController:(BUNativeExpressBannerView *)arg1 interactionType:(long long)arg2;
- (void)nativeExpressBannerAdViewDidLoad:(BUNativeExpressBannerView *)arg1;
- (void)nativeExpressBannerAdViewRenderFail:(BUNativeExpressBannerView *)arg1 error:(NSError *)arg2;
- (void)nativeExpressBannerAdViewRenderSuccess:(BUNativeExpressBannerView *)arg1;
- (void)nativeExpressBannerAdViewWillBecomVisible:(BUNativeExpressBannerView *)arg1;
@end
