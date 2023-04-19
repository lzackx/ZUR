//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBaseModel.h"

@class NSAttributedString, NSMutableArray, NSString, WNYD_ReaderSettings;

@interface WNYD_ChapterContentModel : YBaseModel
{
    _Bool _isLoad;
    _Bool _isLoadCache;
    _Bool _is_encrypt;
    _Bool _is_content;
    NSString *_chapter_id;
    unsigned long long _pageCount;
    NSMutableArray *_pageArr;
    NSString *_path;
    long long _num_words;
    NSString *_traditionalStr;
    NSAttributedString *_attributedString;
    WNYD_ReaderSettings *_settings;
}

+ (id)adjustParagraphFormat:(id)arg1;
+ (id)chapterModelWith:(id)arg1 link:(id)arg2 chapter_id:(id)arg3 crawl_book_id:(id)arg4 lists_id:(id)arg5 load:(_Bool)arg6 path:(id)arg7 is_content:(_Bool)arg8;
+ (id)modelPropertyWhitelist;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) NSString *chapter_id; // @synthesize chapter_id=_chapter_id;
- (struct _NSRange)getRangeWith:(unsigned long long)arg1;
- (id)getStringWith:(unsigned long long)arg1;
@property(nonatomic) _Bool isLoad; // @synthesize isLoad=_isLoad;
@property(nonatomic) _Bool isLoadCache; // @synthesize isLoadCache=_isLoadCache;
@property(nonatomic) _Bool is_content; // @synthesize is_content=_is_content;
@property(nonatomic) _Bool is_encrypt; // @synthesize is_encrypt=_is_encrypt;
@property(nonatomic) long long num_words; // @synthesize num_words=_num_words;
@property(retain, nonatomic) NSMutableArray *pageArr; // @synthesize pageArr=_pageArr;
@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
- (void)pagingWithBounds:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)releaseChapter;
@property(retain, nonatomic) WNYD_ReaderSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *traditionalStr; // @synthesize traditionalStr=_traditionalStr;
- (void)updateContentPaging;

@end

