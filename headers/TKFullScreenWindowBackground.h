//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface TKFullScreenWindowBackground : UIView
{
    _Bool _vignetteBackground;
    UIImage *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool vignetteBackground; // @synthesize vignetteBackground=_vignetteBackground;

@end
