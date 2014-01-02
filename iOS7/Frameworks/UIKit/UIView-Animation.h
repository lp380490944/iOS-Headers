/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIView (Animation)
+ (double)_durationForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 withBaseDuration:(double)arg3;
+ (double)_durationForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
+ (int)_degreesToRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
+ (void)_setAnimationFilterValue:(float)arg1;
+ (void)_setAnimationFilter:(int)arg1 forView:(id)arg2;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)setAnimationWillStartSelector:(SEL)arg1;
+ (void)setAnimationTransition:(long long)arg1 forView:(id)arg2 cache:(_Bool)arg3;
+ (void)setAnimationRoundsToInteger:(_Bool)arg1;
+ (void)setAnimationFromCurrentState:(_Bool)arg1;
+ (void)setAnimationAutoreverses:(_Bool)arg1;
+ (void)setAnimationBeginsFromCurrentState:(_Bool)arg1;
+ (void)setAnimationRepeatAutoreverses:(_Bool)arg1;
+ (void)setAnimationRepeatCount:(float)arg1;
+ (void)setAnimationCurve:(long long)arg1;
+ (void)setAnimationStartTime:(double)arg1;
+ (void)setAnimationStartDate:(id)arg1;
+ (void)setAnimationFrameInterval:(double)arg1;
+ (void)setAnimationDelay:(double)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)_performWithoutAnimation:(id)arg1;
+ (void)performWithoutAnimation:(id)arg1;
+ (_Bool)areAnimationsEnabled;
+ (void)setAnimationsEnabled:(_Bool)arg1;
+ (void)_inheritAnimationParameters;
+ (id)_alongsideAnimations;
+ (void)_setAlongsideAnimations:(id)arg1;
+ (void)_finalizeStoppedAnimationWithUUID:(id)arg1 reverseAnimation:(_Bool)arg2;
+ (void)_stopAnimationWithUUID:(id)arg1;
+ (void)_reverseAnimationWithUUID:(id)arg1 duration:(double)arg2 curve:(long long)arg3;
+ (void)_completeAnimationWithUUID:(id)arg1 duration:(double)arg2 curve:(long long)arg3 reverse:(_Bool)arg4;
+ (_Bool)_addCompletion:(id)arg1;
+ (void)_disableAnimationTracking:(id)arg1;
+ (void)_disableAnimationTracking:(id)arg1 clearTrackedAnimations:(_Bool)arg2;
+ (id)_performWithAnimationTracking:(id)arg1;
+ (void)_finishAnimationTracking;
+ (id)_startAnimationTracking;
+ (id)_enableAnimationTracking;
+ (_Bool)_isAnimationTracking;
+ (void)enableAnimation;
+ (void)disableAnimation;
+ (void)setAnimationPosition:(struct CGPoint)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (long long)_currentAnimationCurve;
+ (double)_currentAnimationDuration;
+ (void)_setAnimationAttributes:(id)arg1 skipDelegateAssignment:(_Bool)arg2;
+ (void)_setAnimationAttributes:(id)arg1;
+ (_Bool)_isInAnimationBlock;
+ (void)endAnimations;
+ (void)commitAnimations;
+ (void)beginAnimations:(id)arg1 context:(void *)arg2;
+ (void)beginAnimations:(id)arg1;
+ (void)_animateWithAttributes:(id)arg1 animations:(id)arg2 completion:(void)arg3;
+ (id)_currentAnimationAttributes;
+ (id)_defaultUIViewActionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
+ (id)_defaultUIViewActionForLayer:(id)arg1 forKey:(id)arg2;
- (void)_enumerateDescendentViews:(id)arg1;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)_clearAnimationFilters;
- (_Bool)_isInTransitionBlock;
- (id)_basicAnimationWithKeyPath:(id)arg1;
@end
