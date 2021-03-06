//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import "MPPProtobufferCoding.h"

@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    long long *_persistentIDs;
    BOOL _shouldContain;
    unsigned int _count;
}

+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2 shouldContain:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldContain; // @synthesize shouldContain=_shouldContain;
@property(readonly, nonatomic) const long long *persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

