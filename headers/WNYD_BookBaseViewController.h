//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNYD_BaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WNYD_AdvertContentViewDelegate-Protocol.h"
#import "WNYD_ErrorStatusViewDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIScrollView, UITableView, UIView, WNYD_AdvertConfigModel, WNYD_BookIndexData, WNYD_BookStoreHeaderView, WNYD_ErrorStatusView, WNYD_GifHeader, WNYD_NetworkManager, WNYD_RadoanLayerView;
@protocol WNYD_BookBaseViewControllerDelegate;

@interface WNYD_BookBaseViewController : WNYD_BaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, WNYD_AdvertContentViewDelegate, WNYD_ErrorStatusViewDelegate>
{
    _Bool _isLeave;
    _Bool _isLoading;
    _Bool _isMoreLoading;
    _Bool _TopADLoad;
    _Bool _MiddleADLoad;
    _Bool _BottomADLoad;
    _Bool _isDataload;
    NSString *_text;
    CDUnknownBlockType _SuccessDataBlock;
    id <WNYD_BookBaseViewControllerDelegate> _mydelegate;
    CDUnknownBlockType _SearchTipsBlock;
    CDUnknownBlockType _searchBlock;
    UITableView *_tableView;
    WNYD_NetworkManager *_netManager;
    NSArray *_childViews;
    NSMutableArray *_likeArray;
    NSMutableArray *_indexArray;
    long long _page;
    WNYD_BookIndexData *_indexModel;
    WNYD_RadoanLayerView *_topThreeView;
    UIImageView *_topThreeImageView;
    UIImageView *_topThreeHeaderImageView;
    UIImageView *_topSmallImageView;
    UIView *_topDetailView;
    UICollectionViewFlowLayout *_BannerFlowLayout;
    UICollectionView *_BannerCollectionView;
    UIView *_BannerContentView;
    UICollectionViewFlowLayout *_hotSearchFlowLayout;
    UICollectionView *_hotSearchCollectionView;
    UIView *_hotSearchContentView;
    CALayer *_hotSearchLayer;
    UICollectionViewFlowLayout *_recommendFlowLayout;
    UICollectionView *_recommendCollectionView;
    UIView *_recommendContentView;
    UIView *_recommendLineView;
    CALayer *_recommendLayer;
    UICollectionViewFlowLayout *_newFlowLayout;
    UICollectionView *_newCollectionView;
    UIView *_newContentView;
    CALayer *_contentnewLayer;
    UICollectionViewFlowLayout *_endFlowLayout;
    UICollectionView *_endCollectionView;
    UIView *_endContentView;
    CALayer *_endContentLayer;
    UICollectionViewFlowLayout *_themeFlowLayout;
    UICollectionView *_themeCollectionView;
    UIView *_themeContentView;
    CALayer *_ethemeContentLayer;
    NSMutableArray *_adsArr;
    UICollectionViewFlowLayout *_adsFlowLayout;
    UICollectionView *_adsCollectionView;
    UIView *_adsContentView;
    CALayer *_adsContentViewLayer;
    NSMutableArray *_WanArr;
    UIImageView *_bookstoreLoadingImageView;
    UIScrollView *_ContainerScrollView;
    WNYD_BookStoreHeaderView *_NewCollectionHeaderView;
    WNYD_BookStoreHeaderView *_recommendCollectionHeaderView;
    WNYD_BookStoreHeaderView *_EndCollectionHeaderView;
    WNYD_BookStoreHeaderView *_ThemeCollectionHeaderView;
    WNYD_BookStoreHeaderView *_AddCollectionHeaderView;
    WNYD_BookStoreHeaderView *_WanCollectionHeaderView;
    WNYD_AdvertConfigModel *_topModel;
    WNYD_AdvertConfigModel *_middleModel;
    WNYD_AdvertConfigModel *_bottomModel;
    long long _topADType;
    long long _middleADType;
    long long _bottomADType;
    UIView *_topADContentView;
    CALayer *_topADLayer;
    UIView *_middleADContentView;
    CALayer *_middleADLayer;
    UIView *_bottomADContentView;
    CALayer *_bottomADLayer;
    double _topInfoHeight;
    double _middleInfoHeight;
    double _bottomInfoHeight;
    NSMutableArray *_ADSModelArr;
    UIView *_topADView;
    UIView *_middleADView;
    UIView *_bottomADView;
    WNYD_GifHeader *_header;
    WNYD_ErrorStatusView *_errorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *ADSModelArr; // @synthesize ADSModelArr=_ADSModelArr;
@property(retain, nonatomic) WNYD_BookStoreHeaderView *AddCollectionHeaderView; // @synthesize AddCollectionHeaderView=_AddCollectionHeaderView;
@property(retain, nonatomic) UICollectionView *BannerCollectionView; // @synthesize BannerCollectionView=_BannerCollectionView;
@property(retain, nonatomic) UIView *BannerContentView; // @synthesize BannerContentView=_BannerContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *BannerFlowLayout; // @synthesize BannerFlowLayout=_BannerFlowLayout;
@property(nonatomic) _Bool BottomADLoad; // @synthesize BottomADLoad=_BottomADLoad;
@property(retain, nonatomic) UIScrollView *ContainerScrollView; // @synthesize ContainerScrollView=_ContainerScrollView;
- (void)CreatUI;
@property(retain, nonatomic) WNYD_BookStoreHeaderView *EndCollectionHeaderView; // @synthesize EndCollectionHeaderView=_EndCollectionHeaderView;
@property(nonatomic) _Bool MiddleADLoad; // @synthesize MiddleADLoad=_MiddleADLoad;
@property(retain, nonatomic) WNYD_BookStoreHeaderView *NewCollectionHeaderView; // @synthesize NewCollectionHeaderView=_NewCollectionHeaderView;
@property(copy, nonatomic) CDUnknownBlockType SearchTipsBlock; // @synthesize SearchTipsBlock=_SearchTipsBlock;
@property(copy, nonatomic) CDUnknownBlockType SuccessDataBlock; // @synthesize SuccessDataBlock=_SuccessDataBlock;
@property(retain, nonatomic) WNYD_BookStoreHeaderView *ThemeCollectionHeaderView; // @synthesize ThemeCollectionHeaderView=_ThemeCollectionHeaderView;
@property(nonatomic) _Bool TopADLoad; // @synthesize TopADLoad=_TopADLoad;
- (void)WNYD_ClickTop3:(id)arg1;
- (_Bool)WNYD_GetScorll;
- (void)WNYD_buildContentSize;
- (void)WNYD_checkTopViewState:(double)arg1;
- (void)WNYD_initAllInfoADSDK;
- (void)WNYD_isCanShowAD:(_Bool)arg1;
- (void)WNYD_loadBookStoreData;
- (void)WNYD_loadIndexMore:(_Bool)arg1;
- (void)WNYD_loadMoreData;
- (void)WNYD_refreshWanCollectionView;
- (void)WNYD_setUpData:(id)arg1 response1:(id)arg2;
- (void)WNYD_setUpDataError:(id)arg1 task:(id)arg2;
- (void)WNYD_setUpLFRefresh;
- (void)WNYD_setUpSubViewsUI;
- (void)WNYD_showFeatureView;
- (void)WNYD_showLeadView;
- (void)WNYD_showSearch;
- (void)WNYD_updateViewFrame:(id)arg1 subView:(id)arg2;
@property(retain, nonatomic) NSMutableArray *WanArr; // @synthesize WanArr=_WanArr;
@property(retain, nonatomic) WNYD_BookStoreHeaderView *WanCollectionHeaderView; // @synthesize WanCollectionHeaderView=_WanCollectionHeaderView;
@property(retain, nonatomic) NSMutableArray *adsArr; // @synthesize adsArr=_adsArr;
@property(retain, nonatomic) UICollectionView *adsCollectionView; // @synthesize adsCollectionView=_adsCollectionView;
@property(retain, nonatomic) UIView *adsContentView; // @synthesize adsContentView=_adsContentView;
@property(retain, nonatomic) CALayer *adsContentViewLayer; // @synthesize adsContentViewLayer=_adsContentViewLayer;
@property(retain, nonatomic) UICollectionViewFlowLayout *adsFlowLayout; // @synthesize adsFlowLayout=_adsFlowLayout;
- (void)bookloadData:(id)arg1;
@property(retain, nonatomic) UIImageView *bookstoreLoadingImageView; // @synthesize bookstoreLoadingImageView=_bookstoreLoadingImageView;
@property(retain, nonatomic) UIView *bottomADContentView; // @synthesize bottomADContentView=_bottomADContentView;
@property(retain, nonatomic) CALayer *bottomADLayer; // @synthesize bottomADLayer=_bottomADLayer;
@property(nonatomic) long long bottomADType; // @synthesize bottomADType=_bottomADType;
@property(retain, nonatomic) UIView *bottomADView; // @synthesize bottomADView=_bottomADView;
@property(nonatomic) double bottomInfoHeight; // @synthesize bottomInfoHeight=_bottomInfoHeight;
@property(retain, nonatomic) WNYD_AdvertConfigModel *bottomModel; // @synthesize bottomModel=_bottomModel;
- (void)chanShowAd:(id)arg1;
- (void)changeUserState;
@property(retain, nonatomic) NSArray *childViews; // @synthesize childViews=_childViews;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) CALayer *contentnewLayer; // @synthesize contentnewLayer=_contentnewLayer;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
@property(retain, nonatomic) UICollectionView *endCollectionView; // @synthesize endCollectionView=_endCollectionView;
@property(retain, nonatomic) CALayer *endContentLayer; // @synthesize endContentLayer=_endContentLayer;
@property(retain, nonatomic) UIView *endContentView; // @synthesize endContentView=_endContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *endFlowLayout; // @synthesize endFlowLayout=_endFlowLayout;
@property(retain, nonatomic) WNYD_ErrorStatusView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) CALayer *ethemeContentLayer; // @synthesize ethemeContentLayer=_ethemeContentLayer;
- (id)getADConfigModelWith:(id)arg1;
- (id)getRecommandArr;
@property(retain, nonatomic) WNYD_GifHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UICollectionView *hotSearchCollectionView; // @synthesize hotSearchCollectionView=_hotSearchCollectionView;
@property(retain, nonatomic) UIView *hotSearchContentView; // @synthesize hotSearchContentView=_hotSearchContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *hotSearchFlowLayout; // @synthesize hotSearchFlowLayout=_hotSearchFlowLayout;
@property(retain, nonatomic) CALayer *hotSearchLayer; // @synthesize hotSearchLayer=_hotSearchLayer;
- (id)imageWithImageSimple:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)impactFeedBack:(id)arg1;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) WNYD_BookIndexData *indexModel; // @synthesize indexModel=_indexModel;
- (void)insertAdvertViewWithLocation:(long long)arg1;
@property(nonatomic) _Bool isDataload; // @synthesize isDataload=_isDataload;
@property(nonatomic) _Bool isLeave; // @synthesize isLeave=_isLeave;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isMoreLoading; // @synthesize isMoreLoading=_isMoreLoading;
@property(retain, nonatomic) NSMutableArray *likeArray; // @synthesize likeArray=_likeArray;
- (void)loadMoreDataWithCato:(id)arg1 andTitleName:(id)arg2;
@property(retain, nonatomic) UIView *middleADContentView; // @synthesize middleADContentView=_middleADContentView;
@property(retain, nonatomic) CALayer *middleADLayer; // @synthesize middleADLayer=_middleADLayer;
@property(nonatomic) long long middleADType; // @synthesize middleADType=_middleADType;
@property(retain, nonatomic) UIView *middleADView; // @synthesize middleADView=_middleADView;
@property(nonatomic) double middleInfoHeight; // @synthesize middleInfoHeight=_middleInfoHeight;
@property(retain, nonatomic) WNYD_AdvertConfigModel *middleModel; // @synthesize middleModel=_middleModel;
@property(nonatomic) __weak id <WNYD_BookBaseViewControllerDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
@property(retain, nonatomic) UICollectionView *newCollectionView; // @synthesize newCollectionView=_newCollectionView;
@property(retain, nonatomic) UIView *newContentView; // @synthesize newContentView=_newContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *newFlowLayout; // @synthesize newFlowLayout=_newFlowLayout;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(nonatomic) long long page; // @synthesize page=_page;
- (void)recommandReloadData;
@property(retain, nonatomic) WNYD_BookStoreHeaderView *recommendCollectionHeaderView; // @synthesize recommendCollectionHeaderView=_recommendCollectionHeaderView;
@property(retain, nonatomic) UICollectionView *recommendCollectionView; // @synthesize recommendCollectionView=_recommendCollectionView;
@property(retain, nonatomic) UIView *recommendContentView; // @synthesize recommendContentView=_recommendContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *recommendFlowLayout; // @synthesize recommendFlowLayout=_recommendFlowLayout;
@property(retain, nonatomic) CALayer *recommendLayer; // @synthesize recommendLayer=_recommendLayer;
@property(retain, nonatomic) UIView *recommendLineView; // @synthesize recommendLineView=_recommendLineView;
- (void)refreshCollectionView:(id)arg1 collectionview:(id)arg2 headerView:(id)arg3;
- (void)refreshDataWithType:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType searchBlock; // @synthesize searchBlock=_searchBlock;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UICollectionView *themeCollectionView; // @synthesize themeCollectionView=_themeCollectionView;
@property(retain, nonatomic) UIView *themeContentView; // @synthesize themeContentView=_themeContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *themeFlowLayout; // @synthesize themeFlowLayout=_themeFlowLayout;
@property(retain, nonatomic) UIView *topADContentView; // @synthesize topADContentView=_topADContentView;
@property(retain, nonatomic) CALayer *topADLayer; // @synthesize topADLayer=_topADLayer;
@property(nonatomic) long long topADType; // @synthesize topADType=_topADType;
@property(retain, nonatomic) UIView *topADView; // @synthesize topADView=_topADView;
@property(retain, nonatomic) UIView *topDetailView; // @synthesize topDetailView=_topDetailView;
@property(nonatomic) double topInfoHeight; // @synthesize topInfoHeight=_topInfoHeight;
@property(retain, nonatomic) WNYD_AdvertConfigModel *topModel; // @synthesize topModel=_topModel;
@property(retain, nonatomic) UIImageView *topSmallImageView; // @synthesize topSmallImageView=_topSmallImageView;
@property(retain, nonatomic) UIImageView *topThreeHeaderImageView; // @synthesize topThreeHeaderImageView=_topThreeHeaderImageView;
@property(retain, nonatomic) UIImageView *topThreeImageView; // @synthesize topThreeImageView=_topThreeImageView;
@property(retain, nonatomic) WNYD_RadoanLayerView *topThreeView; // @synthesize topThreeView=_topThreeView;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

