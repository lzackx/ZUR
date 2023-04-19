//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTClickManagerDelegate-Protocol.h"

@class GDTRewardVideoAdModel;

@protocol GDTRewardAdPresenterProtocol <GDTClickFacadeDelegate, GDTClickManagerDelegate>
@property(retain, nonatomic) GDTRewardVideoAdModel *adModel;
@property(copy, nonatomic) CDUnknownBlockType clickedCallback;
@property(copy, nonatomic) CDUnknownBlockType closedCallback;
@property(copy, nonatomic) CDUnknownBlockType errorCallback;
@property(copy, nonatomic) CDUnknownBlockType exposedCallback;
@property(copy, nonatomic) CDUnknownBlockType finishCallback;
@property(copy, nonatomic) CDUnknownBlockType rewardEffectiveCallback;
@end
