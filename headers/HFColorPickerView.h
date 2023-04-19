//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HFColorPickerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIColor;
@protocol HFColorPickerViewDelegate;

@interface HFColorPickerView : UIView <HFColorPickerViewDelegate>
{
    NSMutableArray *_colorTitles;
    NSMutableArray *_colorButtons;
    NSArray *_colors;
    NSArray *_titles;
    double _buttonDiameter;
    long long _selectedIndex;
    double _topSpace;
    id <HFColorPickerViewDelegate> _delegate;
    UIColor *_selColor;
}

- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
@property(nonatomic) double buttonDiameter; // @synthesize buttonDiameter=_buttonDiameter;
- (void)buttonSizeFit;
- (void)calculateButtonFrames;
@property(retain, nonatomic) NSMutableArray *colorButtons; // @synthesize colorButtons=_colorButtons;
@property(retain, nonatomic) NSMutableArray *colorTitles; // @synthesize colorTitles=_colorTitles;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak id <HFColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *selColor; // @synthesize selColor=_selColor;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)setColorWithIndex:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) double topSpace; // @synthesize topSpace=_topSpace;
- (void)setupColorButtons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
