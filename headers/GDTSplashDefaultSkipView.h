//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTSplashSkipView.h"

#import "GDTCustomGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel;

@interface GDTSplashDefaultSkipView : GDTSplashSkipView <GDTCustomGestureRecognizerDelegate>
{
    UILabel *_skipLabel;
    UILabel *_timeLabel;
}

- (void).cxx_destruct;
- (void)GDTfunctioni9oEo6:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)GDTfunctionr5yJYL:(long long)arg1;
- (void)GDTfunctionr8Ss8x;
- (void)GDTfunctionv9gco9:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setExposureTime:(long long)arg1;
@property(retain, nonatomic) UILabel *skipLabel; // @synthesize skipLabel=_skipLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)tick;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
