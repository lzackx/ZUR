//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView, WNYD_HistorySaveModel;

@interface WNYD_HistoryListViewCell : UITableViewCell
{
    CDUnknownBlockType _ClickOnShelfBlock;
    UIImageView *_coverImageV;
    UILabel *_titleLabel;
    UILabel *_author;
    UILabel *_timeLabel;
    UIButton *_onshelfBtn;
    UIView *_lineView;
    NSLayoutConstraint *_imageX;
    WNYD_HistorySaveModel *_saveBookM;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType ClickOnShelfBlock; // @synthesize ClickOnShelfBlock=_ClickOnShelfBlock;
@property(nonatomic) __weak UILabel *author; // @synthesize author=_author;
- (void)awakeFromNib;
- (void)clickOnshelf:(id)arg1;
@property(nonatomic) __weak UIImageView *coverImageV; // @synthesize coverImageV=_coverImageV;
- (void)getDetailWithBook_id:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *imageX; // @synthesize imageX=_imageX;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIButton *onshelfBtn; // @synthesize onshelfBtn=_onshelfBtn;
@property(retain, nonatomic) WNYD_HistorySaveModel *saveBookM; // @synthesize saveBookM=_saveBookM;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
