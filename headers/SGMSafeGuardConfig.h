//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SGMSafeGuardDelegate;

@interface SGMSafeGuardConfig : NSObject
{
    unsigned long long _hostType;
    NSString *_appID;
    id <SGMSafeGuardDelegate> _delegate;
}

+ (id)configWithAppID:(id)arg1 hostType:(unsigned long long)arg2;
+ (id)configWithPlatform:(unsigned long long)arg1 appID:(id)arg2 hostType:(unsigned long long)arg3 secretKey:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)commonParamsQueryString;
@property(nonatomic) __weak id <SGMSafeGuardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long hostType; // @synthesize hostType=_hostType;
- (id)hybrid_RetFromDelegateSelector:(SEL)arg1;
- (id)hybrid_queryParasDictionary;
- (id)init;
- (_Bool)isUseTTNet;
- (id)queryParasDictionary;
- (id)retFromDelegateSelector:(SEL)arg1;
- (id)sgmBundle;

@end

