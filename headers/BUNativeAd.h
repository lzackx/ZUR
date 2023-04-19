//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUMopubAdMarkUpDelegate-Protocol.h"

@class BUAdSlot, BUDislikeButton, BUDislikeContext, BUMaterialMeta, BUVideoAdView, NSHashTable, NSString, UIViewController;
@protocol BUNativeAdDelegate;

@interface BUNativeAd : NSObject <BUMopubAdMarkUpDelegate>
{
    _Bool _isNativeExpress;
    BUAdSlot *_adslot;
    BUMaterialMeta *_data;
    id <BUNativeAdDelegate> _delegate;
    UIViewController *_rootViewController;
    NSHashTable *_tapGestureRecognizers;
    BUDislikeContext *_dislikeContext;
    BUDislikeButton *_dislikeButton;
    BUVideoAdView *_videoAdView;
    long long _drawVideoType;
}

- (void).cxx_destruct;
- (void)adaptContext:(id)arg1;
- (void)addTapGestureRecognizer:(id)arg1;
@property(retain, nonatomic) BUAdSlot *adslot; // @synthesize adslot=_adslot;
- (id)c_xyDict;
@property(retain, nonatomic) BUMaterialMeta *data; // @synthesize data=_data;
- (void)dealloc;
@property(nonatomic) __weak id <BUNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dislikeAction:(id)arg1;
@property(retain, nonatomic) BUDislikeButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) long long drawVideoType; // @synthesize drawVideoType=_drawVideoType;
- (long long)getInteractionType;
- (void)handleDownloadTap:(id)arg1;
- (void)handleOpenSafari:(id)arg1;
- (void)handleOpenURLPageTap:(id)arg1;
- (void)handlePhoneCallTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)handleVideoAdTap:(id)arg1;
- (id)initWithSlot:(id)arg1;
@property(nonatomic) _Bool isNativeExpress; // @synthesize isNativeExpress=_isNativeExpress;
- (void)loadAdData;
- (id)methodNameStringFromInteractionType:(long long)arg1;
- (void)preLoadVideoData;
- (void)registerClickContainer:(id)arg1 withClickableViews:(id)arg2;
- (void)registerContainer:(id)arg1 withClickableViews:(id)arg2;
- (void)registerShowContainer:(id)arg1 withClickableViews:(id)arg2;
- (void)registerShowContainer:(id)arg1 withClickableViews:(id)arg2 needRepeat:(_Bool)arg3;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)setContextBlock:(id)arg1;
- (void)setMopubAdMarkUp:(id)arg1;
@property(retain, nonatomic) NSHashTable *tapGestureRecognizers; // @synthesize tapGestureRecognizers=_tapGestureRecognizers;
@property(retain, nonatomic) BUVideoAdView *videoAdView; // @synthesize videoAdView=_videoAdView;
- (id)splashC_xyDict;
- (void)trackWithLabel:(id)arg1 extraDic:(id)arg2 adExtraDataDic:(id)arg3 ignoreLandscape:(_Bool)arg4;
- (void)unregisterView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

