//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSURL;
@protocol SDWebImageOperation;

@protocol SDImageLoader <NSObject>
- (_Bool)canRequestImageForURL:(NSURL *)arg1;
- (id <SDWebImageOperation>)requestImageWithURL:(NSURL *)arg1 options:(unsigned long long)arg2 context:(NSDictionary *)arg3 progress:(void (^)(long long, long long, NSURL *))arg4 completed:(void (^)(UIImage *, NSData *, NSError *, _Bool))arg5;
- (_Bool)shouldBlockFailedURLWithURL:(NSURL *)arg1 error:(NSError *)arg2;
@end
