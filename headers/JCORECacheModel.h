//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORECacheProtocol-Protocol.h"

@class NSString;

@interface JCORECacheModel : NSObject <JCORECacheProtocol>
{
    _Bool _encrypt;
    _Bool _compress;
    long long _type;
    NSString *_key;
    NSString *_dirName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool compress; // @synthesize compress=_compress;
@property(retain, nonatomic) NSString *dirName; // @synthesize dirName=_dirName;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long type; // @synthesize type=_type;

// Remaining properties
@property(retain, nonatomic) id content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
