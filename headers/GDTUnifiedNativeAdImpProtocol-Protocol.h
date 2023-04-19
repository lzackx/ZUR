//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTLoadAdParams, GDTUnifiedNativeAd, GDTUnifiedNativeAdDataObject, NSDictionary, NSString;
@protocol GDTUnifiedNativeAdDelegate;

@protocol GDTUnifiedNativeAdImpProtocol <NSObject>
@property(copy, nonatomic) NSString *adNetworkName;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate;
- (id)initWithPlacementId:(NSString *)arg1;
- (id)initWithPlacementId:(NSString *)arg1 serverType:(long long)arg2;
- (void)loadAd;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
- (void)loadAdWithAdCount:(long long)arg1;
@property(nonatomic) long long maxVideoDuration;
@property(nonatomic) long long minVideoDuration;
@property(retain, nonatomic) NSDictionary *tagDict;
@property(nonatomic) __weak GDTUnifiedNativeAd *unifiedNativeAd;
@property(copy, nonatomic) NSString *vastClassName;
@property(nonatomic) unsigned long long videoPlayPolicy;
@property(nonatomic) unsigned long long videoRenderType;

@optional
- (void)GDTfunctionp4V713:(GDTUnifiedNativeAdDataObject *)arg1;
@end

