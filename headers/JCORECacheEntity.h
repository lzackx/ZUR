//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORECacheProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface JCORECacheEntity : NSObject <JCORECacheProtocol, NSCoding, NSCopying>
{
    _Bool _encrypt;
    _Bool _compress;
    _Bool _sync;
    NSString *_key;
    NSString *_dirName;
    id _content;
    long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool compress; // @synthesize compress=_compress;
@property(retain, nonatomic) id content; // @synthesize content=_content;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *dirName; // @synthesize dirName=_dirName;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool sync; // @synthesize sync=_sync;
@property(nonatomic) long long type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

