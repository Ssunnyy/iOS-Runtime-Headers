/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {
    SCRCMathExpression *_divisor;
}

@property(retain) SCRCMathExpression * divisor;

- (void)dealloc;
- (id)divisor;
- (id)initWithDictionary:(id)arg1;
- (void)setDivisor:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;

@end