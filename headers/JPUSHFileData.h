//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JPUSHFileDataBody, JPUSHFileDataHeader, NSData;

@interface JPUSHFileData : NSObject
{
    NSData *_rawData;
}

+ (id)dataWithHeader:(id)arg1 body:(id)arg2;
+ (id)dataWithRawData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) JPUSHFileDataBody *dataBody; // @dynamic dataBody;
@property(readonly, nonatomic) JPUSHFileDataHeader *dataHeader; // @dynamic dataHeader;
- (id)rawData;

@end
