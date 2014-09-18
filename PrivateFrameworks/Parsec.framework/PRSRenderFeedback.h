/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSArray, NSString;

@interface PRSRenderFeedback : PRSFeedback {
    NSString *_fbq;
    NSArray *_hidden;
    NSArray *_results;
    long long _trigger_timestamp;
}

@property(retain) NSString * fbq;
@property(retain) NSArray * hidden;
@property(retain) NSArray * results;
@property long long trigger_timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fbq;
- (id)hidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)plist;
- (id)results;
- (void)setFbq:(id)arg1;
- (void)setHidden:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setTrigger_timestamp:(long long)arg1;
- (long long)trigger_timestamp;
- (id)type;
- (void)validate;

@end