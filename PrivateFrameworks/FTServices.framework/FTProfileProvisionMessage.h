/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSDictionary;



@interface FTProfileProvisionMessage : FTProfileMessage 
{
    NSString *_deviceID;
    NSData *_pushToken;
    NSArray *_emailAddresses;
    NSString *_responseSignature;
    NSString *_responseUserID;
    NSDictionary *_responseAliasInfo;
}

@property(copy) NSDictionary *responseAliasInfo;
@property(copy) NSString *responseUserID;
@property(copy) NSString *responseSignature;
@property(copy) NSArray *emailAddresses;
@property(copy) NSData *pushToken;
@property(copy) NSString *deviceID;


- (id)messageBody;
- (id)bagKey;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (id)deviceID;
- (void)dealloc;
- (id)pushToken;
- (void)setPushToken:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (id)responseAliasInfo;
- (void)setResponseAliasInfo:(id)arg1;
- (id)responseUserID;
- (void)setResponseUserID:(id)arg1;
- (id)responseSignature;
- (void)setResponseSignature:(id)arg1;
- (id)requiredKeys;
- (void)handleResponseDictionary:(id)arg1;

@end
