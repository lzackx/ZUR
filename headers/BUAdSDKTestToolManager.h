//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUAdSDKTestToolManager : NSObject
{
    NSString *_hostIP;
    NSString *_hostPort;
}

+ (_Bool)canSetTestEnv;
+ (void)clearIPAddress;
+ (void)clearInputContent;
+ (_Bool)isUnionBundleId;
+ (void)setHostIP:(id)arg1;
+ (void)setHostPort:(id)arg1;
+ (void)setInputOneContent:(id)arg1;
+ (void)setInputTwoContent:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hostIP; // @synthesize hostIP=_hostIP;
@property(copy, nonatomic) NSString *hostPort; // @synthesize hostPort=_hostPort;

@end

