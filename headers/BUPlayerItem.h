//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface BUPlayerItem : NSObject
{
    NSString *_title;
    NSURL *_videoURL;
    NSString *_videoFileHash;
    UIImage *_placeholderImage;
    NSString *_placeholderImageURLString;
    long long _placeholderImageContentMode;
    long long _seekTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) long long placeholderImageContentMode; // @synthesize placeholderImageContentMode=_placeholderImageContentMode;
@property(copy, nonatomic) NSString *placeholderImageURLString; // @synthesize placeholderImageURLString=_placeholderImageURLString;
@property(nonatomic) long long seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *videoFileHash; // @synthesize videoFileHash=_videoFileHash;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;

@end

