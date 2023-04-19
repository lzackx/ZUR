//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDAdSessionRegistry;
@protocol GADOMIDStateWatcherDelegate;

@interface GADOMIDStateWatcher : NSObject
{
    unsigned long long _appState;
    id <GADOMIDStateWatcherDelegate> _delegate;
    GADOMIDAdSessionRegistry *_adSessionRegistry;
}

- (void).cxx_destruct;
- (void)adSessionDidBecomeActive:(id)arg1;
@property(retain, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
@property(readonly, nonatomic) _Bool appIsActive;
@property(readonly, nonatomic) unsigned long long appState; // @synthesize appState=_appState;
- (unsigned long long)appStateFromUIApplicationState:(long long)arg1;
- (id)appStateString;
@property(nonatomic) __weak id <GADOMIDStateWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (double)deviceVolume;
- (id)initWithAdSessionRegistry:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAppDidBecomeActive;
- (void)onAppDidEnterBackground;
- (void)onAppWillResignActive;
- (void)start;
- (void)stop;
- (void)updateAppStateWithUIApplicationState:(long long)arg1;

@end
