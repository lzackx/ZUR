//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UMEnvelopeSubFolder : NSObject
{
    NSMutableDictionary *_envelopeSubFolderDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *envelopeSubFolderDic; // @synthesize envelopeSubFolderDic=_envelopeSubFolderDic;
- (id)init;
- (void)setEnvelopeSubFolder:(id)arg1 maxCount:(unsigned long long)arg2;

@end

