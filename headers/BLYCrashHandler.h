//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLYCrashHandler : NSObject
{
}

+ (void)detectiveHandlerRunning;
+ (long long)installHandlerWithCrashType:(long long)arg1;
+ (id)sharedHandler;
+ (void)uninstallHandlerByCrashType:(long long)arg1;
- (id)init;
- (_Bool)installHandler;
- (void)uninstallHandler;

@end

