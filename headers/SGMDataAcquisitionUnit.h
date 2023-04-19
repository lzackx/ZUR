//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGMDataAcquisitionUnit : NSObject
{
}

+ (long long)cpuSubType;
+ (long long)cpuType;
+ (id)p_stringForCPUType:(long long)arg1;
+ (id)p_telephonyNetworkInfo;
+ (id)sgm_DNS;
+ (double)sgm_applicationCPUUsage;
+ (_Bool)sgm_batteryIsCharing;
+ (id)sgm_bundleIdentifier;
+ (id)sgm_carrierName;
+ (id)sgm_cpuSubtypeString;
+ (id)sgm_cpuTypeString;
+ (double)sgm_currentBatteryUsage;
+ (id)sgm_currentLanguages;
+ (id)sgm_currentRegionCode;
+ (long long)sgm_diskSpaceFree;
+ (long long)sgm_diskSpaceUsed;
+ (id)sgm_imsi;
+ (_Bool)sgm_insertedSIMCard;
+ (_Bool)sgm_isUsingNetworkProxy;
+ (_Bool)sgm_isUsingVPN;
+ (id)sgm_latestPhotosMD5AndTotalCount:(int *)arg1;
+ (id)sgm_macAddress;
+ (id)sgm_machineModelName;
+ (id)sgm_machineName;
+ (long long)sgm_memoryFree;
+ (long long)sgm_memoryUsed;
+ (id)sgm_networkConnectType;
+ (id)sgm_operationSystemAndVersion;
+ (id)sgm_proxyIPAddress;
+ (long long)sgm_proxyPort;
+ (struct CGSize)sgm_resolution;
+ (double)sgm_startupTime;
+ (double)sgm_systemCPUUsage;
+ (double)sgm_systemTime;
+ (long long)sgm_totalDiskSpace;
+ (long long)sgm_totalPhysicalMemory;
+ (id)sgm_vendorid;
+ (id)sgm_wifiIPAddress;
+ (id)sgm_wifiMacAddress;
+ (id)sgm_wifiName;

@end
