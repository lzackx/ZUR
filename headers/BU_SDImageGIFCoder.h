//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAnimatedImageCoder-Protocol.h"
#import "SDProgressiveImageCoder-Protocol.h"

@class NSArray, NSData, NSString;

@interface BU_SDImageGIFCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>
{
    unsigned long long _width;
    unsigned long long _height;
    struct CGImageSource *_imageSource;
    NSData *_imageData;
    double _scale;
    unsigned long long _loopCount;
    unsigned long long _frameCount;
    NSArray *_frames;
    _Bool _finished;
}

+ (id)sharedCoder;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *animatedImageData;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
- (_Bool)canDecodeFromData:(id)arg1;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (_Bool)canIncrementalDecodeFromData:(id)arg1;
- (void)dealloc;
- (id)decodedImageWithData:(id)arg1 options:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2 options:(id)arg3;
- (id)incrementalDecodedImageWithOptions:(id)arg1;
- (id)initIncrementalWithOptions:(id)arg1;
- (id)initWithAnimatedImageData:(id)arg1 options:(id)arg2;
- (_Bool)scanAndCheckFramesValidWithImageSource:(struct CGImageSource *)arg1;
- (float)sdBu_frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
- (unsigned long long)sdBu_imageLoopCountWithSource:(struct CGImageSource *)arg1;
- (void)updateIncrementalData:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

