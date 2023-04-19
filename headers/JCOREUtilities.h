//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JCOREUtilities : NSObject
{
}

+ (id)aesDecryptData:(id)arg1 withKey:(id)arg2 iv:(const char *)arg3;
+ (id)aesEncryptData:(id)arg1 withKey:(id)arg2 iv:(const char *)arg3;
+ (id)appVersion;
+ (id)bundleID;
+ (void)cacheDeviceID:(id)arg1;
+ (void)cacheDeviceMacAddress:(id)arg1;
+ (void)cacheDevicePID:(id)arg1;
+ (_Bool)checkIPAddress:(id)arg1;
+ (void)converTimestamp:(long long)arg1 toDate:(id *)arg2 andTime:(id *)arg3;
+ (id)converTimestampToString:(long long)arg1;
+ (id)createDeviceIdWithKey:(id)arg1;
+ (id)ctCarrierInfo;
+ (id)ctCarrierName;
+ (id)ctCountryCode;
+ (id)ctGeneration;
+ (unsigned char)ctGenerationNumber;
+ (id)ctMobileNetworkCode;
+ (id)ctNetworkType;
+ (id)ctRadioType;
+ (id)currentResolution;
+ (id)currentTimeZone;
+ (double)currentTimestamp;
+ (id)dataBase64:(id)arg1;
+ (id)dataToJSON:(id)arg1;
+ (id)dataToString:(id)arg1;
+ (id)description:(id)arg1;
+ (id)deviceID:(id)arg1;
+ (id)deviceMacAddress;
+ (id)devicePID:(id)arg1;
+ (id)fakeIMEI;
+ (id)gzip:(id)arg1;
+ (id)innerLock;
+ (_Bool)isAccessWifiInfo;
+ (id)jsonToData:(id)arg1;
+ (id)macAddress;
+ (id)modelName;
+ (id)networkInfo:(id)arg1;
+ (id)oldDeviceID;
+ (void)removeFakeIMEI;
+ (void)resetDeviceID;
+ (id)ssid;
+ (id)stringByMD5:(id)arg1;
+ (id)stringByMD5Data:(id)arg1;
+ (id)systemLanguage;
+ (id)systemVersion;
+ (id)unzip:(id)arg1;

@end
