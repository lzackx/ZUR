//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WNYD_channelModel;

@interface WNYD_SelectChannelModel : NSObject
{
    _Bool _resident;
    _Bool _editable;
    _Bool _selected;
    WNYD_channelModel *_channelModel;
    unsigned long long _tagType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WNYD_channelModel *channelModel; // @synthesize channelModel=_channelModel;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool resident; // @synthesize resident=_resident;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;

@end

