//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WNYD_BookStoreTool : NSObject
{
}

+ (void)WNYD_getBookLoginStoreWithSex:(id)arg1 rand:(long long)arg2 success:(CDUnknownBlockType)arg3;
+ (id)getBookStoreWithLike:(id)arg1 page:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)getBookStoreWithMore:(id)arg1 category:(id)arg2 page:(long long)arg3 isLike:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (id)getBookStoreWithSex:(id)arg1 rand:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

