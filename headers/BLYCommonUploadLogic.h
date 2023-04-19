//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYAbstractLogic.h"

@class BLYHttpRequest, BLYJceObjectV2, BLYResponsePkg, NSData;

@interface BLYCommonUploadLogic : BLYAbstractLogic
{
    _Bool _isExcuting;
    BLYJceObjectV2 *_jceModel;
    NSData *_requestData;
    BLYHttpRequest *_httpRequest;
    BLYResponsePkg *_responsePakage;
}

- (void).cxx_destruct;
- (void)cancel;
- (CDUnknownBlockType)compeletionHandler;
- (void)handleResponseData:(id)arg1;
- (id)httpHeaderField;
@property(retain, nonatomic) BLYHttpRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(nonatomic) _Bool isExcuting; // @synthesize isExcuting=_isExcuting;
- (id)jceCMDString;
@property(retain, nonatomic) BLYJceObjectV2 *jceModel; // @synthesize jceModel=_jceModel;
- (void)main;
- (id)persistFileKey;
- (long long)persistType;
- (void)persistentSuccessed:(_Bool)arg1;
- (void)reportSuccessed:(_Bool)arg1;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (id)requestReservedInfo;
- (id)requestUrlString;
@property(retain, nonatomic) BLYResponsePkg *responsePakage; // @synthesize responsePakage=_responsePakage;
- (_Bool)shouldPersist;
- (_Bool)shouldUpload;

@end

