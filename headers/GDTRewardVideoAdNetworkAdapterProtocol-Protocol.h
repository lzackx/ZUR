//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdNetworkAdapterProtocol-Protocol.h"

@class UIViewController;

@protocol GDTRewardVideoAdNetworkAdapterProtocol <GDTBaseAdNetworkAdapterProtocol>
- (long long)expiredTimestamp;
- (_Bool)isAdValid;
- (void)loadAd;
- (_Bool)showAdFromRootViewController:(UIViewController *)arg1;

@optional
@property(nonatomic) _Bool videoMuted;
@end
