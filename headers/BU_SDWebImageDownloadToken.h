//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDWebImageOperation-Protocol.h"

@class BU_SDWebImageDownloader, NSOperation, NSString, NSURL, NSURLRequest, NSURLResponse;
@protocol SDWebImageDownloaderOperation;

@interface BU_SDWebImageDownloadToken : NSObject <SDWebImageOperation>
{
    _Bool _cancelled;
    NSURL *_url;
    NSURLRequest *_request;
    NSURLResponse *_response;
    id _downloadOperationCancelToken;
    NSOperation<SDWebImageDownloaderOperation> *_downloadOperation;
    BU_SDWebImageDownloader *_downloader;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
@property(nonatomic) __weak NSOperation<SDWebImageDownloaderOperation> *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(retain, nonatomic) id downloadOperationCancelToken; // @synthesize downloadOperationCancelToken=_downloadOperationCancelToken;
- (void)downloadReceiveResponse:(id)arg1;
@property(nonatomic) __weak BU_SDWebImageDownloader *downloader; // @synthesize downloader=_downloader;
- (id)initWithDownloadOperation:(id)arg1;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

