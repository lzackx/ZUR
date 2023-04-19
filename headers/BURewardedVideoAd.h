//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUMopubAdMarkUpDelegate-Protocol.h"
#import "BUVideoAdDelegate-Protocol.h"

@class BUAdSlot, BUMaterialMeta, BURewardedVideoModel, NSDictionary, NSString;
@protocol BURewardedVideoAdDelegate;

@interface BURewardedVideoAd : NSObject <BUVideoAdDelegate, BUMopubAdMarkUpDelegate>
{
    _Bool isRewardedVideo;
    _Bool _isShow;
    BURewardedVideoModel *rewardedVideoModel;
    id <BURewardedVideoAdDelegate> _delegate;
    BUMaterialMeta *_materialMeta;
    BUAdSlot *_slot;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BURewardedVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downLoadPlayableZipWithMaterial:(id)arg1;
- (unsigned long long)getRewardedVideoAdType;
- (void)handleFailLoadMaterial:(id)arg1;
- (void)handleSuccessLoadMaterial:(id)arg1;
- (void)handleSuccessLoadVideo:(id)arg1 isPre:(_Bool)arg2;
- (id)initWithSlotID:(id)arg1 adloadSeq:(long long)arg2 primeRit:(id)arg3 rewardedVideoModel:(id)arg4;
- (id)initWithSlotID:(id)arg1 rewardedVideoModel:(id)arg2;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void)loadAdData;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
- (void)rewardedVideoAdTypeCallback;
@property(retain, nonatomic) BURewardedVideoModel *rewardedVideoModel; // @synthesize rewardedVideoModel;
- (void)setMopubAdMarkUp:(id)arg1;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (_Bool)showAdFromRootViewController:(id)arg1 ritScene:(long long)arg2 ritSceneDescribe:(id)arg3;
- (void)videoAdDidClick;
- (void)videoAdDidClickSkip;
- (void)videoAdDidClose;
- (void)videoAdDidPlayFinishWithError:(id)arg1;
- (void)videoAdServerRewardDidFail;
- (void)videoAdServerRewardDidSucceedVerify:(_Bool)arg1;
- (void)videoAdWillClose;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
