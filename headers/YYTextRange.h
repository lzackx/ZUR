//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextRange.h>

#import "NSCopying-Protocol.h"

@class YYTextPosition;

@interface YYTextRange : UITextRange <NSCopying>
{
    YYTextPosition *_start;
    YYTextPosition *_end;
}

+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange)arg1;
+ (id)rangeWithRange:(struct _NSRange)arg1 affinity:(long long)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
- (void).cxx_destruct;
- (struct _NSRange)asRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) YYTextPosition *end;
- (unsigned long long)hash;
- (id)init;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) YYTextPosition *start;

@end
