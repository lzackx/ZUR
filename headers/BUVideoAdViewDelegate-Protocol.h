//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BUVideoAdView, NSError;

@protocol BUVideoAdViewDelegate <NSObject>

@optional
- (void)playerDidPlayFinish:(BUVideoAdView *)arg1;
- (void)videoAdView:(BUVideoAdView *)arg1 didLoadFailWithError:(NSError *)arg2;
- (void)videoAdView:(BUVideoAdView *)arg1 stateDidChanged:(long long)arg2;
- (void)videoAdViewDidClick:(BUVideoAdView *)arg1;
- (void)videoAdViewDidCloseOtherController:(BUVideoAdView *)arg1 interactionType:(long long)arg2;
- (void)videoAdViewFinishViewDidClick:(BUVideoAdView *)arg1;
@end
