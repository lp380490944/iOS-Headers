//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHFetchResult.h>

@class NSArray, NSOrderedSet, NSString;

@interface PHManualFetchResult : PHFetchResult
{
    NSArray *_objects;
    NSOrderedSet *_objectIDs;
    NSString *_identifier;
}

@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSOrderedSet *objectIDs; // @synthesize objectIDs=_objectIDs;
@property(readonly) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)description;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchUpdatedObjects;
- (BOOL)interestedInChange:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)objectIDAtIndex:(unsigned int)arg1;
- (id)fetchedObjectIDs;
- (id)containerIdentifier;
- (int)collectionFetchType;
- (id)fetchedObjects;
- (id)fetchRequest;
- (id)photoLibrary;
- (id)changeHandlingValue;
- (id)changeHandlingKey;
- (void)getMediaTypeCounts;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3;
- (id)initWithObjects:(id)arg1;

@end

