//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBaseModel.h"

@class NSString;

@interface WNYD_RankingDetialModel : YBaseModel
{
    long long _banned;
    long long _latelyFollowerBase;
    long long _minRetentionRatio;
    NSString *_site;
}

- (void).cxx_destruct;
@property(nonatomic) long long banned; // @synthesize banned=_banned;
@property(nonatomic) long long latelyFollowerBase; // @synthesize latelyFollowerBase=_latelyFollowerBase;
@property(nonatomic) long long minRetentionRatio; // @synthesize minRetentionRatio=_minRetentionRatio;
@property(retain, nonatomic) NSString *site; // @synthesize site=_site;

// Remaining properties
@property(retain, nonatomic) NSString *author;
@property(retain, nonatomic) NSString *cat;
@property(nonatomic) long long latelyFollower;
@property(retain, nonatomic) NSString *retentionRatio;
@property(retain, nonatomic) NSString *shortIntro;
@property(retain, nonatomic) NSString *title;

@end

