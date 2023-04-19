//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WNYD_AdvertContentViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PYSearchSuggestionViewController, UIBarButtonItem, UIButton, UIColor, UILabel, UISearchBar, UITableView, UIView, WNYD_AdvertContentView, WNYD_NetworkManager, WNYD_SearchResultVc;
@protocol PYSearchViewControllerDelegate;

@interface PYSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, WNYD_AdvertContentViewDelegate>
{
    _Bool _searchSuggestionHidden;
    _Bool _keyboardshowing;
    _Bool _didClickSuggestionCell;
    _Bool _hasAD;
    _Bool _isPushResultView;
    NSArray *_rankTagBackgroundColorHexStrings;
    NSMutableArray *_colorPol;
    NSArray *_hotSearches;
    NSArray *_hotSearchTags;
    UILabel *_hotSearchHeader;
    UIButton *_hotChangeBtn;
    NSArray *_searchHistoryTags;
    UILabel *_searchHistoryHeader;
    id <PYSearchViewControllerDelegate> _delegate;
    long long _hotSearchStyle;
    long long _searchHistoryStyle;
    long long _searchResultShowMode;
    UISearchBar *_searchBar;
    UIColor *_searchBarBackgroundColor;
    CDUnknownBlockType _didSearchBlock;
    NSArray *_searchSuggestions;
    UITableView *_searchResultTableView;
    WNYD_SearchResultVc *_searchResultController;
    double _searchBarCornerRadius;
    UIView *_contentView;
    UIView *_headerContentView;
    NSMutableArray *_searchHistories;
    double _keyboardHeight;
    PYSearchSuggestionViewController *_searchSuggestionVC;
    UIView *_hotSearchTagsContentView;
    NSArray *_rankTags;
    NSArray *_rankTextLabels;
    NSArray *_rankViews;
    UIView *_searchHistoryTagsContentView;
    UIButton *_emptyButton;
    UITableView *_baseSearchTableView;
    WNYD_NetworkManager *_netManager;
    NSMutableArray *_allHotArr;
    long long _showIndex;
    WNYD_AdvertContentView *_topADContentView;
}

