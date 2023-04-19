//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMPBSnapshot, GULMutableDictionary, NSArray, NSString;

@interface APMESnapshot : NSObject
{
    GULMutableDictionary *_experimentsByExperimentID;
    _Bool _manuallyActivated;
    NSString *_SDKName;
    double _timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *SDKName; // @synthesize SDKName=_SDKName;
- (void)addFlag:(id)arg1 forExperimentID:(id)arg2;
- (void)addFlags:(id)arg1 forExperimentID:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *experiments;
- (id)flagByName:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithSDKName:(id)arg1 experiments:(id)arg2;
@property(nonatomic) _Bool manuallyActivated; // @synthesize manuallyActivated=_manuallyActivated;
@property(readonly, nonatomic) APMPBSnapshot *proto;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@end

