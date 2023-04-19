//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CommentSendViewContainerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CommentSendViewContainer, NSDictionary, NSMutableArray, NSString, UITableView, WNYD_CommentModel, WNYD_NetworkManager;

@interface WNYD_NewReplyCommenViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CommentSendViewContainerDelegate>
{
    _Bool _isBecomeFirstRes;
    WNYD_CommentModel *_commentModel;
    NSString *_commentId;
    NSString *_bookName;
    long long _lastPage;
    UITableView *_commentsTableView;
    WNYD_NetworkManager *_netManager;
    long long _Page;
    NSMutableArray *_commentsArr;
    NSDictionary *_topDic;
    NSDictionary *_hotDic;
    WNYD_CommentModel *_topModel;
    CommentSendViewContainer *_sendViewContainer;
}

- (void).cxx_destruct;
@property(nonatomic) long long Page; // @synthesize Page=_Page;
- (void)WNYD_loadMoreLFData;
- (void)WNYD_newComments;
- (void)WNYD_setupReplyTableViewUI;
@property(copy, nonatomic) NSString *bookName; // @synthesize bookName=_bookName;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) WNYD_CommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) NSMutableArray *commentsArr; // @synthesize commentsArr=_commentsArr;
@property(retain, nonatomic) UITableView *commentsTableView; // @synthesize commentsTableView=_commentsTableView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) NSDictionary *hotDic; // @synthesize hotDic=_hotDic;
- (id)initWithBookId:(id)arg1 andBookName:(id)arg2 andReplyCount:(id)arg3;
@property(nonatomic) _Bool isBecomeFirstRes; // @synthesize isBecomeFirstRes=_isBecomeFirstRes;
- (void)keyboardFrameChange:(id)arg1;
@property(nonatomic) long long lastPage; // @synthesize lastPage=_lastPage;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendMessageSucceeded:(id)arg1;
@property(nonatomic) __weak CommentSendViewContainer *sendViewContainer; // @synthesize sendViewContainer=_sendViewContainer;
- (void)setArr:(id)arg1;
@property(retain, nonatomic) NSDictionary *topDic; // @synthesize topDic=_topDic;
@property(retain, nonatomic) WNYD_CommentModel *topModel; // @synthesize topModel=_topModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

