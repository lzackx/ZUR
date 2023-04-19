//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MBBarProgressView : UIView
{
    float _progress;
    UIColor *_lineColor;
    UIColor *_progressRemainingColor;
    UIColor *_progressColor;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *progressRemainingColor; // @synthesize progressRemainingColor=_progressRemainingColor;

@end

