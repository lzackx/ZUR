//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface BUTNCNetwork : NSObject
{
    NSDictionary *_domins;
    NSMutableDictionary *_faildomins;
    double _lastTimeInterval;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *domins; // @synthesize domins=_domins;
@property(retain, nonatomic) NSMutableDictionary *faildomins; // @synthesize faildomins=_faildomins;
- (void)getDominsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleFailRequest:(id)arg1;
- (id)init;
@property(nonatomic) double lastTimeInterval; // @synthesize lastTimeInterval=_lastTimeInterval;
- (_Bool)recordFailCountDomin:(id)arg1;

@end
