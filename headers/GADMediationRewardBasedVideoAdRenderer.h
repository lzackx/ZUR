//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdRendering-Protocol.h"

@class GADAdRenderingMetadata, GADFullScreenAdContent, GADServerTransaction, GADTargeting, NSDictionary, NSString;

@interface GADMediationRewardBasedVideoAdRenderer : NSObject <GADAdRendering>
{
    GADServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    id _connector;
    CDUnknownBlockType _renderCompletionHandler;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _adLoadCompleted
    GADFullScreenAdContent *_fullScreenAdContent;
    GADAdRenderingMetadata *_metadata;
    NSDictionary *_rewardGrantedUserInfo;
    NSString *_shouldRenderTestAdLabel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)failedToSetUpWithError:(id)arg1;
- (void)receivedRewardBasedVideoAdFromConnector:(id)arg1;
- (void)receivedRewardBasedVideoAdWithError:(id)arg1;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSDictionary *rewardGrantedUserInfo;
@property(readonly, nonatomic) NSString *shouldRenderTestAdLabel; // @synthesize shouldRenderTestAdLabel=_shouldRenderTestAdLabel;
@property(readonly, nonatomic) GADTargeting *targeting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

