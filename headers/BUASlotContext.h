//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUAdSlot, BUDislikeContext, NSString, UIViewController;

@interface BUASlotContext : NSObject
{
    UIViewController *_rootViewController;
    NSString *_source;
    BUAdSlot *_adSlot;
    BUDislikeContext *_dislikeContext;
    CDUnknownBlockType _didCloseOtherController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BUAdSlot *adSlot; // @synthesize adSlot=_adSlot;
@property(copy, nonatomic) CDUnknownBlockType didCloseOtherController; // @synthesize didCloseOtherController=_didCloseOtherController;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;

@end

