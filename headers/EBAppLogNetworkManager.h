//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface EBAppLogNetworkManager : NSObject
{
    NSURLSession *_session;
}

+ (void)asyncRequestForURL:(id)arg1 method:(id)arg2 parameters:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)bodyDataWithParams:(id)arg1 forRequest:(id)arg2;
+ (id)requestForURL:(id)arg1 method:(id)arg2;
+ (id)responseData:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)sharedInstance;
+ (id)syncRequestForURL:(id)arg1 method:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;

@end

