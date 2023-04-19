//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUCacheManager : NSObject
{
}

+ (_Bool)addCacheFile:(id)arg1 forURL:(id)arg2 error:(id *)arg3;
+ (id)cacheConfigurationForURL:(id)arg1;
+ (id)cacheDirectory;
+ (double)cacheUpdateNotifyInterval;
+ (id)cachedFilePathForURL:(id)arg1;
+ (unsigned long long)calculateCachedSizeWithError:(id *)arg1;
+ (void)cleanAllCacheWithError:(id *)arg1;
+ (void)cleanCacheForURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (void)setCacheDirectory:(id)arg1;
+ (void)setCacheUpdateNotifyInterval:(double)arg1;
+ (void)setFileNameRules:(CDUnknownBlockType)arg1;

@end

