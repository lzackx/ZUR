//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADRequest.h"

@class NSMutableDictionary, NSString;

@interface GADDynamicHeightSearchRequest : GADRequest
{
    NSMutableDictionary *_requestParameters;
    _Bool _adTestEnabled;
    _Bool _clickToCallExtensionEnabled;
    _Bool _locationExtensionEnabled;
    _Bool _plusOnesExtensionEnabled;
    _Bool _sellerRatingsExtensionEnabled;
    _Bool _siteLinksExtensionEnabled;
    _Bool _titleUnderlineHidden;
    _Bool _boldTitleEnabled;
    _Bool _detailedAttributionExtensionEnabled;
    _Bool _longerHeadlinesExtensionEnabled;
    NSString *_query;
    long long _adPage;
    NSString *_channel;
    NSString *_hostLanguage;
    NSString *_locationExtensionTextColor;
    double _locationExtensionFontSize;
    NSString *_CSSWidth;
    long long _numberOfAds;
    NSString *_fontFamily;
    NSString *_attributionFontFamily;
    double _annotationFontSize;
    double _attributionFontSize;
    double _descriptionFontSize;
    double _domainLinkFontSize;
    double _titleFontSize;
    NSString *_adBorderColor;
    NSString *_adSeparatorColor;
    NSString *_annotationTextColor;
    NSString *_attributionTextColor;
    NSString *_backgroundColor;
    NSString *_borderColor;
    NSString *_domainLinkColor;
    NSString *_textColor;
    NSString *_titleLinkColor;
    NSString *_adBorderCSSSelections;
    double _adjustableLineHeight;
    double _attributionBottomSpacing;
    NSString *_borderCSSSelections;
    double _verticalSpacing;
}

- (void).cxx_destruct;
- (id)CSADynamicHeightSearchRequestURLWithAdUnitID:(id)arg1;
@property(copy, nonatomic) NSString *CSSWidth; // @synthesize CSSWidth=_CSSWidth;
@property(copy, nonatomic) NSString *adBorderCSSSelections; // @synthesize adBorderCSSSelections=_adBorderCSSSelections;
@property(copy, nonatomic) NSString *adBorderColor; // @synthesize adBorderColor=_adBorderColor;
@property(nonatomic) long long adPage; // @synthesize adPage=_adPage;
@property(copy, nonatomic) NSString *adSeparatorColor; // @synthesize adSeparatorColor=_adSeparatorColor;
@property(nonatomic) _Bool adTestEnabled; // @synthesize adTestEnabled=_adTestEnabled;
@property(nonatomic) double adjustableLineHeight; // @synthesize adjustableLineHeight=_adjustableLineHeight;
@property(nonatomic) double annotationFontSize; // @synthesize annotationFontSize=_annotationFontSize;
@property(copy, nonatomic) NSString *annotationTextColor; // @synthesize annotationTextColor=_annotationTextColor;
@property(nonatomic) double attributionBottomSpacing; // @synthesize attributionBottomSpacing=_attributionBottomSpacing;
@property(copy, nonatomic) NSString *attributionFontFamily; // @synthesize attributionFontFamily=_attributionFontFamily;
@property(nonatomic) double attributionFontSize; // @synthesize attributionFontSize=_attributionFontSize;
@property(copy, nonatomic) NSString *attributionTextColor; // @synthesize attributionTextColor=_attributionTextColor;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool boldTitleEnabled; // @synthesize boldTitleEnabled=_boldTitleEnabled;
@property(copy, nonatomic) NSString *borderCSSSelections; // @synthesize borderCSSSelections=_borderCSSSelections;
@property(copy, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool clickToCallExtensionEnabled; // @synthesize clickToCallExtensionEnabled=_clickToCallExtensionEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double descriptionFontSize; // @synthesize descriptionFontSize=_descriptionFontSize;
@property(nonatomic) _Bool detailedAttributionExtensionEnabled; // @synthesize detailedAttributionExtensionEnabled=_detailedAttributionExtensionEnabled;
@property(copy, nonatomic) NSString *domainLinkColor; // @synthesize domainLinkColor=_domainLinkColor;
@property(nonatomic) double domainLinkFontSize; // @synthesize domainLinkFontSize=_domainLinkFontSize;
- (id)dynamicHeightAdURLFragmentsWithAdUnitID:(id)arg1;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(copy, nonatomic) NSString *hostLanguage; // @synthesize hostLanguage=_hostLanguage;
- (id)init;
@property(nonatomic) _Bool locationExtensionEnabled; // @synthesize locationExtensionEnabled=_locationExtensionEnabled;
@property(nonatomic) double locationExtensionFontSize; // @synthesize locationExtensionFontSize=_locationExtensionFontSize;
@property(copy, nonatomic) NSString *locationExtensionTextColor; // @synthesize locationExtensionTextColor=_locationExtensionTextColor;
@property(nonatomic) _Bool longerHeadlinesExtensionEnabled; // @synthesize longerHeadlinesExtensionEnabled=_longerHeadlinesExtensionEnabled;
@property(nonatomic) long long numberOfAds; // @synthesize numberOfAds=_numberOfAds;
- (void)parameterHelperSetValue:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool plusOnesExtensionEnabled; // @synthesize plusOnesExtensionEnabled=_plusOnesExtensionEnabled;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) _Bool sellerRatingsExtensionEnabled; // @synthesize sellerRatingsExtensionEnabled=_sellerRatingsExtensionEnabled;
- (void)setAdvancedOptionValue:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool siteLinksExtensionEnabled; // @synthesize siteLinksExtensionEnabled=_siteLinksExtensionEnabled;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(copy, nonatomic) NSString *titleLinkColor; // @synthesize titleLinkColor=_titleLinkColor;
@property(nonatomic) _Bool titleUnderlineHidden; // @synthesize titleUnderlineHidden=_titleUnderlineHidden;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;

@end

