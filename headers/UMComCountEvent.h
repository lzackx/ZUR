//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMComEvent.h"

@class NSString;

@interface UMComCountEvent : UMComEvent
{
    int _du;
    NSString *_key;
}

- (void).cxx_destruct;
@property(nonatomic) int du; // @synthesize du=_du;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void)outputUMLog;
- (id)umComEventDic;
- (void)updateDu;
- (void)updateDuWithEndEvent:(id)arg1;

@end
