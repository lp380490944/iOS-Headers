/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterInputHelper, AVWeakReference;

@interface AVAssetWriterInputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    struct dispatch_queue_s *helperQueue;
    BOOL attachedToPixelBufferAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
}

@end
