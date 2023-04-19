//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCommonReportTimerManager, NSArray, NSString;

@interface JCommonPasteController : NSObject
{
    JCommonReportTimerManager *_collectTimerManager;
    JCommonReportTimerManager *_reportTimerManager;
    _Bool _monitorPasteboardChange;
    int _action;
    int _cacheLimit;
    long long _collectInterval;
    long long _reportInterval;
    NSArray *_pasteDatas;
    NSString *_lastPasteData;
}

- (void).cxx_destruct;
@property(nonatomic) int action; // @synthesize action=_action;
- (void)addReportTimer;
@property(nonatomic) int cacheLimit; // @synthesize cacheLimit=_cacheLimit;
- (void)cachePasteDatas:(id)arg1;
@property(nonatomic) long long collectInterval; // @synthesize collectInterval=_collectInterval;
- (void)configInitData;
- (void)dealloc;
- (id)encryptKeyWithSeed:(long long)arg1;
- (void)endCollectAction;
- (id)filterPasteArrayData:(id)arg1;
- (id)filterPasteDictData:(id)arg1;
- (void)handleCmdControl:(id)arg1;
- (void)handlePasteboardChanged:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSString *lastPasteData; // @synthesize lastPasteData=_lastPasteData;
@property(nonatomic) _Bool monitorPasteboardChange; // @synthesize monitorPasteboardChange=_monitorPasteboardChange;
@property(retain, nonatomic) NSArray *pasteDatas; // @synthesize pasteDatas=_pasteDatas;
- (void)removeReportTimer;
- (void)removeReportedPasteDatas:(id)arg1;
@property(nonatomic) long long reportInterval; // @synthesize reportInterval=_reportInterval;
- (void)startCollectAction;
- (void)startPasteStrategy;
- (void)stopPasteStrategy;
- (void)triggerCollectTimer:(id)arg1;
- (void)triggerReportTimer:(id)arg1;

@end
