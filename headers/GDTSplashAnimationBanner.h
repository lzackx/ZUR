//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTCustomGestureRecognizerDelegate-Protocol.h"

@class GDTAntiSpamClickData, NSString;
@protocol GDTSplashViewDelegate;

@interface GDTSplashAnimationBanner : UIView <GDTCustomGestureRecognizerDelegate>
{
    id <GDTSplashViewDelegate> _delegate;
    GDTAntiSpamClickData *_clickData;
}

+ (double)getHeight;
- (void).cxx_destruct;
- (void)GDTfunctione0nPvz:(id)arg1 hasBottomView:(_Bool)arg2;
- (void)GDTfunctioni9oEo6:(id)arg1 beganWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)GDTfunctioni9oEo6:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
@property(retain, nonatomic) GDTAntiSpamClickData *clickData; // @synthesize clickData=_clickData;
@property(nonatomic) __weak id <GDTSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initLGDTfunctiond03Wbv:(id)arg1 yPosition:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