+ (id)searchViewControllerWithHotSearches:(id)arg1 searchBarPlaceholder:(id)arg2;
+ (id)searchViewControllerWithHotSearches:(id)arg1 searchBarPlaceholder:(id)arg2 didSearchBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)WNYD_setupLFUI;
- (id)addAndLayoutTagsWithTagsContentView:(id)arg1 tagTexts:(id)arg2 isHis:(_Bool)arg3;
@property(retain, nonatomic) NSMutableArray *allHotArr; // @synthesize allHotArr=_allHotArr;
- (void)back;
@property(retain, nonatomic) UITableView *baseSearchTableView; // @synthesize baseSearchTableView=_baseSearchTableView;
@property(nonatomic) __weak UIBarButtonItem *cancelButton;
- (void)cancelDidClick;
- (void)changeMark;
- (void)closeDidClick:(id)arg1;
@property(retain, nonatomic) NSMutableArray *colorPol; // @synthesize colorPol=_colorPol;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
@property(nonatomic) __weak id <PYSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
@property(nonatomic) _Bool didClickSuggestionCell; // @synthesize didClickSuggestionCell=_didClickSuggestionCell;
@property(copy, nonatomic) CDUnknownBlockType didSearchBlock; // @synthesize didSearchBlock=_didSearchBlock;
@property(nonatomic) __weak UIButton *emptyButton; // @synthesize emptyButton=_emptyButton;
- (void)emptySearchHistoryDidClick;
- (void)getHotArr;
- (id)getHotArray:(id)arg1;
- (id)getStringWithLength:(long long)arg1 arr:(id)arg2 newArr:(id)arg3;
@property(nonatomic) _Bool hasAD; // @synthesize hasAD=_hasAD;
@property(nonatomic) __weak UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(nonatomic) __weak UIButton *hotChangeBtn; // @synthesize hotChangeBtn=_hotChangeBtn;
@property(nonatomic) __weak UILabel *hotSearchHeader; // @synthesize hotSearchHeader=_hotSearchHeader;
@property(nonatomic) long long hotSearchStyle; // @synthesize hotSearchStyle=_hotSearchStyle;
@property(copy, nonatomic) NSArray *hotSearchTags; // @synthesize hotSearchTags=_hotSearchTags;
@property(nonatomic) __weak UIView *hotSearchTagsContentView; // @synthesize hotSearchTagsContentView=_hotSearchTagsContentView;
@property(copy, nonatomic) NSArray *hotSearches; // @synthesize hotSearches=_hotSearches;
- (id)init;
- (void)initInfoADView;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isPushResultView; // @synthesize isPushResultView=_isPushResultView;
- (void)keyboardDidShow:(id)arg1;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool keyboardshowing; // @synthesize keyboardshowing=_keyboardshowing;
- (id)labelWithTitle:(id)arg1 index:(long long)arg2;
- (id)labelWithTitle:(id)arg1 index:(long long)arg2 isHis:(_Bool)arg3;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSArray *rankTagBackgroundColorHexStrings; // @synthesize rankTagBackgroundColorHexStrings=_rankTagBackgroundColorHexStrings;
@property(copy, nonatomic) NSArray *rankTags; // @synthesize rankTags=_rankTags;
@property(copy, nonatomic) NSArray *rankTextLabels; // @synthesize rankTextLabels=_rankTextLabels;
@property(copy, nonatomic) NSArray *rankViews; // @synthesize rankViews=_rankViews;
- (void)resetArr:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
@property(retain, nonatomic) UIColor *searchBarBackgroundColor; // @synthesize searchBarBackgroundColor=_searchBarBackgroundColor;
@property(nonatomic) double searchBarCornerRadius; // @synthesize searchBarCornerRadius=_searchBarCornerRadius;
- (void)searchBarSearchButtonClicked:(id)arg1;
@property(retain, nonatomic) NSMutableArray *searchHistories; // @synthesize searchHistories=_searchHistories;
@property(nonatomic) __weak UILabel *searchHistoryHeader; // @synthesize searchHistoryHeader=_searchHistoryHeader;
@property(nonatomic) long long searchHistoryStyle; // @synthesize searchHistoryStyle=_searchHistoryStyle;
@property(copy, nonatomic) NSArray *searchHistoryTags; // @synthesize searchHistoryTags=_searchHistoryTags;
@property(nonatomic) __weak UIView *searchHistoryTagsContentView; // @synthesize searchHistoryTagsContentView=_searchHistoryTagsContentView;
@property(retain, nonatomic) WNYD_SearchResultVc *searchResultController; // @synthesize searchResultController=_searchResultController;
@property(nonatomic) long long searchResultShowMode; // @synthesize searchResultShowMode=_searchResultShowMode;
@property(nonatomic) __weak UITableView *searchResultTableView; // @synthesize searchResultTableView=_searchResultTableView;
@property(nonatomic) _Bool searchSuggestionHidden; // @synthesize searchSuggestionHidden=_searchSuggestionHidden;
@property(nonatomic) __weak PYSearchSuggestionViewController *searchSuggestionVC; // @synthesize searchSuggestionVC=_searchSuggestionVC;
@property(copy, nonatomic) NSArray *searchSuggestions; // @synthesize searchSuggestions=_searchSuggestions;
@property(nonatomic) long long showIndex; // @synthesize showIndex=_showIndex;
@property(retain, nonatomic) WNYD_AdvertContentView *topADContentView; // @synthesize topADContentView=_topADContentView;
- (void)setup;
- (id)setupChangeBtn:(id)arg1;
- (void)setupHotSearchNormalTags;
- (void)setupHotSearchRankTags;
- (void)setupHotSearchRectangleTags;
- (void)setupSearchHistoryTags;
- (id)setupTitleLabel:(id)arg1;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tagDidCLick:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
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

