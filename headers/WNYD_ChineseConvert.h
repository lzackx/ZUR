//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WNYD_ChineseConvert : NSObject
{
    _Bool _isSimplified;
    NSString *_simplifiedCode;
    NSString *_traditionalCode;
}

+ (_Bool)checkIsSimplified;
+ (id)convertSimplifiedToTraditional:(id)arg1;
+ (id)convertString:(id)arg1;
+ (id)convertTraditionalToSimplified:(id)arg1;
+ (id)getInstance;
+ (id)getLanguageType;
+ (void)resetSystemLanguage;
+ (void)setUserLanguage:(long long)arg1;
+ (id)userLanguage;
- (void).cxx_destruct;
- (id)convertSimplifiedToTraditional:(id)arg1;
- (id)convertTraditionalToSimplified:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isSimplified; // @synthesize isSimplified=_isSimplified;
@property(retain, nonatomic) NSString *simplifiedCode; // @synthesize simplifiedCode=_simplifiedCode;
@property(retain, nonatomic) NSString *traditionalCode; // @synthesize traditionalCode=_traditionalCode;

@end

