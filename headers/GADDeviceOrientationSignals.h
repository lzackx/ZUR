//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSignal-Protocol.h"

@class NSString;

@interface GADDeviceOrientationSignals : NSObject <GADSignal>
{
    NSString *_supportedInterfaceOrientationsForKeyWindow;
    struct CGRect _standardizedMainScreenPortraitBounds;
    _Bool _orientationLandscape;
    long long _interfaceOrientation;
    struct CGSize _standardizedOrientedKeyWindowSize;
}

+ (id)signalSource;
- (void).cxx_destruct;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (id)init;
@property(readonly, nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) _Bool orientationLandscape; // @synthesize orientationLandscape=_orientationLandscape;
@property(readonly, nonatomic) struct CGSize standardizedOrientedKeyWindowSize; // @synthesize standardizedOrientedKeyWindowSize=_standardizedOrientedKeyWindowSize;
@property(readonly, nonatomic) struct CGRect standardizedOrientedScreenBounds;
- (struct CGSize)standardizedPortraitKeyWindowSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

