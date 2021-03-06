/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAAnimation.h>

@class CALayer, NSArray, NSString;

@interface CAMatchMoveAnimation : CAAnimation
{
}

+ (id)defaultValueForKey:(id)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
@property(retain) CALayer *sourceLayer;
@property(copy) NSArray *sourcePoints;
@property(copy) NSString *keyPath;
@property BOOL targetsSuperlayer;
@property BOOL appliesX;
@property BOOL appliesY;
@property BOOL appliesScale;
@property BOOL appliesRotation;
@property(getter=isAdditive) BOOL additive;

@end

