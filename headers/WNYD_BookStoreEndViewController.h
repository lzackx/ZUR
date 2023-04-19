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

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIScrollView, UIView, WNYD_AdvertConfigModel, WNYD_ErrorStatusView, WNYD_NetworkManager;
@protocol BookStoreEndViewControllerDelegate;

@interface WNYD_BookStoreEndViewController : WNYD_BaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, WNYD_AdvertContentViewDelegate, WNYD_ErrorStatusViewDelegate>
{
    _Bool _isInTab;
    _Bool _isLoading;
    _Bool _TopADLoad;
    _Bool _MiddleADLoad;
    _Bool _BottomADLoad;
    _Bool _isDataload;
    id <BookStoreEndViewControllerDelegate> _mydelegate;
    WNYD_NetworkManager *_netManager;
    UIScrollView *_ContainerScrollView;
    NSMutableArray *_classicalBooksArr;
    UICollectionViewFlowLayout *_classicalFlowLayout;
    UICollectionView *_classicalCollectionView;
    UIView *_classicalContentView;
    NSMutableArray *_developBooksArr;
    UICollectionViewFlowLayout *_developFlowLayout;
    UICollectionView *_developCollectionView;
    UIView *_developContentView;
    NSMutableArray *_girlBooksArr;
    UICollectionViewFlowLayout *_girlFlowLayout;
    UICollectionView *_girlCollectionView;
    UIView *_girlContentView;
    NSMutableArray *_boyBooksArr;
    UICollectionViewFlowLayout *_boyFlowLayout;
    UICollectionView *_boyCollectionView;
    UIView *_boyContentView;
    UIView *_BookStoreBottomView;
    UIImageView *_endContentLoadingImageView;
    WNYD_AdvertConfigModel *_topModel;
    WNYD_AdvertConfigModel *_middleModel;
    WNYD_AdvertConfigModel *_bottomModel;
    UIView *_topADContentView;
    UIView *_middleADContentView;
    UIView *_bottomADContentView;
    double _topInfoHeight;
    double _middleInfoHeight;
    double _bottomInfoHeight;
    NSMutableArray *_ADSModelArr;
    UIView *_topADView;
    UIView *_middleADView;
    UIView *_bottomADView;
    WNYD_ErrorStatusView *_ErrorStatusView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *ADSModelArr; // @synthesize ADSModelArr=_ADSModelArr;
@property(retain, nonatomic) UIView *BookStoreBottomView; // @synthesize BookStoreBottomView=_BookStoreBottomView;
@property(nonatomic) _Bool BottomADLoad; // @synthesize BottomADLoad=_BottomADLoad;
@property(retain, nonatomic) UIScrollView *ContainerScrollView; // @synthesize ContainerScrollView=_ContainerScrollView;
- (void)CreatUI;
@property(retain, nonatomic) WNYD_ErrorStatusView *ErrorStatusView; // @synthesize ErrorStatusView=_ErrorStatusView;
@property(nonatomic) _Bool MiddleADLoad; // @synthesize MiddleADLoad=_MiddleADLoad;
@property(nonatomic) _Bool TopADLoad; // @synthesize TopADLoad=_TopADLoad;
- (void)WNYD_addLoadingPage;
- (void)WNYD_initAllInfoADSDK;
- (void)WNYD_isCanShowAD:(_Bool)arg1;
- (void)WNYD_loadEndData;
- (void)WNYD_setUpLFRefresh;
- (void)WNYD_setUpSubViewsUI;
@property(retain, nonatomic) UIView *bottomADContentView; // @synthesize bottomADContentView=_bottomADContentView;
@property(retain, nonatomic) UIView *bottomADView; // @synthesize bottomADView=_bottomADView;
@property(nonatomic) double bottomInfoHeight; // @synthesize bottomInfoHeight=_bottomInfoHeight;
@property(retain, nonatomic) WNYD_AdvertConfigModel *bottomModel; // @synthesize bottomModel=_bottomModel;
@property(retain, nonatomic) NSMutableArray *boyBooksArr; // @synthesize boyBooksArr=_boyBooksArr;
@property(retain, nonatomic) UICollectionView *boyCollectionView; // @synthesize boyCollectionView=_boyCollectionView;
@property(retain, nonatomic) UIView *boyContentView; // @synthesize boyContentView=_boyContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *boyFlowLayout; // @synthesize boyFlowLayout=_boyFlowLayout;
@property(retain, nonatomic) NSMutableArray *classicalBooksArr; // @synthesize classicalBooksArr=_classicalBooksArr;
@property(retain, nonatomic) UICollectionView *classicalCollectionView; // @synthesize classicalCollectionView=_classicalCollectionView;
@property(retain, nonatomic) UIView *classicalContentView; // @synthesize classicalContentView=_classicalContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *classicalFlowLayout; // @synthesize classicalFlowLayout=_classicalFlowLayout;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
@property(retain, nonatomic) NSMutableArray *developBooksArr; // @synthesize developBooksArr=_developBooksArr;
@property(retain, nonatomic) UICollectionView *developCollectionView; // @synthesize developCollectionView=_developCollectionView;
@property(retain, nonatomic) UIView *developContentView; // @synthesize developContentView=_developContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *developFlowLayout; // @synthesize developFlowLayout=_developFlowLayout;
@property(retain, nonatomic) UIImageView *endContentLoadingImageView; // @synthesize endContentLoadingImageView=_endContentLoadingImageView;
- (id)getADConfigModelWith:(id)arg1;
@property(retain, nonatomic) NSMutableArray *girlBooksArr; // @synthesize girlBooksArr=_girlBooksArr;
@property(retain, nonatomic) UICollectionView *girlCollectionView; // @synthesize girlCollectionView=_girlCollectionView;
@property(retain, nonatomic) UIView *girlContentView; // @synthesize girlContentView=_girlContentView;
@property(retain, nonatomic) UICollectionViewFlowLayout *girlFlowLayout; // @synthesize girlFlowLayout=_girlFlowLayout;
- (void)insertAdvertViewWithLocation:(long long)arg1;
@property(nonatomic) _Bool isDataload; // @synthesize isDataload=_isDataload;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIView *middleADContentView; // @synthesize middleADContentView=_middleADContentView;
@property(retain, nonatomic) UIView *middleADView; // @synthesize middleADView=_middleADView;
@property(nonatomic) double middleInfoHeight; // @synthesize middleInfoHeight=_middleInfoHeight;
@property(retain, nonatomic) WNYD_AdvertConfigModel *middleModel; // @synthesize middleModel=_middleModel;
@property(nonatomic) __weak id <BookStoreEndViewControllerDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshDataWithType:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UIView *topADContentView; // @synthesize topADContentView=_topADContentView;
@property(retain, nonatomic) UIView *topADView; // @synthesize topADView=_topADView;
@property(nonatomic) double topInfoHeight; // @synthesize topInfoHeight=_topInfoHeight;
@property(retain, nonatomic) WNYD_AdvertConfigModel *topModel; // @synthesize topModel=_topModel;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
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
