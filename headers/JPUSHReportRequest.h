//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCOREHttpProtocol-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSTimer;

@interface JPUSHReportRequest : NSObject <JCOREHttpProtocol>
{
    NSMutableDictionary *_reportBody;
    NSTimer *_reportWaitTimer;
    long long _reportTimeStamp;
    _Bool accountIDRequired;
    _Bool cacheRequired;
    _Bool _hasSubpackage;
    unsigned char _controlFlag;
    _Bool _isResend;
    _Bool _reportNeedDelay;
    id requestInfo;
    CDUnknownBlockType completionHandler;
    CDUnknownBlockType _completion;
    NSMutableData *_packetValueData;
    NSString *_reportFlag;
    unsigned long long _reportType;
    NSMutableArray *_reportContents;
    NSMutableArray *_realContents;
    NSDictionary *_content;
    CDUnknownBlockType _responseBlock;
    NSData *_bodyData;
    NSString *_aesKey;
    long long _reSendTimerIndex;
    NSArray *_reportAddressList;
    NSMutableURLRequest *_request;
}

- (void).cxx_destruct;
- (_Bool)accountIDRequired;
- (void)addDelayTimerWithHandler:(CDUnknownBlockType)arg1;
- (id)addressList;
@property(readonly, copy, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
- (_Bool)cacheRequestRequired;
- (_Bool)cacheRequired;
- (void)cancelDelayTimer;
- (_Bool)compareInfoFrom:(id)arg1 To:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(nonatomic) unsigned char controlFlag; // @synthesize controlFlag=_controlFlag;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)endDelayTimer:(id)arg1;
- (id)generateReportRequest;
- (id)generateSessionId;
- (id)generateSessionId:(long long)arg1;
@property(readonly, nonatomic) _Bool hasSubpackage; // @synthesize hasSubpackage=_hasSubpackage;
- (id)init;
@property(nonatomic) _Bool isResend; // @synthesize isResend=_isResend;
@property(nonatomic) _Bool isSendRequestLock; // @dynamic isSendRequestLock;
- (_Bool)loginRequired;
- (void)needReportSubpackage;
- (void)p_addContents;
- (unsigned long long)p_calculateCurrentSize;
- (_Bool)p_checkTimestampLength:(long long)arg1;
- (void)p_dropContentBeyondMaxSize;
- (id)p_generateRequestHead;
- (_Bool)packData;
- (id)packetData;
@property(retain, nonatomic) NSMutableData *packetValueData; // @synthesize packetValueData=_packetValueData;
@property(nonatomic) long long reSendTimerIndex; // @synthesize reSendTimerIndex=_reSendTimerIndex;
@property(retain, nonatomic) NSMutableArray *realContents; // @synthesize realContents=_realContents;
@property(retain, nonatomic) NSArray *reportAddressList; // @synthesize reportAddressList=_reportAddressList;
@property(retain, nonatomic) NSMutableArray *reportContents; // @synthesize reportContents=_reportContents;
@property(retain, nonatomic) NSString *reportFlag; // @synthesize reportFlag=_reportFlag;
@property(readonly, nonatomic) _Bool reportNeedDelay; // @synthesize reportNeedDelay=_reportNeedDelay;
@property(nonatomic) long long reportTimeStamp; // @synthesize reportTimeStamp=_reportTimeStamp;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(copy, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (id)requestInfo;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
- (void)send;
- (void)setAccountIDRequired:(_Bool)arg1;
- (void)setCacheRequired:(_Bool)arg1;
- (void)setRequestInfo:(id)arg1;
- (void)setResponseBlock;
- (_Bool)startDelaySend;
- (void)startDelayTimerWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)validRequired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

