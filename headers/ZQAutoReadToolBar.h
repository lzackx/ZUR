//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol AutoReadToolBarDelegate;

@interface ZQAutoReadToolBar : UIView
{
    double _speed;
    id <AutoReadToolBarDelegate> _delegate;
    UIView *_topView;
    UIView *_botView;
    UIButton *_speedSlowBtn;
    UIButton *_speedUpBtn;
    UIButton *_endAutoReadBtn;
    UILabel *_speedLabel;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIView *botView; // @synthesize botView=_botView;
@property(nonatomic) __weak id <AutoReadToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endAutoBtnClicked:(id)arg1;
@property(nonatomic) __weak UIButton *endAutoReadBtn; // @synthesize endAutoReadBtn=_endAutoReadBtn;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) __weak UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(nonatomic) __weak UIButton *speedSlowBtn; // @synthesize speedSlowBtn=_speedSlowBtn;
@property(nonatomic) __weak UIButton *speedUpBtn; // @synthesize speedUpBtn=_speedUpBtn;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
- (void)slowBtnClicked:(id)arg1;
- (void)upBtnClicked:(id)arg1;

@end
