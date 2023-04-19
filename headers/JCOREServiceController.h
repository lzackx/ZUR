//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCOREHttpEventController, JCORETcpEventController, NSDictionary;

@interface JCOREServiceController : NSObject
{
    _Bool _hasSetup;
    _Bool _getMacSuccess;
    JCORETcpEventController *_tcpEventController;
    JCOREHttpEventController *_httpEventController;
}

- (void).cxx_destruct;
- (void)cacheDeviceMacAddress:(id)arg1;
- (void)dealloc;
- (void)getDeviceMacAddress;
@property(nonatomic) _Bool getMacSuccess; // @synthesize getMacSuccess=_getMacSuccess;
@property(nonatomic) _Bool hasSetup; // @synthesize hasSetup=_hasSetup;
@property(retain, nonatomic) JCOREHttpEventController *httpEventController; // @synthesize httpEventController=_httpEventController;
@property(copy, nonatomic) NSDictionary *locationInfo;
- (void)reportToken:(id)arg1;
- (void)reportVoipToken:(id)arg1;
- (void)reportWithInvalidToken:(id)arg1;
- (void)sendReceipt:(id)arg1;
- (void)setCrashLogON;
- (void)setNewAdvertisingId:(id)arg1;
@property(retain, nonatomic) JCORETcpEventController *tcpEventController; // @synthesize tcpEventController=_tcpEventController;
- (void)setupService:(id)arg1;

@end
