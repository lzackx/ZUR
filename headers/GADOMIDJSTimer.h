//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol GADOMIDJSInvoker;

@interface GADOMIDJSTimer : NSObject
{
    id <GADOMIDJSInvoker> _jsInvoker;
    NSMutableSet *_timerIds;
    unsigned long long _timerIdCounter;
}

- (void).cxx_destruct;
- (void)cancelAllTimers;
- (void)cancelTimerWithId:(id)arg1;
- (void)handleTimerWithId:(id)arg1 timeout:(double)arg2 callback:(id)arg3 repeatable:(_Bool)arg4;
- (id)init;
@property(nonatomic) __weak id <GADOMIDJSInvoker> jsInvoker; // @synthesize jsInvoker=_jsInvoker;
- (void)scheduleTimerWithId:(id)arg1 timeout:(double)arg2 callback:(id)arg3 repeatable:(_Bool)arg4;
- (id)scheduleTimerWithTimeout:(id)arg1 callback:(id)arg2 repeatable:(_Bool)arg3;
- (void)setupMethodsForJSObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long timerIdCounter; // @synthesize timerIdCounter=_timerIdCounter;
@property(readonly, nonatomic) NSMutableSet *timerIds; // @synthesize timerIds=_timerIds;

@end

