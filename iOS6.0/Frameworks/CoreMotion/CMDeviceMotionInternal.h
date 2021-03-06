/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying>
{
    CDStruct_31142d93 fGravity;
    CDStruct_31142d93 fUserAcceleration;
    CDStruct_31142d93 fRotationRate;
    CMAttitude *fAttitude;
    CDStruct_31142d93 fMagneticField;
    int fMagneticFieldCalibrationLevel;
    _Bool fDoingYawCorrection;
    _Bool fDoingBiasEstimation;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDeviceMotion:(CDStruct_7fb6ae47)arg1;
- (void)setDeviceMotion:(CDStruct_7fb6ae47)arg1;

@end

