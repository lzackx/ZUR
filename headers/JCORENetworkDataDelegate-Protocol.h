//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError;

@protocol JCORENetworkDataDelegate <NSObject>
- (void)socket:(id)arg1 recvData:(NSData *)arg2 handler:(void (^)(_Bool))arg3;
- (void)socket:(id)arg1 sentData:(NSData *)arg2;

@optional
- (void)sendQueueEmpty:(id)arg1;
- (void)socket:(id)arg1 connectStateChanged:(unsigned long long)arg2;
- (void)socket:(id)arg1 noRecvData:(NSError *)arg2;
- (void)socket:(id)arg1 unsentData:(NSData *)arg2;
@end

