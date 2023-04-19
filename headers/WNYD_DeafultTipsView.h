//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface WNYD_DeafultTipsView : UIView
{
    NSString *_imageString;
    NSString *_content;
    NSString *_rightTitle;
    NSString *_leftTitle;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
}

- (void).cxx_destruct;
- (void)buildUI;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)clickCancel;
- (void)clickSure;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void)disMiss;
@property(copy, nonatomic) NSString *imageString; // @synthesize imageString=_imageString;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)init;
@property(nonatomic) __weak UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(nonatomic) __weak UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)show;

@end

