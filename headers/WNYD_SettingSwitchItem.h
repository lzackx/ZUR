//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNYD_SettingItem.h"

@interface WNYD_SettingSwitchItem : WNYD_SettingItem
{
    _Bool _isOn;
    CDUnknownBlockType _switchChangeBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(copy, nonatomic) CDUnknownBlockType switchChangeBlock; // @synthesize switchChangeBlock=_switchChangeBlock;

@end

