//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GDT_TaskQueue : NSObject
{
    NSMutableArray *_queue;
    NSString *_identity;
}

- (void).cxx_destruct;
- (void)GDTfunctionp7Lv5C;
- (void)clear;
- (long long)count;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (id)initWithIdentity:(id)arg1;
- (void)loadData;
- (id)pop;
- (void)push:(id)arg1;
@property(retain) NSMutableArray *queue; // @synthesize queue=_queue;

@end
