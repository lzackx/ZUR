//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTUnifiedNativeAdDataObject, GDTUnifiedNativeAdView, NSArray, UIView;
@protocol GDTUnifiedNativeAdViewImpDelegate;

@protocol GDTUnifiedNativeAdViewImpProtocol <NSObject>
- (void)GDTfunctionn5fvoM;
@property(readonly, nonatomic) GDTUnifiedNativeAdDataObject *dataObject;
@property(nonatomic) __weak id <GDTUnifiedNativeAdViewImpDelegate> delegate;
- (void)registerClickableCallToActionView:(UIView *)arg1;
- (void)registerDataObject:(GDTUnifiedNativeAdDataObject *)arg1 clickableViews:(NSArray *)arg2;
@property(nonatomic) __weak GDTUnifiedNativeAdView *unifiedNativeAdView;
- (void)unregisterDataObject;
@end

