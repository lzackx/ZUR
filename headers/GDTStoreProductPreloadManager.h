//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GDTStoreProductPreloadManager : NSObject
{
    NSMutableDictionary *_ituneStores;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultManager;
+ (id)sharedGDTStoreProductPreloadManager;
- (void).cxx_destruct;
- (void)GDTfunctiond5NmGt;
- (void)GDTfunctionj5goRv:(id)arg1 viewController:(id)arg2;
- (long long)GDTfunctionp0Ahit:(id)arg1;
- (_Bool)GDTfunctionp0L149:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3;
- (_Bool)GDTfunctionq9ZWkw:(id)arg1;
- (_Bool)GDTfunctiont8pHQC:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3;
- (id)GDTfunctionv1MQNH:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *ituneStores; // @synthesize ituneStores=_ituneStores;

@end
