//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCOREHttpChannelController, JCORESisManager, JCORETcpChannelController;

@interface JCORENetChannel : NSObject
{
    JCORETcpChannelController *_tcpChannelController;
    JCOREHttpChannelController *_httpChannelController;
    unsigned long long _rid;
    JCORESisManager *_sisManager;
}

+ (id)addressListWithType:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)dequeueRequest:(id)arg1;
+ (id)findBlockedRequest:(unsigned short)arg1;
+ (id)findSendingRequest:(unsigned short)arg1;
+ (_Bool)httpRequesting;
+ (_Bool)isCloseSocket;
+ (void)onAckOrRespReceived:(id)arg1;
+ (void)reportAddressListWithType:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)send:(id)arg1;
+ (void)setupNetService;
+ (id)sharedChannel;
- (void).cxx_destruct;
@property(retain, nonatomic) JCOREHttpChannelController *httpChannelController; // @synthesize httpChannelController=_httpChannelController;
- (id)init;
- (void)reportAddressListForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long rid; // @synthesize rid=_rid;
- (void)send:(id)arg1;
@property(retain, nonatomic) JCORESisManager *sisManager; // @synthesize sisManager=_sisManager;
@property(retain, nonatomic) JCORETcpChannelController *tcpChannelController; // @synthesize tcpChannelController=_tcpChannelController;
- (void)setupNetService;

@end

