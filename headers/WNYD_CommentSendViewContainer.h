//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, WNYD_CommentSendView;
@protocol WNYD_CommentSendViewContainerDelegate;

@interface WNYD_CommentSendViewContainer : UIView
{
    _Bool _isreply;
    _Bool _isreplying;
    WNYD_CommentSendView *_sendView;
    CDUnknownBlockType _sendMessageSucceeded;
    NSString *_commentPID;
    NSString *_dataRequstID;
    id <WNYD_CommentSendViewContainerDelegate> _delegate;
    long long _dataType;
    NSString *_replyCommentID;
    UIView *_mySuperView;
}

+ (id)showCommentWithID:(id)arg1 WithDataType:(long long)arg2 WithPID:(id)arg3 inView:(id)arg4;
+ (id)showInView:(id)arg1;
+ (id)showWithID:(id)arg1 WithDataType:(long long)arg2 inView:(id)arg3;
- (void).cxx_destruct;
- (void)WNYD_onTap;
- (void)WNYD_setupSendViewInView:(id)arg1;
- (void)becomeFirstRes;
@property(retain, nonatomic) NSString *commentPID; // @synthesize commentPID=_commentPID;
@property(retain, nonatomic) NSString *dataRequstID; // @synthesize dataRequstID=_dataRequstID;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void)dealloc;
@property(nonatomic) __weak id <WNYD_CommentSendViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initCommentWithID:(id)arg1 WithDataType:(long long)arg2 WithPID:(id)arg3 inView:(id)arg4;
- (id)initInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithID:(id)arg1 WithDataType:(long long)arg2 inView:(id)arg3;
@property(nonatomic) _Bool isreply; // @synthesize isreply=_isreply;
@property(nonatomic) _Bool isreplying; // @synthesize isreplying=_isreplying;
- (void)keyboardFrameChange:(id)arg1;
@property(nonatomic) __weak UIView *mySuperView; // @synthesize mySuperView=_mySuperView;
@property(retain, nonatomic) NSString *replyCommentID; // @synthesize replyCommentID=_replyCommentID;
- (void)replyWithUserName:(id)arg1 commentID:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType sendMessageSucceeded; // @synthesize sendMessageSucceeded=_sendMessageSucceeded;
@property(nonatomic) __weak WNYD_CommentSendView *sendView; // @synthesize sendView=_sendView;
- (id)topViewController;
- (void)userCommentWithMessage:(id)arg1;

@end

