//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface JCOREFIFOQueue : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_itemArray;
    long long _maxCount;
}

- (void).cxx_destruct;
- (void)clear;
- (void)copyQueue:(id)arg1;
- (void)copyQueue:(id)arg1 withCondition:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)count;
- (void)dealloc;
- (id)dequeue;
- (void)dequeue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enqueue:(id)arg1;
- (void)enqueueWithHighPriority:(id)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)firstObject;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxItem:(unsigned long long)arg1;
- (void)removeItem:(id)arg1;

@end
