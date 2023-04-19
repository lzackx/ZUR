//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface GADOMIDFriendlyObstruction : NSObject
{
    UIView *_obstructionView;
    NSString *_obstructionViewClass;
    unsigned long long _purpose;
    NSString *_detailedReason;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *detailedReason; // @synthesize detailedReason=_detailedReason;
- (id)initWithObstructionView:(id)arg1 purpose:(unsigned long long)arg2 detailedReason:(id)arg3;
@property(readonly, nonatomic) __weak UIView *obstructionView; // @synthesize obstructionView=_obstructionView;
@property(readonly, nonatomic) NSString *obstructionViewClass; // @synthesize obstructionViewClass=_obstructionViewClass;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;

@end

