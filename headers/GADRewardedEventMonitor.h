//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdReward, GADFullScreenAdContent, GADObserverCollection;

@interface GADRewardedEventMonitor : NSObject
{
    GADFullScreenAdContent *_ad;
    GADObserverCollection *_observers;
    GADAdReward *_reward;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 view:(id)arg3;
- (void).cxx_destruct;
- (void)handleRewardGranted:(id)arg1;
- (void)handleVideoAction:(id)arg1;
- (void)handleVideoCompleted;
- (void)handleVideoStarted;
- (id)initWithAd:(id)arg1 reward:(id)arg2 view:(id)arg3;

@end
