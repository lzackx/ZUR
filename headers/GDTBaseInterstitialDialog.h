//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GDTAdWKWebView;

@interface GDTBaseInterstitialDialog : UIViewController
{
    _Bool _isiPad;
    _Bool _fullScreen;
    GDTAdWKWebView *_webView;
    CDUnknownBlockType _blankViewClickedCallback;
}

- (void).cxx_destruct;
- (void)GDTfunctiong6seOP;
@property(copy, nonatomic) CDUnknownBlockType blankViewClickedCallback; // @synthesize blankViewClickedCallback=_blankViewClickedCallback;
- (void)didReceiveMemoryWarning;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool isiPad; // @synthesize isiPad=_isiPad;
@property(nonatomic) __weak GDTAdWKWebView *webView; // @synthesize webView=_webView;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

