//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WNYD_ClassifyBannerData;

@interface WNYD_ClassifyBanner : NSObject
{
    WNYD_ClassifyBannerData *_data;
    NSString *_title;
    NSString *_image;
    long long _type;
}

+ (id)modelContainerPropertyGenericClass;
- (void).cxx_destruct;
@property(retain, nonatomic) WNYD_ClassifyBannerData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

