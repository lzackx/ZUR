//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUBUVideoBottomMaskClickDelegate-Protocol.h"
#import "BUBUVideoTopMaskClickDelegate-Protocol.h"
#import "BUPlayerDelegate-Protocol.h"
#import "BURewardedVideoDownloadBarDelegate-Protocol.h"
#import "BURewardedVideoTopBarDelegate-Protocol.h"

@class BUAdSlot, BUDislikeContext, BUMaterialMeta, BUPlayer, BURewardedVideoDownloadBarView, BURewardedVideoTopBarView, BUTimer, BUURitSetingModel, BUVideoBottomMask, BUVideoTopMask, NSDictionary, NSString, NSTimer, UIActivityIndicatorView, UITapGestureRecognizer, UIView;
@protocol BURewardedVideoDisplayDelegate;

@interface BURewardedVideoDisplayViewController : UIViewController <BUPlayerDelegate, BURewardedVideoDownloadBarDelegate, BUBUVideoTopMaskClickDelegate, BUBUVideoBottomMaskClickDelegate, BURewardedVideoTopBarDelegate>
{
    _Bool _isTransform;
    _Bool _isRewardedVideo;
    _Bool _storeKitOpened;
    _Bool _isAlreadyPlayed;
    _Bool _isSkipTap;
    _Bool _isReportEvent;
    _Bool _isFirstAnimation;
    _Bool _isPlaying;
    _Bool _playingOnline;
    _Bool _hasPlayed;
    _Bool _isShowAlert;
    id <BURewardedVideoDisplayDelegate> _delegate;
    BUPlayer *_player;
    BUMaterialMeta *_materialMeta;
    BUAdSlot *_slot;
    double _screenWidth;
    double _screenHeight;
    BURewardedVideoTopBarView *_topBarView;
    NSTimer *_timer;
    long long _repeatsCount;
    UIView *_adlogoView;
    UIView *_playerView;
    UIActivityIndicatorView *_activityIndicator;
    BURewardedVideoDownloadBarView *_downloadView;
    BUVideoTopMask *_topMask;
    BUVideoBottomMask *_bottomMask;
    NSDictionary *_touchDict;
    UITapGestureRecognizer *_playerViewTap;
    double _lastTime;
    BUURitSetingModel *_ritModel;
    BUTimer *_quitTimer;
    BUDislikeContext *_dislikeContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)addNotification;
@property(retain, nonatomic) UIView *adlogoView; // @synthesize adlogoView=_adlogoView;
@property(retain, nonatomic) BUVideoBottomMask *bottomMask; // @synthesize bottomMask=_bottomMask;
- (void)buildCommonView;
- (void)buildMaskView;
- (void)buildNorlmalView;
- (id)c_xyDict;
- (void)checkToPlayOrPause;
- (void)closeDisplayVC;
- (void)continuePlay;
- (void)dealloc;
@property(nonatomic) __weak id <BURewardedVideoDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
- (void)downloadBarTapped:(id)arg1 extraDic:(id)arg2;
- (void)downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
@property(retain, nonatomic) BURewardedVideoDownloadBarView *downloadView; // @synthesize downloadView=_downloadView;
- (void)downloadViewAnimation;
- (void)forceQuit;
- (_Bool)fullscreenNotShowEndcard;
- (id)getDurationAndPercentDic;
- (id)getTrackTag;
- (long long)getdownloadBarShowTime;
- (void)handlePlayFinish;
- (void)handleSkip;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
- (id)initViewControllerWithAd:(id)arg1 slot:(id)arg2;
@property(nonatomic) _Bool isAlreadyPlayed; // @synthesize isAlreadyPlayed=_isAlreadyPlayed;
@property(nonatomic) _Bool isFirstAnimation; // @synthesize isFirstAnimation=_isFirstAnimation;
- (_Bool)isNewDowloadBar;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isReportEvent; // @synthesize isReportEvent=_isReportEvent;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) _Bool isSkipTap; // @synthesize isSkipTap=_isSkipTap;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
- (void)judgeQuit:(id)arg1;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
- (void)layoutNormalSubviews;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
- (_Bool)needVideoAdaptation;
- (void)openAppStore;
- (void)playRewardedVideo;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)playerReadyToPlay:(id)arg1;
- (void)playerTap;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UITapGestureRecognizer *playerViewTap; // @synthesize playerViewTap=_playerViewTap;
- (id)playerViewTapyDict;
@property(nonatomic) _Bool playingOnline; // @synthesize playingOnline=_playingOnline;
- (_Bool)prefersStatusBarHidden;
- (void)preloadMaterialMeta;
@property(retain, nonatomic) BUTimer *quitTimer; // @synthesize quitTimer=_quitTimer;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
@property(nonatomic) long long repeatsCount; // @synthesize repeatsCount=_repeatsCount;
- (void)reportEvent;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3 skipType:(long long)arg4;
- (_Bool)rewardShowAlert;
- (long long)rewardWatchPercentForRport;
@property(retain, nonatomic) BUURitSetingModel *ritModel; // @synthesize ritModel=_ritModel;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
- (_Bool)sendClickEventWithArea:(id)arg1;
- (void)setPlayerVideoAdaption;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) _Bool storeKitOpened; // @synthesize storeKitOpened=_storeKitOpened;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BURewardedVideoTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) BUVideoTopMask *topMask; // @synthesize topMask=_topMask;
@property(copy, nonatomic) NSDictionary *touchDict; // @synthesize touchDict=_touchDict;
- (void)showDislikeHUD;
- (void)silentVideo;
- (void)startTimer;
- (void)tapAdLogo;
- (void)touchEventTrackerWithLabel:(id)arg1 sendClick:(_Bool)arg2;
- (void)updateLeftSeconds:(id)arg1;
- (void)videoBottomMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoBottomMaskTapped:(id)arg1 extraDic:(id)arg2;
- (long long)videoBufferSecondForClose;
- (_Bool)videoDefaultMute;
- (void)videoTopBarCloseButtonTapped:(id)arg1;
- (void)videoTopBarDislikeButtonTapped:(id)arg1;
- (void)videoTopBarSilentButtonTapped:(id)arg1;
- (void)videoTopBarTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoTopMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2 clickTypeString:(id)arg3;
- (void)videoTopMaskTapped:(id)arg1 extraDic:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
