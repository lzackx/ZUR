//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BLYThreadInfo, NSArray, NSException, NSString;

@interface BLYCrashReport : NSObject
{
    _Bool _crashHandling;
    _Bool _crashedDuringCrashHandling;
    NSString *_key;
    double _crashedTime;
    NSString *_crashCategory;
    long long _crashType;
    NSString *_crashName;
    NSString *_crashReason;
    NSString *_faultAddress;
    NSException *_uncaughtException;
    BLYThreadInfo *_crashedThread;
    NSArray *_threads;
    NSArray *_registers;
    NSArray *_images;
    NSString *_identifier;
}

+ (id)sharedReport;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *crashCategory; // @synthesize crashCategory=_crashCategory;
@property(copy, nonatomic) NSString *crashName; // @synthesize crashName=_crashName;
@property(copy, nonatomic) NSString *crashReason; // @synthesize crashReason=_crashReason;
@property(nonatomic) long long crashType; // @synthesize crashType=_crashType;
@property(retain, nonatomic) BLYThreadInfo *crashedThread; // @synthesize crashedThread=_crashedThread;
@property(nonatomic) double crashedTime; // @synthesize crashedTime=_crashedTime;
@property(copy, nonatomic) NSString *faultAddress; // @synthesize faultAddress=_faultAddress;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)init;
@property(nonatomic, getter=isCrashedDuringCrashHandling) _Bool crashedDuringCrashHandling; // @synthesize crashedDuringCrashHandling=_crashedDuringCrashHandling;
@property(nonatomic, getter=isHandlingCrash) _Bool crashHandling; // @synthesize crashHandling=_crashHandling;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSArray *registers; // @synthesize registers=_registers;
- (void)setImageList:(id)arg1;
- (void)setRegisterList:(id)arg1;
- (void)setThreadList:(id)arg1;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) NSException *uncaughtException; // @synthesize uncaughtException=_uncaughtException;
- (id)threadState;

@end

