//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADScheduler, UIView;

@interface GADScrollMonitor : NSObject
{
    GADScheduler *_updateScrollStatusScheduler;
    UIView *_monitoredView;
    id _messageSource;
    struct CGRect _lastMonitoredViewBounds;
}

- (void).cxx_destruct;
- (id)initWithView:(id)arg1 messageSource:(id)arg2;
- (void)updateScrollStatus;

@end

