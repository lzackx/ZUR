//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMTTransport-Protocol.h"

@class NSMutableData, NSString;

@interface UMTMemoryBuffer : NSObject <UMTTransport>
{
    NSMutableData *mBuffer;
    unsigned long long mOffset;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;
- (id)getBuffer;
- (id)init;
- (id)initWithData:(id)arg1;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

