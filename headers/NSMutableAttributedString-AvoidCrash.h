//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

#import "AvoidCrashProtocol-Protocol.h"

@class NSString;

@interface NSMutableAttributedString (AvoidCrash) <AvoidCrashProtocol>
+ (void)avoidCrashExchangeMethod;
- (id)avoidCrashInitWithString:(id)arg1;
- (id)avoidCrashInitWithString:(id)arg1 attributes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

