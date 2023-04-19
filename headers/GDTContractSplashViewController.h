//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTSplashViewController.h"

#import "GDTSplashVideoViewDelegate-Protocol.h"

@class GDTSplashResourcePreloadedLabel, GDTSplashVideoView, NSString;
@protocol GDTVideoControlProtocol;

@interface GDTContractSplashViewController : GDTSplashViewController <GDTSplashVideoViewDelegate>
{
    GDTSplashVideoView *_splashView;
    id <GDTVideoControlProtocol> _externalPlayer;
    NSString *_threadId;
    GDTSplashResourcePreloadedLabel *_preloadedLabel;
}

- (void).cxx_destruct;
- (void)GDTfunctionf3846v:(id)arg1 adDisplayStyle:(long long)arg2;
- (void)GDTfunctionf3846v:(id)arg1 playerStatusChanged:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)GDTfunctiont006rg;
- (void)GDTfunctiont3bLC7;
@property(retain, nonatomic) id <GDTVideoControlProtocol> externalPlayer; // @synthesize externalPlayer=_externalPlayer;
- (id)initLGDTfunctionw2JH1P:(id)arg1 bottomView:(id)arg2 adModel:(id)arg3;
@property(retain, nonatomic) GDTSplashResourcePreloadedLabel *preloadedLabel; // @synthesize preloadedLabel=_preloadedLabel;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) GDTSplashVideoView *splashView; // @synthesize splashView=_splashView;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

