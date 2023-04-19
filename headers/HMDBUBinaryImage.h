//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDBUBinaryImage : NSObject
{
    int _cpuType;
    int _cpuSubType;
    unsigned long long _address;
    unsigned long long _vmAddress;
    unsigned long long _vmSize;
    NSString *_imageName;
    NSString *_uuid;
    unsigned long long _version;
    NSString *_path;
}

+ (id)imageWithMachImage:(CDStruct_483cd0ba *)arg1;
+ (id)linkedBinaryImages;
+ (id)mainBinaryImage;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(nonatomic) int cpuSubType; // @synthesize cpuSubType=_cpuSubType;
@property(nonatomic) int cpuType; // @synthesize cpuType=_cpuType;
- (id)debugDescription;
- (id)description;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned long long vmAddress; // @synthesize vmAddress=_vmAddress;
@property(nonatomic) unsigned long long vmSize; // @synthesize vmSize=_vmSize;

@end

