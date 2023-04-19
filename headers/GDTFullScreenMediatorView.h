//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTFullScreenOverlayMediatorViewProtocol-Protocol.h"

@class GDTPlayer, NSString;
@protocol GDTFullScreenOverlayMediatorViewDelegate, GDTFullScreenOverlayMediatorViewProtocol;

@interface GDTFullScreenMediatorView : UIView <GDTFullScreenOverlayMediatorViewProtocol>
{
    UIView<GDTFullScreenOverlayMediatorViewProtocol> *_mediatorView;
}

- (void).cxx_destruct;
- (void)GDTfunctiond5dBik:(double)arg1;
- (void)GDTfunctioni2Mcjm;
- (void)GDTfunctionx51ozf;
@property(nonatomic) __weak id <GDTFullScreenOverlayMediatorViewDelegate> delegate;
- (struct CGRect)frame;
- (id)initLGDTfunctiond8PfLr:(id)arg1;
@property(retain, nonatomic) UIView<GDTFullScreenOverlayMediatorViewProtocol> *mediatorView; // @synthesize mediatorView=_mediatorView;
@property(nonatomic) __weak GDTPlayer *player;
- (void)showCloseButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

