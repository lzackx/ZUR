//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUSize, NSArray, NSMutableArray, NSString;

@interface BUAdSlot : NSObject
{
    _Bool _isSupportDeepLink;
    _Bool _isOriginAd;
    NSString *_ID;
    long long _AdType;
    long long _position;
    NSMutableArray *_imgSizeArray;
    BUSize *_imgSize;
    BUSize *_iconSize;
    long long _titleLengthLimit;
    long long _descLengthLimit;
    long long _adloadSeq;
    NSString *_primeRit;
    long long _AdCount;
    NSString *_ritScene;
    long long _renderType;
    NSArray *_parentTplIds;
}

- (void).cxx_destruct;
@property(nonatomic) long long AdCount; // @synthesize AdCount=_AdCount;
@property(nonatomic) long long AdType; // @synthesize AdType=_AdType;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(nonatomic) long long adloadSeq; // @synthesize adloadSeq=_adloadSeq;
@property(nonatomic) long long descLengthLimit; // @synthesize descLengthLimit=_descLengthLimit;
- (id)dictionaryValue;
@property(retain, nonatomic) BUSize *iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) BUSize *imgSize; // @synthesize imgSize=_imgSize;
@property(retain, nonatomic) NSMutableArray *imgSizeArray; // @synthesize imgSizeArray=_imgSizeArray;
@property(nonatomic) _Bool isOriginAd; // @synthesize isOriginAd=_isOriginAd;
@property(nonatomic) _Bool isSupportDeepLink; // @synthesize isSupportDeepLink=_isSupportDeepLink;
@property(copy, nonatomic) NSArray *parentTplIds; // @synthesize parentTplIds=_parentTplIds;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *primeRit; // @synthesize primeRit=_primeRit;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(copy, nonatomic) NSString *ritScene; // @synthesize ritScene=_ritScene;
@property(nonatomic) long long titleLengthLimit; // @synthesize titleLengthLimit=_titleLengthLimit;

@end
