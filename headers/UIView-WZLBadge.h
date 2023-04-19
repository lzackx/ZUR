//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WZLBadgeProtocol-Protocol.h"

@class NSString, UIColor, UIFont, UILabel;

@interface UIView (WZLBadge) <WZLBadgeProtocol>
- (void)adjustLabelWidth:(id)arg1;
@property(nonatomic) unsigned long long aniType;
@property(retain, nonatomic) UILabel *badge;
@property(retain, nonatomic) UIColor *badgeBgColor;
@property(nonatomic) struct CGPoint badgeCenterOffset;
@property(retain, nonatomic) UIFont *badgeFont;
@property(nonatomic) struct CGRect badgeFrame;
- (void)badgeInit;
@property(nonatomic) long long badgeMaximumBadgeNumber;
@property(nonatomic) double badgeRadius;
@property(retain, nonatomic) UIColor *badgeTextColor;
- (void)beginAnimation;
- (void)clearBadge;
- (void)removeAnimation;
- (void)resetBadgeForRedDot;
- (void)resumeBadge;
- (void)showBadge;
- (void)showBadgeWithStyle:(unsigned long long)arg1 value:(long long)arg2 animationType:(unsigned long long)arg3;
- (void)showNewBadge;
- (void)showNumberBadgeWithValue:(long long)arg1;
- (void)showNumberBadgeWithValue:(long long)arg1 animationType:(unsigned long long)arg2;
- (void)showRedDotBadge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

