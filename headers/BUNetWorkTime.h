//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUNetWorkTime : NSObject
{
    long long _load_ts;
    long long _request_ts;
    long long _s_revice_ts;
    long long _s_send_ts;
    long long _c_revice_ts;
    long long _c_end_ts;
    long long _network_time;
    long long _duration;
    long long _client_start_time;
    long long _go_time;
    long long _sever_time;
    long long _back_time;
    long long _client_end_time;
}

@property(nonatomic) long long back_time; // @synthesize back_time=_back_time;
@property(nonatomic) long long c_end_ts; // @synthesize c_end_ts=_c_end_ts;
@property(nonatomic) long long c_revice_ts; // @synthesize c_revice_ts=_c_revice_ts;
@property(nonatomic) long long client_end_time; // @synthesize client_end_time=_client_end_time;
@property(nonatomic) long long client_start_time; // @synthesize client_start_time=_client_start_time;
- (void)convertTimeIntervalToTime;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long go_time; // @synthesize go_time=_go_time;
@property(nonatomic) long long load_ts; // @synthesize load_ts=_load_ts;
@property(nonatomic) long long network_time; // @synthesize network_time=_network_time;
@property(nonatomic) long long request_ts; // @synthesize request_ts=_request_ts;
@property(nonatomic) long long s_revice_ts; // @synthesize s_revice_ts=_s_revice_ts;
@property(nonatomic) long long s_send_ts; // @synthesize s_send_ts=_s_send_ts;
@property(nonatomic) long long sever_time; // @synthesize sever_time=_sever_time;

@end

