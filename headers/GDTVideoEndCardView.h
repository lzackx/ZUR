//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdWKWebView, GDTPlayDemoLoadingView, GDTPlayer, NSMutableArray, NSString, UIButton;

@interface GDTVideoEndCardView : UIView <GDTWebViewDelegate, GDTPlayerControlProtocol>
{
    _Bool _webviewLoadSuccess;
    int _adType;
    GDTPlayer *_player;
    GDTAdBaseModel *_adModel;
    CDUnknownBlockType _endCardBodyClickedCallback;
    CDUnknownBlockType _loadFailureCallback;
    CDUnknownBlockType _loadSuccessCallback;
    CDUnknownBlockType _endCardCloseButtonClickedCallback;
    long long _playBeginTime;
    long long _pageSource;
    GDTAdWKWebView *_webView;
    UIButton *_closeButton;
    long long _clickArea;
    GDTPlayDemoLoadingView *_loadingView;
    NSMutableArray *_jsCallArray;
}

- (void).cxx_destruct;
- (_Bool)GDTfunctione6bSPR:(id)arg1 GDTfunctionh1EwgM:(id)arg2;
- (void)GDTfunctione6bSPR:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)GDTfunctione6bSPR:(id)arg1 didFinishNavigation:(id)arg2;
- (void)GDTfunctione6bSPR:(id)arg1 handleJsRequest:(id)arg2;
- (void)GDTfunctionf9vLml;
- (void)GDTfunctiong1vNVw;
- (id)GDTfunctionr2zMiG;
- (void)GDTfunctionv88LPm;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) int adType; // @synthesize adType=_adType;
@property(nonatomic) long long clickArea; // @synthesize clickArea=_clickArea;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType endCardBodyClickedCallback; // @synthesize endCardBodyClickedCallback=_endCardBodyClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardCloseButtonClickedCallback; // @synthesize endCardCloseButtonClickedCallback=_endCardCloseButtonClickedCallback;
- (void)gdt_player:(id)arg1 playStateChanged:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableArray *jsCallArray; // @synthesize jsCallArray=_jsCallArray;
- (void)layoutSubviews;
@property(copy, nonatomic) CDUnknownBlockType loadFailureCallback; // @synthesize loadFailureCallback=_loadFailureCallback;
- (void)loadRequest;
@property(copy, nonatomic) CDUnknownBlockType loadSuccessCallback; // @synthesize loadSuccessCallback=_loadSuccessCallback;
@property(retain, nonatomic) GDTPlayDemoLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GDTAdWKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool webviewLoadSuccess; // @synthesize webviewLoadSuccess=_webviewLoadSuccess;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
