//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UISwitch, WNYD_SettingItem;

@interface WNYD_SetCell : UITableViewCell
{
    WNYD_SettingItem *_item;
    UIButton *_myCheck;
    UIImageView *_arrowImgView;
    UISwitch *_mySwitch;
}

+ (id)cellWithTableView:(id)arg1;
- (void).cxx_destruct;
- (void)addMyCheckSelectionNotification;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) WNYD_SettingItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *myCheck; // @synthesize myCheck=_myCheck;
- (void)myCheckSelection:(id)arg1;
@property(retain, nonatomic) UISwitch *mySwitch; // @synthesize mySwitch=_mySwitch;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)switchChange:(id)arg1;

@end

