//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDT_Reachability : NSObject
{
    _Bool _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (long long)currentMMANetworkStatus;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (void)setMMANetworkStatus:(long long)arg1;
- (long long)GDTfunctionh9cGv0:(unsigned int)arg1;
- (long long)GDTfunctiono5ZUbd:(unsigned int)arg1;
- (_Bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (_Bool)startNotifier;
- (void)stopNotifier;

@end

