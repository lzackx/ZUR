//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTAdService.h"

@interface GDTSplashService : GDTAdService
{
}

+ (void)exposureAdWithAdModel:(id)arg1 replacementData:(id)arg2 placementID:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)fetchSplashAdModelWithPlacementId:(id)arg1 threadId:(id)arg2 serverType:(long long)arg3 disableServerMediation:(_Bool)arg4 hotLaunch:(_Bool)arg5 loadAdParams:(id)arg6 success:(CDUnknownBlockType)arg7 notice:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;
+ (id)getOrderWhiteListDict:(id)arg1;
+ (id)getValidateOrderIndexMapForService:(id)arg1;
+ (void)sendEmptyOrder:(id)arg1 placementId:(id)arg2;

@end
