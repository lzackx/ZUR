//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGMStatement : NSObject
{
    _Bool _inUse;
    long long _useCount;
    NSString *_query;
    void *_statement;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)description;
@property _Bool inUse; // @synthesize inUse=_inUse;
@property(retain) NSString *query; // @synthesize query=_query;
- (void)reset;
@property void *statement; // @synthesize statement=_statement;
@property long long useCount; // @synthesize useCount=_useCount;

@end
