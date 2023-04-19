//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface WNYD_ModifyPasswordController : UIViewController <UITextFieldDelegate>
{
    _Bool _isLoading;
    UILabel *_userLabel;
    UILabel *_phoneLabel;
    UILabel *_pwdLabel;
    UILabel *_codeLabel;
    UITextField *_phoneTextField;
    UITextField *_userTextField;
    UIView *_containerView;
    UITextField *_verifiyCodeField;
    UIButton *_verifiyBtn;
    UITextField *_codeTextField;
    UITextField *_pwdTextField;
    UIButton *_completeBtn;
    UILabel *_logoLabel;
    UILabel *_tipsLabel;
    UIView *_userlineview;
}

- (void).cxx_destruct;
- (void)WNYD_back;
- (void)WNYD_buildLineView:(struct CGRect)arg1;
- (void)WNYD_checkPassWord;
- (void)WNYD_completeClick;
- (id)WNYD_createLabelWithfont:(id)arg1 textColor:(id)arg2;
- (void)WNYD_impactFeedBack;
- (void)WNYD_quickInput;
- (void)WNYD_registerForKeyboardNotifications;
- (void)WNYD_setUpubViews;
@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(retain, nonatomic) UIButton *completeBtn; // @synthesize completeBtn=_completeBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)dealloc;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)keyboardWasHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
@property(retain, nonatomic) UILabel *logoLabel; // @synthesize logoLabel=_logoLabel;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UILabel *pwdLabel; // @synthesize pwdLabel=_pwdLabel;
@property(retain, nonatomic) UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) UITextField *userTextField; // @synthesize userTextField=_userTextField;
@property(retain, nonatomic) UIView *userlineview; // @synthesize userlineview=_userlineview;
@property(retain, nonatomic) UIButton *verifiyBtn; // @synthesize verifiyBtn=_verifiyBtn;
@property(retain, nonatomic) UITextField *verifiyCodeField; // @synthesize verifiyCodeField=_verifiyCodeField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

