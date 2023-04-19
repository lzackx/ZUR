//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLYLogger : NSObject
{
}

+ (void)addLogger:(id)arg1;
+ (void)addLoggerToQueue:(id)arg1;
+ (void)cleanAllLoggers;
+ (void)initLogger:(unsigned long long)arg1 printStdout:(_Bool)arg2;
+ (void)initialize;
+ (_Bool)isLogUserActivied;
+ (_Bool)isLoggable:(unsigned long long)arg1;
+ (void)level:(unsigned long long)arg1 file:(const char *)arg2 function:(const char *)arg3 line:(unsigned long long)arg4 tag:(id)arg5 log:(id)arg6;
+ (void)log:(id)arg1 level:(unsigned long long)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 tag:(id)arg6;
+ (unsigned long long)logLevel;
+ (id)logs;
+ (void)printLog:(id)arg1;
+ (void)queueLogMessage:(id)arg1;
+ (void)removeAllLoggers;
+ (void)removeLogger:(id)arg1;
+ (void)removeLoggerFromQueue:(id)arg1;
+ (void)setLogLevel:(unsigned long long)arg1;
+ (void)setLogUrgentMode:(_Bool)arg1;
+ (void)setUserLogActivied:(_Bool)arg1;

@end
