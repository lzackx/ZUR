//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface ChameleonCountedColor : NSObject
{
    unsigned long long _count;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain) UIColor *color; // @synthesize color=_color;
- (long long)compare:(id)arg1;
@property unsigned long long count; // @synthesize count=_count;
- (id)initWithColor:(id)arg1 count:(unsigned long long)arg2;

@end

