//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WNYD_BookIndexDataModel, WNYD_BookStoreBookLists, WNYD_BookStoreCategory, WNYD_BookStoreNewBook;

@interface WNYD_BookStoreDataModel : NSObject
{
    WNYD_BookStoreCategory *_category_1;
    WNYD_BookStoreCategory *_category_2;
    WNYD_BookStoreBookLists *_book_lists;
    NSArray *_rank;
    WNYD_BookStoreNewBook *_theNew_book;
    NSArray *_banner;
    WNYD_BookIndexDataModel *_recommend;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) WNYD_BookStoreBookLists *book_lists; // @synthesize book_lists=_book_lists;
@property(retain, nonatomic) WNYD_BookStoreCategory *category_1; // @synthesize category_1=_category_1;
@property(retain, nonatomic) WNYD_BookStoreCategory *category_2; // @synthesize category_2=_category_2;
@property(copy, nonatomic) NSArray *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) WNYD_BookIndexDataModel *recommend; // @synthesize recommend=_recommend;
@property(retain, nonatomic) WNYD_BookStoreNewBook *theNew_book; // @synthesize theNew_book=_theNew_book;

@end
