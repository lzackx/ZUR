//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WNYD_NoDataView : UIView
{
    NSString *_tips;
    UILabel *_label;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void)noDataView:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;

@end
