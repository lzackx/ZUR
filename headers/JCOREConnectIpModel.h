//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORESocketConfigProtocol-Protocol.h"

@class NSString;

@interface JCOREConnectIpModel : NSObject <JCORESocketConfigProtocol>
{
    _Bool _loading;
    unsigned int _port;
    double _startTime;
    NSString *_ip;
    NSString *_host;
    unsigned long long _ipType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)initWithIp:(id)arg1;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(nonatomic) unsigned long long ipType; // @synthesize ipType=_ipType;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

