//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UITableView, WNYD_NetworkManager;

@interface WNYD_MessageListTableViewController : UIViewController
{
    WNYD_NetworkManager *_netManager;
    NSMutableArray *_messageArr;
    UITableView *_messageTableView;
}

- (void).cxx_destruct;
- (void)WNYD_MessageRefresh;
- (void)WNYD_resetBaseViewH:(double)arg1;
- (void)WNYD_setupTableViewUI;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) NSMutableArray *messageArr; // @synthesize messageArr=_messageArr;
@property(nonatomic) __weak UITableView *messageTableView; // @synthesize messageTableView=_messageTableView;
@property(retain, nonatomic) WNYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

