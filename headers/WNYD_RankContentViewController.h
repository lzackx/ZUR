//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableArray, NSString, RequesCover, WNYD_NetworkManager, WNYD_RankingModel;

@interface WNYD_RankContentViewController : UITableViewController
{
    WNYD_RankingModel *_rankingM;
    NSString *_rankStyle;
    NSMutableArray *_sourceArr;
    WNYD_NetworkManager *_netManager;
    RequesCover *_cover;
}

- (void).cxx_destruct;
- (void)backBtnAction:(id)arg1;
@property(nonatomic) __weak RequesCover *cover; // @synthesize cover=_cover;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)getRankingDetailSource;
- (void)loadData;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
@property(retain, nonatomic) NSString *rankStyle; // @synthesize rankStyle=_rankStyle;
@property(retain, nonatomic) WNYD_RankingModel *rankingM; // @synthesize rankingM=_rankingM;
@property(retain, nonatomic) NSMutableArray *sourceArr; // @synthesize sourceArr=_sourceArr;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
