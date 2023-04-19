//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface SPAlertAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    double _delayTime;
}

+ (id)animationIsPresenting:(_Bool)arg1;
- (void)alphaWhenPresentForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)animateTransition:(id)arg1;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
- (void)dismissAnimationTransition:(id)arg1;
- (void)dismissCorrespondingAlphaForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)dismissCorrespondingDropDownForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)dismissCorrespondingExpandForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)dismissCorrespondingRaiseUpForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)dismissCorrespondingShrinkForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)dropDownWhenPresentForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)expandWhenPresentForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (id)initWithPresenting:(_Bool)arg1;
- (void)presentAnimationTransition:(id)arg1;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (void)raiseUpWhenPresentForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (void)shrinkWhenPresentForController:(id)arg1 transition:(id)arg2 controlViewSize:(struct CGSize)arg3 overlayView:(id)arg4;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

