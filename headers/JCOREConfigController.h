//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCOREConfigModel;

@interface JCOREConfigController : NSObject
{
    _Bool _hasConfig;
    JCOREConfigModel *_configModel;
}

+ (id)config;
+ (_Bool)setConfig:(id)arg1;
+ (void)setNewAdvertisingId:(id)arg1;
+ (id)sharedController;
- (void).cxx_destruct;
- (_Bool)checkFormatOfAllZeroIDFA:(id)arg1;
@property(retain, nonatomic) JCOREConfigModel *configModel; // @synthesize configModel=_configModel;
- (_Bool)confirmFormatOfIDFA:(id)arg1;
- (void)doResult:(unsigned short)arg1 message:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool hasConfig; // @synthesize hasConfig=_hasConfig;
- (id)init;
- (_Bool)isValidAppKey:(id)arg1;
- (_Bool)isVerifyIDFAString:(id)arg1;
- (void)setAdvertisingId:(id)arg1;
- (_Bool)setConfig:(id)arg1;

@end

