//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SDAnimatedImageView, UILabel, WNYD_AdvertConfigModel, WNYD_AdvertModel;
@protocol WNYD_OwnAdViewDelegate;

@interface WNYD_OwnAdView : UIView
{
    WNYD_AdvertConfigModel *_ADModel;
    id <WNYD_OwnAdViewDelegate> _mydelegate;
    SDAnimatedImageView *_adImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    WNYD_AdvertModel *_model;
}

+ (id)shareManager;
- (void).cxx_destruct;
@property(retain, nonatomic) WNYD_AdvertConfigModel *ADModel; // @synthesize ADModel=_ADModel;
- (void)WNYD_buildUI;
- (void)WNYD_clickADImageView;
- (void)WNYD_updateColor;
@property(nonatomic) __weak SDAnimatedImageView *adImageView; // @synthesize adImageView=_adImageView;
- (void)clickAdView;
- (void)clickClose;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void)getData:(id)arg1;
- (id)getRootNavController;
@property(retain, nonatomic) WNYD_AdvertModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <WNYD_OwnAdViewDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
- (void)resetUI;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

