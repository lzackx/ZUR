//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JCommonReportManager : NSObject
{
}

+ (void)sendApnsStateReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendAppCrashReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendAppDeviceInfoReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendAppLaunchReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendAppLocationReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendAppTerminalReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendBatteryInfoReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendBoardReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)sendSdkInfoReport:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

