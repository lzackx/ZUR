//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCOREHttpProtocol-Protocol.h"

@class NSArray, NSMutableURLRequest, NSString;

@interface JPUSHNewReport : NSObject <JCOREHttpProtocol>
{
    _Bool accountIDRequired;
    _Bool cacheRequired;
    unsigned char controlFlag;
    CDUnknownBlockType completionHandler;
    id requestInfo;
    NSMutableURLRequest *request;
    NSString *reportFlag;
    long long _reportTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool accountIDRequired; // @synthesize accountIDRequired;
@property(nonatomic) _Bool cacheRequired; // @synthesize cacheRequired;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(nonatomic) unsigned char controlFlag; // @synthesize controlFlag;
- (id)init;
@property(copy, nonatomic) NSString *reportFlag; // @synthesize reportFlag;
@property(nonatomic) long long reportTimeStamp; // @synthesize reportTimeStamp=_reportTimeStamp;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request;
@property(retain, nonatomic) id requestInfo; // @synthesize requestInfo;
- (void)send;
- (void)sendRequest:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain, nonatomic) NSArray *addressList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
