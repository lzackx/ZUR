//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTMService : NSObject
{
}

+ (id)baseUrlWithServerType:(long long)arg1;
+ (void)fetchConfigWithAppId:(id)arg1 version:(id)arg2 deviceId:(id)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (void)postClickWithNetworkConfigModel:(id)arg1;
+ (void)postExposeWithNetworkConfigModel:(id)arg1;
+ (void)postLoadWithPosConfigModel:(id)arg1 networkConfigModel:(id)arg2 array:(id)arg3 reportDict:(id)arg4 GDTfunctiona7byNu:(_Bool)arg5;

@end
