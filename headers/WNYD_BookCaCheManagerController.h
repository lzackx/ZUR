//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UITableView, WNYD_BookCacheDatasource;

@interface WNYD_BookCaCheManagerController : UIViewController <UIAlertViewDelegate>
{
    _Bool _isOldVersion;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    WNYD_BookCacheDatasource *_datasource;
    NSMutableArray *_cellIdentifiers;
    NSIndexPath *_deleteIndexPath;
    long long _deleteIndex;
    double _totalSize;
}

- (void).cxx_destruct;
- (void)WNYD_addNavBtn;
- (void)WNYD_buildHeaderView;
- (void)WNYD_cleanBookCache;
- (void)WNYD_configDataSource;
- (void)WNYD_configTableView;
- (void)WNYD_deleteAllBookCache;
- (void)WNYD_deleteunPresentBook;
- (double)WNYD_getBookCacheWithRecordkey:(id)arg1 patchArr:(id)arg2;
- (void)WNYD_getCacheData;
- (void)WNYD_removeCacheWithRecordkey:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *cellIdentifiers; // @synthesize cellIdentifiers=_cellIdentifiers;
- (void)cellSelectedWithObj:(id)arg1;
- (void)configIdentifier;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) WNYD_BookCacheDatasource *datasource; // @synthesize datasource=_datasource;
- (void)dealloc;
@property(nonatomic) long long deleteIndex; // @synthesize deleteIndex=_deleteIndex;
@property(retain, nonatomic) NSIndexPath *deleteIndexPath; // @synthesize deleteIndexPath=_deleteIndexPath;
@property(nonatomic) _Bool isOldVersion; // @synthesize isOldVersion=_isOldVersion;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double totalSize; // @synthesize totalSize=_totalSize;
- (void)sortWithArr:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
