//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUPersistenceProtocol-Protocol.h"

@class BUPersistenceOption, NSMutableDictionary, NSString;

@interface BUMemoryCache : NSObject <BUPersistenceProtocol>
{
    NSMutableDictionary *_data;
    BUPersistenceOption *_option;
}

- (void).cxx_destruct;
- (id)allObjects;
- (void)appDidEnterBackgroundNotification;
- (void)appDidReceiveMemoryWarningNotification;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void)dealloc;
- (_Bool)hasObjectForKey:(id)arg1;
- (id)init;
- (id)initWithOption:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;
@property(retain, nonatomic) BUPersistenceOption *option; // @synthesize option=_option;
- (_Bool)removeAll;
- (_Bool)removeObjectsForKeys:(id)arg1;
- (_Bool)save;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (void)updateObjectsForKeys:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

