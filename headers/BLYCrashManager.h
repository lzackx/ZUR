//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYAbstractModule.h"

#import "BLYCrashReporterDelegate-Protocol.h"

@class BLYCrashReporter, NSString;

@interface BLYCrashManager : BLYAbstractModule <BLYCrashReporterDelegate>
{
    _Bool _enableSymbolicationOnDevice;
    _Bool _enableAppNotTerminatingSafelyDetection;
    _Bool _didCrashInLastSession;
    _Bool _didReceiveMemoryWarningInLastSession;
    _Bool _isInstalled;
    _Bool _isObserverRegistered;
    _Bool _didCrashed;
    double _timeIntervalCrashInLastSessionOccurred;
    BLYCrashReporter *_crashReporter;
    unsigned long long _checkerCount;
}

+ (id)constructSelector;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long checkerCount; // @synthesize checkerCount=_checkerCount;
@property(retain, nonatomic) BLYCrashReporter *crashReporter; // @synthesize crashReporter=_crashReporter;
- (void)dealloc;
- (void)didCrashAccidentHappened;
@property(readonly, nonatomic) _Bool didCrashInLastSession; // @synthesize didCrashInLastSession=_didCrashInLastSession;
@property(nonatomic) _Bool didCrashed; // @synthesize didCrashed=_didCrashed;
@property(readonly, nonatomic) _Bool didReceiveMemoryWarningInLastSession; // @synthesize didReceiveMemoryWarningInLastSession=_didReceiveMemoryWarningInLastSession;
- (_Bool)disableModule;
- (_Bool)enableModule;
- (id)generateExceptionUploadPackage;
- (id)init;
@property(nonatomic, getter=isAppNotTerminatingSafelyDetectionEnabled) _Bool enableAppNotTerminatingSafelyDetection; // @synthesize enableAppNotTerminatingSafelyDetection=_enableAppNotTerminatingSafelyDetection;
@property(nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(nonatomic) _Bool isObserverRegistered; // @synthesize isObserverRegistered=_isObserverRegistered;
@property(nonatomic, getter=isSymbolicationOnDeviceEnabled) _Bool enableSymbolicationOnDevice; // @synthesize enableSymbolicationOnDevice=_enableSymbolicationOnDevice;
- (void)protectHandler:(id)arg1;
- (void)receivedEventNotification:(id)arg1;
- (void)registerObservers;
- (void)sendCrashReport:(id)arg1;
- (void)sendLiveCrashReport;
- (void)sendPendingCrashReport;
- (void)setExcludeModuleFilter:(id)arg1;
- (void)startManager;
- (void)startProtectTimer;
- (void)stopManager;
- (id)strategyGetterSelector;
@property(readonly, nonatomic) double timeIntervalCrashInLastSessionOccurred; // @synthesize timeIntervalCrashInLastSessionOccurred=_timeIntervalCrashInLastSessionOccurred;
- (void)unregisterObservers;
- (void)willSendCrashReport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

