//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol IGdtNativeNetProtocol <NSObject>
- (void)executeGet:(NSString *)arg1 param:(NSDictionary *)arg2 success:(void (^)(NSDictionary *, long long))arg3 failure:(void (^)(NSError *, long long))arg4;
- (void)executePost:(NSString *)arg1 body:(NSData *)arg2 success:(void (^)(NSDictionary *, long long))arg3 failure:(void (^)(NSError *, long long))arg4;
@end

