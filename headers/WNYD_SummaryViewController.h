//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNYD_BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WNYD_AdvertContentViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, NSURLSessionTask, UITableView, UIView, UIViewController, WNYD_AdvertContentView, WNYD_BookSummaryModel, WNYD_NetworkManager, WNYD_ReaderManager, WNYD_SQLiteManager, YBookDetailModel;

@interface WNYD_SummaryViewController : WNYD_BaseViewController <UITableViewDelegate, UITableViewDataSource, WNYD_AdvertContentViewDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _isDetail;
    _Bool _isCatalog;
    UIViewController *_vc;
    CDUnknownBlockType _disMiss;
    CDUnknownBlockType _catalogBlock;
    UIView *_bgView;
    UIView *_contentView;
    WNYD_BookSummaryModel *_summaryM;
    YBookDetailModel *_bookM;
    CDUnknownBlockType _updateSelectSummary;
    UITableView *_tableView;
    WNYD_NetworkManager *_netManager;
    NSArray *_summaryArr;
    NSURLSessionTask *_urlTask;
    long long _selectSummaryCount;
    WNYD_SQLiteManager *_sqliteM;
    NSLayoutConstraint *_topViewHeight;
    NSLayoutConstraint *_closeBtnTop;
    NSLayoutConstraint *_titleTop;
    NSLayoutConstraint *_bookTableViewTop;
    NSLayoutConstraint *_tableviewLeft;
    WNYD_ReaderManager *_readerManager;
    WNYD_AdvertContentView *_topADContentView;
    double _cellWitdh;
}

- (void).cxx_destruct;
- (void)backBtnAction:(id)arg1;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) YBookDetailModel *bookM; // @synthesize bookM=_bookM;
@property(nonatomic) __weak NSLayoutConstraint *bookTableViewTop; // @synthesize bookTableViewTop=_bookTableViewTop;
@property(copy, nonatomic) CDUnknownBlockType catalogBlock; // @synthesize catalogBlock=_catalogBlock;
@property(nonatomic) double cellWitdh; // @synthesize cellWitdh=_cellWitdh;
@property(nonatomic) __weak NSLayoutConstraint *closeBtnTop; // @synthesize closeBtnTop=_closeBtnTop;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
- (void)didReceiveMemoryWarning;
@property(copy, nonatomic) CDUnknownBlockType disMiss; // @synthesize disMiss=_disMiss;
- (void)disMissAction;
- (void)dismissView:(_Bool)arg1;
- (void)getBookSummarys;
- (void)initInfoADView;
@property(nonatomic) _Bool isCatalog; // @synthesize isCatalog=_isCatalog;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (void)noaction;
@property(retain, nonatomic) WNYD_ReaderManager *readerManager; // @synthesize readerManager=_readerManager;
@property(nonatomic) long long selectSummaryCount; // @synthesize selectSummaryCount=_selectSummaryCount;
@property(retain, nonatomic) WNYD_SQLiteManager *sqliteM; // @synthesize sqliteM=_sqliteM;
@property(retain, nonatomic) NSArray *summaryArr; // @synthesize summaryArr=_summaryArr;
@property(retain, nonatomic) WNYD_BookSummaryModel *summaryM; // @synthesize summaryM=_summaryM;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak NSLayoutConstraint *tableviewLeft; // @synthesize tableviewLeft=_tableviewLeft;
@property(nonatomic) __weak NSLayoutConstraint *titleTop; // @synthesize titleTop=_titleTop;
@property(retain, nonatomic) WNYD_AdvertContentView *topADContentView; // @synthesize topADContentView=_topADContentView;
@property(nonatomic) __weak NSLayoutConstraint *topViewHeight; // @synthesize topViewHeight=_topViewHeight;
@property(copy, nonatomic) CDUnknownBlockType updateSelectSummary; // @synthesize updateSelectSummary=_updateSelectSummary;
@property(retain, nonatomic) NSURLSessionTask *urlTask; // @synthesize urlTask=_urlTask;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

