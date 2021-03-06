//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMTimelapseDiskUtilities : NSObject
{
}

+ (BOOL)hasPendingWork;
+ (BOOL)removeDummyFileForTimelapseUUID:(id)arg1;
+ (BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(int)arg2 height:(int)arg3;
+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)dummyFileName;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(int)arg2 stopTime:(id)arg3;
+ (BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)timelapseUUIDsOnDisk;
+ (int)frameIndexFromImageFileName:(id)arg1;
+ (id)fileNameForImageFrameIndex:(int)arg1;
+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1;
+ (id)timelapseDirectoryPath;
+ (id)secondaryStateFileName;
+ (id)stateFileName;

@end

