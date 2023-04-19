//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "GADJavascriptEvaluating-Protocol.h"

@class GADEventContext, NSString;

@interface GADJSContext : NSObject <GADJavascriptEvaluating, GADEventContextSource>
{
    GADEventContext *_eventContext;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)asyncEvaluateFunction:(id)arg1 parameters:(id)arg2;
@property(readonly, nonatomic) GADEventContext *context; // @synthesize context=_eventContext;
- (id)initWithEventContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

