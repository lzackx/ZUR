//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface APMInAppPurchaseTransactionReporter : NSObject
{
    NSArray *_allPurchaseItems;
}

+ (id)sharedInstance;
+ (id)transactionFingerprint:(id)arg1;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedFilteredTransactions:(id)arg2;
- (void)reportTransactionsFromArray:(id)arg1;

@end

