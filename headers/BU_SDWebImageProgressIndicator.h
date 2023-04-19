//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageIndicator-Protocol.h"

@class NSString, UIProgressView;

@interface BU_SDWebImageProgressIndicator : NSObject <SDWebImageIndicator>
{
    UIProgressView *_indicatorView;
}

+ (id)barIndicator;
+ (id)defaultIndicator;
- (void).cxx_destruct;
- (void)commonInit;
@property(retain, nonatomic) UIProgressView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (id)init;
- (void)startAnimatingIndicator;
- (void)stopAnimatingIndicator;
- (void)updateIndicatorProgress:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

