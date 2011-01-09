/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSData;



@interface FTProfileValidateEmailMessage : FTProfileMessage 
{
    NSString *_email;
    NSData *_pushToken;
    NSNumber *_onlyCheck;
}

@property(copy) NSNumber *onlyCheck;
@property(copy) NSData *pushToken;
@property(copy) NSString *emailAddress;


- (id)messageBody;
- (id)bagKey;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (void)dealloc;
- (id)onlyCheck;
- (void)setOnlyCheck:(id)arg1;
- (id)pushToken;
- (void)setPushToken:(id)arg1;
- (id)requiredKeys;

@end
