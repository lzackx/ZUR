//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDAdSession;

@interface GADOMIDMediaEvents : NSObject
{
    GADOMIDAdSession *_adSession;
    double _playerVolume;
    _Bool _observerIsRegistered;
}

- (void).cxx_destruct;
- (void)adUserInteractionWithType:(unsigned long long)arg1;
- (void)bufferFinish;
- (void)bufferStart;
- (void)complete;
- (void)dealloc;
- (double)deviceVolume;
- (void)firstQuartile;
- (id)initWithAdSession:(id)arg1 error:(id *)arg2;
- (void)loadedWithVastProperties:(id)arg1;
- (void)midpoint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)playerStateChangeTo:(unsigned long long)arg1;
- (void)publishEventWithName:(id)arg1 parameters:(id)arg2;
- (void)publishEventWithName:(id)arg1 parameters:(id)arg2 requireStart:(_Bool)arg3;
- (void)resume;
- (void)skipped;
- (void)startListeningForDeviceVolumeChanges;
- (void)startWithDuration:(double)arg1 mediaPlayerVolume:(double)arg2;
- (void)stopListeningForDeviceVolumeChanges;
- (id)stringFromInteractionType:(unsigned long long)arg1;
- (id)stringFromPlayerState:(unsigned long long)arg1;
- (void)thirdQuartile;
- (void)volumeChangeTo:(double)arg1;

@end
