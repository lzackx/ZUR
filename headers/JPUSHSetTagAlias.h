//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHNewRequest.h"

#import "NSCopying-Protocol.h"

@class NSSet, NSString;

@interface JPUSHSetTagAlias : JPUSHNewRequest <NSCopying>
{
    NSSet *_tags;
    NSString *_alias;
    unsigned long long _type;
    double _createTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (id)bodyData;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
- (id)init;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)requestJsonData;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end
