//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUWebViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class BUAdSlot, BUDislikeContext, BUWKWebViewClient, BUWebViewProgressView, BUWebViewViewModel, NSDate, NSDictionary, NSError, NSMutableArray, NSString, NSURL, UIButton, UILabel;
@protocol BUAd;

@interface BUWebViewController : UIViewController <BUWebViewDelegate, WKScriptMessageHandler, UIViewControllerTransitioningDelegate, WKUIDelegate>
{
    _Bool _isNavBarHidden;
    _Bool _isHiddenProgress;
    _Bool _supportAlert;
    _Bool _hasTerminateTrack;
    _Bool _hasEnterBackground;
    BUWKWebViewClient *_webView;
    id <BUAd> _adInfo;
    BUAdSlot *_adSlot;
    NSString *_webTitle;
    BUWebViewViewModel *_viewModel;
    CDUnknownBlockType _CloseBlock;
    NSURL *_requestURL;
    NSDictionary *_relatedMaterialMeta;
    BUDislikeContext *_dislikeContext;
    UILabel *_titleLable;
    UIButton *_backButton;
    UIButton *_closeButton;
    UIButton *_dislikeButton;
    BUWebViewProgressView *_progressView;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType CloseBlock; // @synthesize CloseBlock=_CloseBlock;
@property(readonly, nonatomic) id <BUAd> adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) BUAdSlot *adSlot; // @synthesize adSlot=_adSlot;
- (void)addAccessibilityIdentifier;
- (void)addAllScriptMsgHandleForName:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)appDidEnterBackgroundNotification:(id)arg1;
- (void)appWillEnterForegroundNotification:(id)arg1;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) long long backgroundStatus;
- (void)bu_loadRequest:(id)arg1;
- (_Bool)bu_shouldStartLoadWithRequestWithURL:(id)arg1;
- (void)buildRelatedMaterialMeta;
- (void)buildWebviewFrame;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)configLubanInfoWithURL:(id)arg1;
- (void)creatNavigationItems;
- (void)creatWebView;
@property(nonatomic) long long currentStatus;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
- (void)dislikeButtonTapped:(id)arg1;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
- (id)fetchHookConsoleLog;
- (double)getDislikeButtonWidthWithHeight:(double)arg1;
- (id)getDuration;
- (_Bool)getOfflineSwitch;
- (id)getTrackTag;
- (void)goClose:(id)arg1;
- (void)goback:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleFinishLoad;
- (_Bool)handleScrollPercentWith:(id)arg1;
- (void)handleStartLoad;
@property(nonatomic) _Bool hasEnterBackground; // @synthesize hasEnterBackground=_hasEnterBackground;
@property(nonatomic) _Bool hasTerminateTrack; // @synthesize hasTerminateTrack=_hasTerminateTrack;
- (void)hiddenCloseButton;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4;
@property(nonatomic) _Bool isFirstLoad_start;
@property(nonatomic) _Bool isHiddenProgress; // @synthesize isHiddenProgress=_isHiddenProgress;
@property(nonatomic) _Bool isLuban;
@property(nonatomic) _Bool isNavBarHidden; // @synthesize isNavBarHidden=_isNavBarHidden;
- (_Bool)isPlayableH5;
@property(nonatomic, getter=isSupportAlert) _Bool supportAlert; // @synthesize supportAlert=_supportAlert;
@property(nonatomic) _Bool isTrackLoad_Finish;
@property(nonatomic) _Bool isTrackLoad_result;
@property(nonatomic) long long js_max_scroll_percent;
@property(retain, nonatomic) NSError *loadFailError;
@property(copy, nonatomic) CDUnknownBlockType loadLubanJsonFail;
@property(copy, nonatomic) NSDictionary *luban_json;
@property(retain, nonatomic) NSMutableArray *luban_product_ids;
- (id)origUA;
- (void)preloadLubanData;
- (void)preloadWebViewAndData;
@property(retain, nonatomic) BUWebViewProgressView *progressView; // @synthesize progressView=_progressView;
- (void)registJS_ScrollPercent;
- (void)registShowConsole;
- (void)registerJSBridgePlugin;
- (void)registerLubanJSBridgePlugin;
- (void)registerUserAgent;
@property(retain, nonatomic) NSDictionary *relatedMaterialMeta; // @synthesize relatedMaterialMeta=_relatedMaterialMeta;
- (void)removeAllScriptMsgHandleForName:(id)arg1;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (id)sdkUA;
- (void)sendTrackDataWithParameters:(id)arg1;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *startdate;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) BUWebViewViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(retain, nonatomic) BUWKWebViewClient *webView; // @synthesize webView=_webView;
- (_Bool)shouldAutorotate;
- (void)showCloseButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)trackCloseWith:(long long)arg1;
- (void)trackLoadFailWithError:(id)arg1;
- (void)trackLoadFinish;
- (void)trackLoadStartWith:(long long)arg1;
- (void)trackLoading;
- (_Bool)useCache;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (double)webview_y;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
