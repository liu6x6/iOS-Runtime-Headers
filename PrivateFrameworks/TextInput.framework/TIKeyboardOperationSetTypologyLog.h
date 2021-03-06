/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSDictionary, NSString;

@interface TIKeyboardOperationSetTypologyLog : TIKeyboardOperation {
    NSDictionary *_logDictionary;
    NSString *_typedString;
}

@property(readonly) NSDictionary * logDictionary;
@property(readonly) NSString * typedString;

+ (id)operationWithTypedString:(id)arg1 logDictionary:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypedString:(id)arg1 logDictionary:(id)arg2;
- (id)logDictionary;
- (void)main;
- (id)propertiesForDescription;
- (id)typedString;

@end
