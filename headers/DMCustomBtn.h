//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface DMCustomBtn : UIButton
{
    _Bool _hasTitleFrame;
    _Bool _isCollect;
    id _object;
    NSString *_des;
    struct CGRect _imageViewFrame;
    struct CGRect _titileFrame;
}

+ (id)buttonWithTitle:(id)arg1 backgroundColor:(id)arg2 tinColor:(id)arg3 cellFrame:(struct CGRect)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(nonatomic) _Bool hasTitleFrame; // @synthesize hasTitleFrame=_hasTitleFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(nonatomic) _Bool isCollect; // @synthesize isCollect=_isCollect;
- (void)layoutSubviews;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) struct CGRect titileFrame; // @synthesize titileFrame=_titileFrame;

@end

