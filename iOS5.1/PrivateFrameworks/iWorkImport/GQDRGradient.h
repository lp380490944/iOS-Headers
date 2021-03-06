/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDNameMappable-Protocol.h"

@interface GQDRGradient : NSObject <GQDNameMappable>
{
    struct __CFArray *mStops;
    int mType;
    float mOpacity;
    float mAngle;
    struct CGPoint mStart;
    struct CGPoint mEnd;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (struct __CFArray *)stops;
- (int)type;
- (float)opacity;
- (float)angle;
- (struct CGPoint)start;
- (struct CGPoint)end;

@end

