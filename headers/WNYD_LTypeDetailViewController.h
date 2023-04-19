//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WNYD_AdvertContentViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, UITableView, WNYD_AdvertContentView, WNYD_BookCategories, WNYD_NetworkManager;

@interface WNYD_LTypeDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WNYD_AdvertContentViewDelegate>
{
    _Bool _isInTab;
    _Bool _isBookStoreData;
    _Bool _loadingFail;
    _Bool _isLoading;
    _Bool _isPush;
    NSString *_sexName;
    WNYD_BookCategories *_typeModel;
    NSString *_TypeCategoryName;
    NSString *_titleName;
    NSString *_type_id;
    WNYD_NetworkManager *_netManager;
    UITableView *_typeDetailTableView;
    NSMutableArray *_typeBooksArr;
    long long _page;
    NSMutableDictionary *_params;
    NSMutableArray *_adsArr;
    NSTimer *_wanTimer;
    long long _wanIndex;
    WNYD_AdvertContentView *_topADContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *TypeCategoryName; // @synthesize TypeCategoryName=_TypeCategoryName;
- (void)WNYD_addWanTimer;
- (void)WNYD_initInfoADView;
- (void)WNYD_initTableView;
- (void)WNYD_loadBookStoreChoiceData;
- (void)WNYD_loadHotCommentData;
- (void)WNYD_loadMoreTypeData;
- (void)WNYD_refreshData;
- (void)WNYD_reloadWanRow;
- (void)WNYD_setUpLFRefresh;
- (void)WNYD_setUpLFRefreshFooter;
- (void)WNYD_showWanYiWan;
@property(retain, nonatomic) NSMutableArray *adsArr; // @synthesize adsArr=_adsArr;
- (void)dealloc;
@property(nonatomic) _Bool isBookStoreData; // @synthesize isBookStoreData=_isBookStoreData;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
- (void)loadMoreLFData;
@property(nonatomic) _Bool loadingFail; // @synthesize loadingFail=_loadingFail;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *sexName; // @synthesize sexName=_sexName;
- (void)setTableViewY:(double)arg1;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) WNYD_AdvertContentView *topADContentView; // @synthesize topADContentView=_topADContentView;
@property(retain, nonatomic) NSMutableArray *typeBooksArr; // @synthesize typeBooksArr=_typeBooksArr;
@property(retain, nonatomic) UITableView *typeDetailTableView; // @synthesize typeDetailTableView=_typeDetailTableView;
@property(retain, nonatomic) WNYD_BookCategories *typeModel; // @synthesize typeModel=_typeModel;
@property(retain, nonatomic) NSString *type_id; // @synthesize type_id=_type_id;
@property(nonatomic) long long wanIndex; // @synthesize wanIndex=_wanIndex;
@property(retain, nonatomic) NSTimer *wanTimer; // @synthesize wanTimer=_wanTimer;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

