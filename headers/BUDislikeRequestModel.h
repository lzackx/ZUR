//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BURequestModel.h"

@class BUGeo, NSArray, NSString;

@interface BUDislikeRequestModel : BURequestModel
{
    NSArray *_filter_words;
    NSString *_action;
    long long _timestamp;
    NSString *_ad_sdk_version;
    BUGeo *_geo;
    NSString *_extra;
    NSString *_ad_id;
    NSString *_comment;
    NSString *_dislike_source;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(copy, nonatomic) NSString *ad_sdk_version; // @synthesize ad_sdk_version=_ad_sdk_version;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (id)dictionaryValue;
@property(copy, nonatomic) NSString *dislike_source; // @synthesize dislike_source=_dislike_source;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSArray *filter_words; // @synthesize filter_words=_filter_words;
@property(retain, nonatomic) BUGeo *geo; // @synthesize geo=_geo;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;

@end

