//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WNYD_HotSerachHeaderView : UIView
{
    NSString *_headerTitle;
    NSString *_timeTitle;
    NSString *_desTitle;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_desLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) NSString *desTitle; // @synthesize desTitle=_desTitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSString *timeTitle; // @synthesize timeTitle=_timeTitle;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
