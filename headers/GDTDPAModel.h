//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GDTDPAModel : NSObject
{
    NSString *_productImageUrl;
    NSString *_productName;
    NSArray *_tagsArray;
    NSString *_discount;
    NSString *_price;
    NSString *_buttonText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl=_productImageUrl;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;

@end

