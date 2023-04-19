//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDAdSessionRegistry, GADOMIDAdViewCache, GADOMIDProcessorFactory, GADOMIDStatePublisher, NSDate, NSTimer;
@protocol GADOMIDTreeWalkerTimeLogger;

@interface GADOMIDTreeWalker : NSObject
{
    NSTimer *_timer;
    unsigned long long _count;
    NSDate *_date1;
    NSDate *_date2;
    id <GADOMIDTreeWalkerTimeLogger> _timeLogger;
    GADOMIDAdSessionRegistry *_adSessionRegistry;
    GADOMIDProcessorFactory *_processorFactory;
    GADOMIDAdViewCache *_adViewCache;
    GADOMIDStatePublisher *_statePublisher;
}

- (void).cxx_destruct;
@property(readonly) GADOMIDAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
@property(readonly, nonatomic) GADOMIDAdViewCache *adViewCache; // @synthesize adViewCache=_adViewCache;
- (void)afterWalk;
- (void)beforeWalk;
- (void)checkFriendlyObstruction:(id)arg1 withState:(id)arg2;
- (void)doWalk;
- (_Bool)handleAdView:(id)arg1 withState:(id)arg2;
- (void)handleNotVisibleAdView:(id)arg1 view:(id)arg2 viewState:(id)arg3;
- (id)initWithAdSessionRegistry:(id)arg1;
- (void)onTick:(id)arg1;
- (void)pause;
@property(readonly, nonatomic) GADOMIDProcessorFactory *processorFactory; // @synthesize processorFactory=_processorFactory;
@property(nonatomic) __weak id <GADOMIDTreeWalkerTimeLogger> timeLogger; // @synthesize timeLogger=_timeLogger;
- (void)start;
@property(readonly, nonatomic) GADOMIDStatePublisher *statePublisher; // @synthesize statePublisher=_statePublisher;
- (void)stop;
- (void)updateTreeState;
- (void)walkChildrenForView:(id)arg1 processor:(id)arg2 state:(id)arg3 type:(unsigned long long)arg4;
- (void)walkView:(id)arg1 processor:(id)arg2 parentState:(id)arg3;

@end

