//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCORECacheThread;

@interface JCORECacheController : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    JCORECacheThread *_thread;
}

+ (id)instance;
+ (void)performSel:(SEL)arg1 withObject:(id)arg2;
+ (id)read:(id)arg1;
+ (void)read:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (_Bool)write:(id)arg1;
+ (void)write:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)asyncHandleCompletion:(CDUnknownBlockType)arg1;
- (id)cacheObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isLargeData:(long long)arg1;
- (_Bool)isPersistentData:(long long)arg1;
- (void)performSel:(SEL)arg1 withObject:(id)arg2;
- (void)read:(id)arg1;
@property(retain, nonatomic) JCORECacheThread *thread; // @synthesize thread=_thread;
- (void)write:(id)arg1;

@end

