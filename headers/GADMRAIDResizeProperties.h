//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADMRAIDResizeProperties : NSObject
{
    _Bool _allowOffscreen;
    long long _customClosePosition;
    struct CGSize _size;
    struct CGVector _offset;
}

+ (_Bool)isContentFrameValid:(struct CGRect)arg1 forBounds:(struct CGRect)arg2 allowOffscreen:(_Bool)arg3 closeButtonPosition:(long long)arg4;
@property(nonatomic) _Bool allowOffscreen; // @synthesize allowOffscreen=_allowOffscreen;
@property(nonatomic) long long customClosePosition; // @synthesize customClosePosition=_customClosePosition;
- (id)initWithDictionary:(id)arg1;
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end
