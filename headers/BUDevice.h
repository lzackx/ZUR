//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BUDevice : NSObject
{
    _Bool _isChinaLocal;
    _Bool _isAsiaZone;
    _Bool _isEuropeZone;
    NSString *_did;
    NSString *_applog_did;
    NSString *_device_id;
    NSString *_imei;
    long long _type;
    long long _os;
    NSString *_osVersion;
    NSString *_language;
    NSString *_vendor;
    NSString *_model;
    long long _connType;
    NSString *_macAdr;
    unsigned long long _screenWidth;
    unsigned long long _screenHeight;
    NSString *_ssid;
    NSString *_wifiMAC;
    NSString *_imsi;
    NSString *_carrierName;
    NSString *_MCC;
    NSString *_MNC;
    NSString *_powerOnTime;
    NSString *_phoneName;
    NSString *_ip;
    NSString *_userAgent;
    NSString *_timeZone;
    NSString *_timeZoneCity;
    NSString *_idfv;
    NSNumber *_deviceFreeSize;
}

+ (id)currentDevice;
- (void).cxx_destruct;
- (long long)GetNetWorkType;
@property(copy, nonatomic) NSString *MCC; // @synthesize MCC=_MCC;
@property(copy, nonatomic) NSString *MNC; // @synthesize MNC=_MNC;
@property(copy, nonatomic) NSString *applog_did; // @synthesize applog_did=_applog_did;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(nonatomic) long long connType; // @synthesize connType=_connType;
@property(retain, nonatomic) NSNumber *deviceFreeSize; // @synthesize deviceFreeSize=_deviceFreeSize;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
- (id)dictionaryValue;
@property(copy, nonatomic) NSString *did; // @synthesize did=_did;
- (id)getAppLogdid;
- (id)getCarrierMCC;
- (id)getCarrierMNC;
- (id)getCarrierName;
- (long long)getCurrentDeviceType;
- (id)getCurrentIMSI;
- (id)getCurrentSSID;
- (id)getCurrentWiFiMAC;
- (id)getDeviceFreeSize;
- (id)getDeviceStartTime;
- (id)getEtcTimeZone;
- (id)getLanguage;
- (id)getTimeZoneCity;
@property(copy, nonatomic) NSString *idfv; // @synthesize idfv=_idfv;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(nonatomic) _Bool isAsiaZone; // @synthesize isAsiaZone=_isAsiaZone;
@property(nonatomic) _Bool isChinaLocal; // @synthesize isChinaLocal=_isChinaLocal;
@property(nonatomic) _Bool isEuropeZone; // @synthesize isEuropeZone=_isEuropeZone;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void)loadCurrentAppInfoWithTerritoryType:(int)arg1;
- (void)loadOverSeaPrivateInfo;
@property(copy, nonatomic) NSString *macAdr; // @synthesize macAdr=_macAdr;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) long long os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *phoneName; // @synthesize phoneName=_phoneName;
@property(copy, nonatomic) NSString *powerOnTime; // @synthesize powerOnTime=_powerOnTime;
- (void)resetPrivateInfoWithTerritoryType:(int)arg1;
@property(nonatomic) unsigned long long screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) unsigned long long screenWidth; // @synthesize screenWidth=_screenWidth;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *timeZoneCity; // @synthesize timeZoneCity=_timeZoneCity;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;
@property(copy, nonatomic) NSString *wifiMAC; // @synthesize wifiMAC=_wifiMAC;

@end
