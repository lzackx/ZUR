//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGMNetworkAPIClient : NSObject
{
}

+ (void)ORI_SGM_GET:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)ORI_SGM_POST:(id)arg1 URLParameters:(id)arg2 bodyParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)ORI_SGM_POST_SYNC:(id)arg1 URLParameters:(id)arg2 bodyParameters:(id)arg3 error:(id *)arg4;
+ (void)SGM_GET:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)SGM_POST:(id)arg1 URLParameters:(id)arg2 bodyParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)SGM_POST_SYNC:(id)arg1 URLParameters:(id)arg2 bodyParameters:(id)arg3 error:(id *)arg4;
+ (id)buildQueryStringFromDictionary:(id)arg1;

@end

