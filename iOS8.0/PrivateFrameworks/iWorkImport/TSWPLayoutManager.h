//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSWPStorageObserver.h"

@class TSWPCTTypesetterCache, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>
{
    TSWPStorage *_storage;
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    int _delta;
    struct _NSRange _dirtyRange;
    TSWPCTTypesetterCache *_typesetterCache;
    struct TSWPTopicNumberHints _cachedTopicNumbers;
    id <TSWPLayoutOwner> _owner;
}

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned int)arg3 firstColumnIndex:(unsigned int)arg4 precedingHeight:(float)arg5 height:(float)arg6 alreadyHasMargins:(BOOL)arg7 styleProvider:(id)arg8 vertical:(BOOL)arg9;
@property(readonly, nonatomic) id <TSWPLayoutOwner> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) struct _NSRange dirtyRange; // @synthesize dirtyRange=_dirtyRange;
@property(readonly, retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
@property(readonly, retain, nonatomic) TSWPCTTypesetterCache *typesetterCache;
- (void)destroyLayoutState:(void *)arg1;
- (void)inflateTarget:(id)arg1 fromHints:(const vector_b76bc591 *)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints *)arg5;
- (void)deflateTarget:(id)arg1 intoHints:(vector_b76bc591 *)arg2 childHints:(id [2])arg3 anchoredAttachmentPositions:(id *)arg4 topicNumbers:(struct TSWPTopicNumberHints *)arg5 layoutState:(void *)arg6;
- (void *)layoutStateForLayoutAfterHint:(const CDStruct_7c2dc7ff *)arg1 childHint:(id)arg2 topicNumbers:(const struct TSWPTopicNumberHints *)arg3 textIsVertical:(BOOL)arg4;
- (void *)layoutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(char *)arg3;
- (BOOL)needsLayoutInColumn:(id)arg1;
- (void)willRemoveAttachmentLayout:(id)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (void)clearTypesetterCache;
- (void)clearOwner;
- (id)styleProvider;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;

@end

