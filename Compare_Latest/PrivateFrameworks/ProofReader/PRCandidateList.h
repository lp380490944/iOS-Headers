//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PRCandidateList : NSObject
{
    NSMutableArray *_candidates;
    unsigned int _maxCount;
}

- (BOOL)isFull;
- (unsigned int)maxCount;
- (unsigned int)count;
- (id)candidateStrings;
- (id)candidates;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 transform:(unsigned int)arg3 errorType:(unsigned int)arg4;
- (void)addCandidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 errorType:(unsigned int)arg3;
- (void)addCandidateWithString:(id)arg1 errorType:(unsigned int)arg2;
- (void)addCandidate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMaxCount:(unsigned int)arg1;

@end
