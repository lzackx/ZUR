//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SGMDataBase, SGMStatement;

@interface SGMResultSet : NSObject
{
    SGMDataBase *_parentDB;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
    SGMStatement *_statement;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
- (void).cxx_destruct;
- (void)close;
@property(readonly) NSMutableDictionary *columnNameToIndexMap; // @synthesize columnNameToIndexMap=_columnNameToIndexMap;
- (id)dataForColumnIndex:(int)arg1;
- (void)dealloc;
- (double)doubleForColumnIndex:(int)arg1;
- (long long)longLongIntForColumnIndex:(int)arg1;
- (_Bool)next;
- (_Bool)nextWithError:(id *)arg1;
- (id)objectForColumnIndex:(int)arg1;
@property(retain, nonatomic) SGMDataBase *parentDB; // @synthesize parentDB=_parentDB;
@property(retain) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSDictionary *resultDictionary;
@property(retain) SGMStatement *statement; // @synthesize statement=_statement;
- (id)stringForColumnIndex:(int)arg1;

@end

