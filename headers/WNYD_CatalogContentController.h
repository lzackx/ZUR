//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNYD_BaseViewController.h"

#import "SPPageMenuDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FDDemoScrollView, NSArray, NSString, SPPageMenu, YBookDetailModel;

@interface WNYD_CatalogContentController : WNYD_BaseViewController <SPPageMenuDelegate, UIScrollViewDelegate>
{
    YBookDetailModel *_readingBook;
    unsigned long long _readingChapter;
    unsigned long long _index;
    NSArray *_chaptersArr;
    CDUnknownBlockType _selectChapter;
    SPPageMenu *_pageMenu;
    FDDemoScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)addBackBtn;
- (void)addChildViewControllers;
- (void)back;
- (void)buildNav;
- (void)buildScorllView;
@property(retain, nonatomic) NSArray *chaptersArr; // @synthesize chaptersArr=_chaptersArr;
- (void)hideView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)initScrollPage;
@property(nonatomic) __weak SPPageMenu *pageMenu; // @synthesize pageMenu=_pageMenu;
- (void)pageMenu:(id)arg1 itemSelectedAtIndex:(long long)arg2;
- (void)pageMenu:(id)arg1 itemSelectedFromIndex:(long long)arg2 toIndex:(long long)arg3;
@property(retain, nonatomic) YBookDetailModel *readingBook; // @synthesize readingBook=_readingBook;
@property(nonatomic) unsigned long long readingChapter; // @synthesize readingChapter=_readingChapter;
@property(nonatomic) __weak FDDemoScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType selectChapter; // @synthesize selectChapter=_selectChapter;
- (void)updateChapterList;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

