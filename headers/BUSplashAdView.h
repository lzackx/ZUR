//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BUAdSlot, BUDislikeContext, BUGifImageView, BUMaterialMeta, BUSkipButton, NSDictionary, NSString, UIImageView, UITapGestureRecognizer, UIViewController;
@protocol BUSplashAdDelegate;

@interface BUSplashAdView : UIView
{
    _Bool _hideSkipButton;
    NSString *_slotID;
    double _tolerateTimeout;
    id <BUSplashAdDelegate> _delegate;
    UIViewController *_rootViewController;
    BUGifImageView *_splashImageView;
    BUSkipButton *_skipButton;
    UITapGestureRecognizer *_tapGesture;
    BUAdSlot *_slot;
    BUMaterialMeta *_materialMetaModel;
    UIImageView *_buLogoIcon;
    double _showTime;
    BUDislikeContext *_dislikeContext;
}

- (void).cxx_destruct;
- (void)addAccessibilityIdentifier;
@property(retain, nonatomic) UIImageView *buLogoIcon; // @synthesize buLogoIcon=_buLogoIcon;
- (void)buildupSkipButton;
- (void)buildupView;
- (id)c_xyDict;
- (void)dealloc;
@property(nonatomic) __weak id <BUSplashAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool hideSkipButton; // @synthesize hideSkipButton=_hideSkipButton;
- (id)initWithSlotID:(id)arg1 adloadSeq:(long long)arg2 primeRit:(id)arg3 frame:(struct CGRect)arg4;
- (id)initWithSlotID:(id)arg1 frame:(struct CGRect)arg2;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (void)layoutSubviews;
- (void)loadAdData;
@property(retain, nonatomic) BUMaterialMeta *materialMetaModel; // @synthesize materialMetaModel=_materialMetaModel;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
- (void)nativeAdDidLoad:(id)arg1 isCache:(id)arg2;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)setContextBlock:(id)arg1;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) BUSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) BUGifImageView *splashImageView; // @synthesize splashImageView=_splashImageView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) double tolerateTimeout; // @synthesize tolerateTimeout=_tolerateTimeout;
- (void)skipTapped:(id)arg1;
@property(readonly, copy, nonatomic) NSString *slotID; // @synthesize slotID=_slotID;
- (void)splashTapped:(id)arg1;
- (void)splashViewDidClose;
- (void)splashViewWillClose;
- (void)startTrackView:(id)arg1 isCache:(id)arg2;
- (void)updateViewWithModel:(id)arg1;

@end
