//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, NSArray, NSString, UIImageView, UILabel, YBookModel;

@interface WNYD_CollectionViewCell : UICollectionViewCell
{
    YBookModel *_book;
    NSString *_iconUrl;
    UIImageView *_imageV;
    UILabel *_bookName;
    DALabeledCircularProgressView *_progressView;
    NSArray *_bookIconCovers;
}

+ (id)cellWithInitialize;
- (void).cxx_destruct;
@property(retain, nonatomic) YBookModel *book; // @synthesize book=_book;
@property(retain, nonatomic) NSArray *bookIconCovers; // @synthesize bookIconCovers=_bookIconCovers;
@property(nonatomic) __weak UILabel *bookName; // @synthesize bookName=_bookName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) __weak UIImageView *imageV; // @synthesize imageV=_imageV;
@property(nonatomic) __weak DALabeledCircularProgressView *progressView; // @synthesize progressView=_progressView;

@end
