/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAAnswerSocialStructuredAnswer : AceObject <SAAnswerStructuredAnswer> {
}

@property(copy) NSString * category;
@property(copy) NSArray * socialQuestions;

+ (id)socialStructuredAnswer;
+ (id)socialStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCategory:(id)arg1;
- (void)setSocialQuestions:(id)arg1;
- (id)socialQuestions;

@end