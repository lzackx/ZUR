//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdRuleCheckerBaseProtocol-Protocol.h"

@class NSString, NSTimer, UIView;
@protocol GDTAdContentViewCheckerDelegate;

@interface GDTAdViewExposeRuleChecker : NSObject <GDTAdRuleCheckerBaseProtocol>
{
    int _interval;
    UIView *contentView;
    NSTimer *_timer;
    id <GDTAdContentViewCheckerDelegate> delegate;
    long long _adType;
    NSString *_placementId;
}

- (void).cxx_destruct;
- (void)GDTfunctionc1AXCm;
- (void)GDTfunctionf7WQsS;
- (void)GDTfunctionl5dKLd:(id)arg1;
- (void)GDTfunctionl5dKLd:(id)arg1 withInterval:(int)arg2;
- (void)GDTfunctionn2JJe9:(_Bool)arg1;
- (void)GDTfunctionr6UZaG;
- (void)GDTfunctionz4JIKS;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;
- (void)dealloc;
@property(nonatomic) __weak id <GDTAdContentViewCheckerDelegate> delegate; // @synthesize delegate;
- (id)init;
- (void)initLGDTfunctioni3gdmC;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

