//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDFriendlyObstruction, NSMutableSet;

@interface GADOMIDObstructionInfo : NSObject
{
    GADOMIDFriendlyObstruction *_friendlyObstruction;
    NSMutableSet *_sessionIds;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GADOMIDFriendlyObstruction *friendlyObstruction; // @synthesize friendlyObstruction=_friendlyObstruction;
- (id)initWithFriendlyObstruction:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *sessionIds; // @synthesize sessionIds=_sessionIds;

@end

