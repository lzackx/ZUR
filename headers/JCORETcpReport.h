//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JCORETcpObject.h"

@class NSArray, NSData;

@interface JCORETcpReport : JCORETcpObject
{
    unsigned int _sid;
    NSData *_bodyData;
    NSArray *_reportAddressList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
- (id)headData;
- (id)init;
@property(retain, nonatomic) NSArray *reportAddressList; // @synthesize reportAddressList=_reportAddressList;
@property(nonatomic) unsigned int sid; // @synthesize sid=_sid;
- (id)token;

@end
