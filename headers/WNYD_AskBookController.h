//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNYD_BaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface WNYD_AskBookController : WNYD_BaseViewController <UITextFieldDelegate>
{
    UITextField *_bookNameFiled;
    UITextField *_authorNameFiled;
    UITextField *_userNameFiled;
    UITextField *_urlFiled;
}

- (void).cxx_destruct;
- (void)WNYD_registerForKeyboardNotifications;
@property(nonatomic) __weak UITextField *authorNameFiled; // @synthesize authorNameFiled=_authorNameFiled;
@property(nonatomic) __weak UITextField *bookNameFiled; // @synthesize bookNameFiled=_bookNameFiled;
- (id)buildTextFiled:(id)arg1 frame:(struct CGRect)arg2;
- (id)buildTitleLabel:(id)arg1 frame:(struct CGRect)arg2;
- (void)buildUI;
- (void)clickInput;
- (void)dealloc;
- (void)keyboardWasHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
@property(nonatomic) __weak UITextField *urlFiled; // @synthesize urlFiled=_urlFiled;
@property(nonatomic) __weak UITextField *userNameFiled; // @synthesize userNameFiled=_userNameFiled;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
