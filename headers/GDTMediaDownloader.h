//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTActionWorkerDelegate-Protocol.h"

@class GDTActionWorker, GDTContentInfo, GDTMediaCacheWorker, NSString, NSURL, NSURLSessionDataTask;
@protocol GDTMediaDownloaderDelegate;

@interface GDTMediaDownloader : NSObject <GDTActionWorkerDelegate>
{
    _Bool _saveToCache;
    _Bool _downloadToEnd;
    NSURL *_url;
    id <GDTMediaDownloaderDelegate> _delegate;
    GDTContentInfo *_info;
    long long _cacheCount;
    NSString *_specifiedFileName;
    long long _tryCount;
    NSURLSessionDataTask *_task;
    GDTMediaCacheWorker *_cacheWorker;
    GDTActionWorker *_actionWorker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GDTActionWorker *actionWorker; // @synthesize actionWorker=_actionWorker;
- (void)actionWorker:(id)arg1 didFinishWithError:(id)arg2;
- (void)actionWorker:(id)arg1 didReceiveData:(id)arg2 isLocal:(_Bool)arg3;
- (void)actionWorker:(id)arg1 didReceiveResponse:(id)arg2;
@property(nonatomic) long long cacheCount; // @synthesize cacheCount=_cacheCount;
@property(retain, nonatomic) GDTMediaCacheWorker *cacheWorker; // @synthesize cacheWorker=_cacheWorker;
- (void)cancel;
@property(retain, nonatomic) id context;
- (void)dealloc;
@property(nonatomic) __weak id <GDTMediaDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadFromStartToEnd;
- (void)downloadTaskFromOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 toEnd:(_Bool)arg3;
@property(nonatomic) _Bool downloadToEnd; // @synthesize downloadToEnd=_downloadToEnd;
@property(retain, nonatomic) GDTContentInfo *info; // @synthesize info=_info;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 specifiedFileName:(id)arg2;
- (_Bool)modifyFileName;
@property(nonatomic) _Bool saveToCache; // @synthesize saveToCache=_saveToCache;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) long long tryCount; // @synthesize tryCount=_tryCount;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *specifiedFileName; // @synthesize specifiedFileName=_specifiedFileName;
- (id)specifiedTempFilePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

