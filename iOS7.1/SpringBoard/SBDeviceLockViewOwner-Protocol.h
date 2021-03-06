//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SBDeviceLockViewOwner <NSObject>

@optional
- (void)animateToEmergencyCall;
- (_Bool)shouldUseTransparentStatusBar;
- (_Bool)isDisplayingErrorStatus;
- (void)deviceUnlockFailed;
- (void)deviceUnlockSucceeded;
- (void)setShowingDeviceLock:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowingDeviceLock:(_Bool)arg1;
@end

