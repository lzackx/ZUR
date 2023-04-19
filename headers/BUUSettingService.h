//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUABTest, BUThreadSafeDictionary, NSArray, NSDictionary, NSNumber, NSString;

@interface BUUSettingService : NSObject
{
    _Bool _isReadVideoFromCache;
    _Bool _silenceSDK;
    _Bool _isGrey;
    _Bool _collectCrash;
    _Bool _checkTypeOpen;
    BUThreadSafeDictionary *_configList;
    NSString *_xpath;
    NSDictionary *_policy;
    NSNumber *_vbtt;
    NSString *_adsUrl;
    NSString *_appLogUrl;
    NSString *_dc;
    NSArray *_tplIds_infos;
    NSArray *_tplIds;
    BUABTest *_abtest;
    NSArray *_playableInterceptAry;
    NSString *_purePyloadH5;
    long long _coppa;
    long long _splashLoadType;
    long long _territoryType;
    NSDictionary *_headersExt;
    long long _bothOpen;
    long long _supportTNC;
    NSString *_privacy_url;
    long long _is_gdpr_user;
    NSString *_consent_url;
    long long _max_tpl_cnts;
    NSString *_dyn_draw_engine_url;
    long long _fetch_tpl_timeout_ctrl;
    long long _circle_time;
    long long _circle_splash;
    NSArray *_scheme_wlist;
    NSDictionary *_setting;
}

+ (_Bool)canAddPrivacy;
+ (void)deleteLocalSetting;
+ (id)jsActLogURLString;
+ (id)service;
+ (id)shouldEvaluateActLogJsWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BUABTest *abtest; // @synthesize abtest=_abtest;
@property(copy, nonatomic) NSString *adsUrl; // @synthesize adsUrl=_adsUrl;
@property(copy, nonatomic) NSString *appLogUrl; // @synthesize appLogUrl=_appLogUrl;
@property(nonatomic) long long bothOpen; // @synthesize bothOpen=_bothOpen;
- (void)buildupService;
@property(nonatomic) _Bool checkTypeOpen; // @synthesize checkTypeOpen=_checkTypeOpen;
@property(nonatomic) long long circle_splash; // @synthesize circle_splash=_circle_splash;
@property(nonatomic) long long circle_time; // @synthesize circle_time=_circle_time;
@property(nonatomic) _Bool collectCrash; // @synthesize collectCrash=_collectCrash;
@property(retain, nonatomic) BUThreadSafeDictionary *configList; // @synthesize configList=_configList;
- (void)configSplashType:(id)arg1;
@property(copy, nonatomic) NSString *consent_url; // @synthesize consent_url=_consent_url;
@property(nonatomic) long long coppa; // @synthesize coppa=_coppa;
@property(copy, nonatomic) NSString *dc; // @synthesize dc=_dc;
@property(copy, nonatomic) NSString *dyn_draw_engine_url; // @synthesize dyn_draw_engine_url=_dyn_draw_engine_url;
- (void)fetchSetting;
@property(nonatomic) long long fetch_tpl_timeout_ctrl; // @synthesize fetch_tpl_timeout_ctrl=_fetch_tpl_timeout_ctrl;
@property(retain, nonatomic) NSDictionary *headersExt; // @synthesize headersExt=_headersExt;
@property(nonatomic) _Bool isGrey; // @synthesize isGrey=_isGrey;
@property(nonatomic) _Bool isReadVideoFromCache; // @synthesize isReadVideoFromCache=_isReadVideoFromCache;
@property(nonatomic) long long is_gdpr_user; // @synthesize is_gdpr_user=_is_gdpr_user;
@property(nonatomic) long long max_tpl_cnts; // @synthesize max_tpl_cnts=_max_tpl_cnts;
- (id)modelWithRit:(id)arg1;
@property(retain, nonatomic) NSArray *playableInterceptAry; // @synthesize playableInterceptAry=_playableInterceptAry;
@property(retain, nonatomic) NSDictionary *policy; // @synthesize policy=_policy;
@property(copy, nonatomic) NSString *privacy_url; // @synthesize privacy_url=_privacy_url;
@property(copy, nonatomic) NSString *purePyloadH5; // @synthesize purePyloadH5=_purePyloadH5;
@property(copy, nonatomic) NSArray *scheme_wlist; // @synthesize scheme_wlist=_scheme_wlist;
- (void)setRitModelConfigList:(id)arg1;
@property(copy, nonatomic) NSDictionary *setting; // @synthesize setting=_setting;
@property(nonatomic) _Bool silenceSDK; // @synthesize silenceSDK=_silenceSDK;
@property(nonatomic) long long splashLoadType; // @synthesize splashLoadType=_splashLoadType;
@property(nonatomic) long long supportTNC; // @synthesize supportTNC=_supportTNC;
@property(nonatomic) long long territoryType; // @synthesize territoryType=_territoryType;
@property(retain, nonatomic) NSArray *tplIds; // @synthesize tplIds=_tplIds;
@property(retain, nonatomic) NSArray *tplIds_infos; // @synthesize tplIds_infos=_tplIds_infos;
@property(retain, nonatomic) NSNumber *vbtt; // @synthesize vbtt=_vbtt;
@property(copy, nonatomic) NSString *xpath; // @synthesize xpath=_xpath;
- (void)switchWithRequest:(id)arg1 settingString:(id)arg2;

@end
