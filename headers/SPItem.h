//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface SPItem : UIButton
{
    double _imageRatio;
    long long _imagePosition;
}

@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) double imageRatio; // @synthesize imageRatio=_imageRatio;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

