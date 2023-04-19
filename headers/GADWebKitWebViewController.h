//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADWebViewController.h"

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class GADWebViewConfiguration, NSString, WKWebView;

@interface GADWebKitWebViewController : GADWebViewController <WKNavigationDelegate, WKUIDelegate>
{
    WKWebView *_webView;
    GADWebViewConfiguration *_configuration;
    CDUnknownBlockType _completionHandler;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)addUserScript:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(_Bool)arg3;
- (void)asyncEvaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)configuration;
- (void)dealloc;
- (void)didFinishLoadCompletelyWithError:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 eventContext:(id)arg2 configuration:(id)arg3;
- (void)loadDynamicContentSize;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadMRAID:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)loadViewport;
- (id)mainDocumentURL;
- (void)overrideWebViewPermissionAPI;
- (void)resetLoadState;
- (id)underlyingWebView;
- (id)webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

