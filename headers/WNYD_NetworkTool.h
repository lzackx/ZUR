//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNYD_NetworkManager.h"

@interface WNYD_NetworkTool : WNYD_NetworkManager
{
}

+ (id)baseToolGetWithUrl:(id)arg1 isLogin:(_Bool)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)baseToolMethod:(long long)arg1 isLogin:(_Bool)arg2 url:(id)arg3 params:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (id)baseToolMethod:(long long)arg1 url:(id)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)baseToolPostTimeOutWithUrl:(id)arg1 isLogin:(_Bool)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)baseToolPostWithUrl:(id)arg1 isLogin:(_Bool)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)downloadBtnImage:(id)arg1 place:(id)arg2 btn:(id)arg3 completed:(CDUnknownBlockType)arg4;
+ (void)downloadImage:(id)arg1 place:(id)arg2 imageView:(id)arg3 completed:(CDUnknownBlockType)arg4;
+ (void)downloadWithoutAnimationImage:(id)arg1 place:(id)arg2 imageView:(id)arg3 completed:(CDUnknownBlockType)arg4;
+ (id)getUrlString:(long long)arg1;
+ (id)getUrlString:(long long)arg1 parameter:(id)arg2;
+ (void)postBuglyError:(id)arg1 task:(id)arg2;

@end
