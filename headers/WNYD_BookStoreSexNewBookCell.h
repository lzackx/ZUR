//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, UIImageView, UILabel, YBookDetailModel;

@interface WNYD_BookStoreSexNewBookCell : UICollectionViewCell
{
    YBookDetailModel *_bookModel;
    UIImageView *_bookCoverImageView;
    UILabel *_bookNameTitle;
    UILabel *_isSerializeLabel;
    UILabel *_authorLabel;
    UILabel *_shortInfoLabel;
    DALabeledCircularProgressView *_CoverProgressView;
}

+ (id)cellWithInitialize;
+ (id)viewFromNibNamed:(id)arg1 owner:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak DALabeledCircularProgressView *CoverProgressView; // @synthesize CoverProgressView=_CoverProgressView;
- (void)addShadowToView:(id)arg1 withColor:(id)arg2;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *bookCoverImageView; // @synthesize bookCoverImageView=_bookCoverImageView;
@property(retain, nonatomic) YBookDetailModel *bookModel; // @synthesize bookModel=_bookModel;
@property(nonatomic) __weak UILabel *bookNameTitle; // @synthesize bookNameTitle=_bookNameTitle;
@property(nonatomic) __weak UILabel *isSerializeLabel; // @synthesize isSerializeLabel=_isSerializeLabel;
@property(nonatomic) __weak UILabel *shortInfoLabel; // @synthesize shortInfoLabel=_shortInfoLabel;

@end

