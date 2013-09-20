/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class CAMediaTimingFunction;

@interface SBFAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    double _delay;
    double _duration;
    double _frameInterval;
    CAMediaTimingFunction *_timingFunction;
}

@property double delay;
@property double duration;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;

+ (void)animateWithFactory:(id)arg1 animations:(id)arg2 completion:(id)arg3;
+ (void)animateWithSettings:(id)arg1 animations:(id)arg2 completion:(id)arg3;
+ (void)animateWithSettings:(id)arg1 delay:(double)arg2 animations:(id)arg3 completion:(id)arg4;
+ (void)animateWithSettings:(id)arg1 delay:(double)arg2 options:(unsigned int)arg3 animations:(id)arg4 completion:(id)arg5;
+ (void)animateWithSettings:(id)arg1 options:(unsigned int)arg2 animations:(id)arg3 completion:(id)arg4;
+ (id)factoryWithAnimationAttributes:(id)arg1;
+ (id)factoryWithSettings:(id)arg1;

- (id)_animation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)animateWithDelay:(double)arg1 animations:(id)arg2 completion:(id)arg3;
- (void)animateWithDelay:(double)arg1 options:(unsigned int)arg2 animations:(id)arg3 completion:(id)arg4;
- (void)dealloc;
- (double)delay;
- (double)duration;
- (double)frameInterval;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setTimingFunctionFromSettings:(id)arg1;
- (id)timingFunction;

@end