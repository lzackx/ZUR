//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol IGdtNativeAppStoreProtocol <NSObject>
- (void)openAppStore:(NSString *)arg1 itunesId:(NSString *)arg2 campaignId:(NSString *)arg3 providerId:(NSString *)arg4 traceId:(NSString *)arg5 productId:(long long)arg6 viewController:(UIViewController *)arg7;
- (void)preLoadAppStore:(NSString *)arg1 itunesId:(NSString *)arg2 campaignId:(NSString *)arg3 providerId:(NSString *)arg4;
@end

