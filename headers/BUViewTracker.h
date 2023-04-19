//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUViewTracker-Protocol.h"

@class NSDictionary, NSString, UIView;
@protocol BUAd;

@interface BUViewTracker : NSObject <BUViewTracker>
{
    _Bool _isWitness;
    UIView *_view;
    id <BUAd> _admodel;
    NSDictionary *_extra;
    long long _repeatType;
    long long _lastPresentation;
    CDUnknownBlockType _showEvent;
    double _showTimestamp;
    NSString *_source;
    NSString *_tag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BUAd> admodel; // @synthesize admodel=_admodel;
- (_Bool)checkIfViewInScreen;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
- (_Bool)invalid;
@property(nonatomic) _Bool isWitness; // @synthesize isWitness=_isWitness;
@property(nonatomic) long long lastPresentation; // @synthesize lastPresentation=_lastPresentation;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(copy, nonatomic) CDUnknownBlockType showEvent; // @synthesize showEvent=_showEvent;
@property(nonatomic) double showTimestamp; // @synthesize showTimestamp=_showTimestamp;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)snapShot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
