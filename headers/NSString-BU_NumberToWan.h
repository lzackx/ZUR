//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (BU_NumberToWan)
+ (id)bu_numberToThousand:(long long)arg1;
+ (id)bu_numberToWan:(long long)arg1 wan:(id)arg2;
- (id)bu_convertNoWanNumString:(long long)arg1;
- (id)bu_convertNumString:(long long)arg1 value:(long long)arg2 wan:(id)arg3;
- (id)bu_notRounding:(float)arg1 afterPoint:(int)arg2;
@end
