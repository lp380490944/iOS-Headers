//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSWPReplaceAction.h"

@class NSString, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPTextReplacement : NSObject <TSWPReplaceAction>
{
    TSWPSelection *_selection;
    NSString *_string;
}

- (struct _NSRange)insertedRange;
- (int)delta;
- (unsigned int)targetCharIndex;
- (void)performWithStorage:(id)arg1 delta:(int)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3 replaceBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithSelection:(id)arg1 string:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

