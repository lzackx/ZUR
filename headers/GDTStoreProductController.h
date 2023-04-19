//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString, SKStoreProductViewController, UIView;
@protocol GDTStoreProductRequestDelegate, SKStoreProductViewControllerDelegate;

@interface GDTStoreProductController : NSObject <SKStoreProductViewControllerDelegate>
{
    _Bool _onceToken;
    double _generateTimeSecondsFrom1970;
    SKStoreProductViewController *_storeController;
    UIView *_view;
    id <SKStoreProductViewControllerDelegate> _delegate;
    id <GDTStoreProductRequestDelegate> _storeProductDelegate;
    long long _loadState;
}

- (void).cxx_destruct;
- (void)GDTfunctiono5qGDK:(id)arg1;
- (void)GDTfunctiono5qGDK:(id)arg1 campaignId:(id)arg2 providerId:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <SKStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double generateTimeSecondsFrom1970; // @synthesize generateTimeSecondsFrom1970=_generateTimeSecondsFrom1970;
- (id)init;
@property(nonatomic) long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) _Bool onceToken; // @synthesize onceToken=_onceToken;
@property(retain, nonatomic) SKStoreProductViewController *storeController; // @synthesize storeController=_storeController;
@property(nonatomic) __weak id <GDTStoreProductRequestDelegate> storeProductDelegate; // @synthesize storeProductDelegate=_storeProductDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

