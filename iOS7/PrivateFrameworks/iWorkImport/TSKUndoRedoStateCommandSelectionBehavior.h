/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKCommandSelectionBehavior.h>

@class TSPObject<TSKPersistentUndoRedoState>;

// Not exported
@interface TSKUndoRedoStateCommandSelectionBehavior : TSKCommandSelectionBehavior
{
    TSPObject<TSKPersistentUndoRedoState> *mPersistentUndoRedoState;
}

- (_Bool)modifiesUndoRedoState;
- (void)p_swapUndoRedoStateWithDocument;
- (void)registerSelectionChangesForRedo;
- (void)registerSelectionChangesForUndo;
- (void)registerSelectionChangesForCommit;
@property(retain, nonatomic, setter=p_setPersistentUndoRedoState:) id <TSKPersistentUndoRedoState> p_persistentUndoRedoState;
@property(readonly, nonatomic) id <TSKUndoRedoState> undoRedoState;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 initialUndoRedoState:(id)arg2;

@end

