//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTPlayerControlViewProtocol-Protocol.h"

@class GDTPlayer, NSString, UIButton;

@interface GDTLandScapeControlView : UIView <GDTPlayerControlProtocol, GDTPlayerControlViewProtocol>
{
    _Bool _isShow;
    GDTPlayer *player;
    UIView *_topToolView;
    UIButton *_backButton;
    UIButton *_playOrPauseBtn;
    UIButton *_muteButton;
}

- (void).cxx_destruct;
- (void)GDTfunctiond1LX6l:(_Bool)arg1;
- (void)GDTfunctione0eS1D;
- (void)GDTfunctionf4S3CR;
- (void)GDTfunctiong780hQ;
- (void)GDTfunctionh6L9pp;
- (void)GDTfunctionj5zBqz:(id)arg1;
- (void)GDTfunctionk2u8Oq;
- (void)GDTfunctionm5lYd3:(id)arg1;
- (void)GDTfunctionq5WZNy:(id)arg1;
- (_Bool)GDTfunctiony0AYj0:(struct CGPoint)arg1 gestureType:(unsigned long long)arg2 touch:(id)arg3;
- (void)GDTfunctionz3DIg1;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)dealloc;
- (void)gdt_player:(id)arg1 playStateChanged:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) UIButton *playOrPauseBtn; // @synthesize playOrPauseBtn=_playOrPauseBtn;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player;
@property(retain, nonatomic) UIView *topToolView; // @synthesize topToolView=_topToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
