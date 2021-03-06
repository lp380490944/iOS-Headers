//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIControlCenterButton.h"

#import "SBUIControlCenterButtonDelegate.h"

@class NSObject<OS_dispatch_source>;

@interface MPUTransportControlCenterButton : SBUIControlCenterButton <SBUIControlCenterButtonDelegate>
{
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPress;
    double _minimumPressDuration;
}

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)_clearLongPressTimer;
- (void)_longPressTimerAction;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

