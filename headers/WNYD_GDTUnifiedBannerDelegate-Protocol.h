//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WNYD_AdvertConfigModel;

@protocol WNYD_GDTUnifiedBannerDelegate <NSObject>
- (void)deleteADViewWith:(WNYD_AdvertConfigModel *)arg1 andADHeight:(float)arg2 andSelfView:(UIView *)arg3;
- (void)showADWith:(WNYD_AdvertConfigModel *)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(UIView *)arg4 andADView:(UIView *)arg5;
@end

