//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDTWXOpenMiniProgramParam : NSObject
{
    NSString *_userName;
    NSString *_path;
    NSString *_token;
    NSString *_adTraceData;
    long long _pathType;
    NSString *_muid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adTraceData; // @synthesize adTraceData=_adTraceData;
@property(copy, nonatomic) NSString *muid; // @synthesize muid=_muid;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long pathType; // @synthesize pathType=_pathType;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toString;

@end

