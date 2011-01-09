/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary, NSString, NSArray;



@interface FTRegistrationMessage : FTMessage 
{
    NSArray *_supportedProtocols;
    NSDictionary *_aliasInfo;
    NSString *_responseSignature;
    NSString *_responseUserID;
    NSDictionary *_responseAliasInfo;
}

@property(copy) NSDictionary *responseAliasInfo;
@property(copy) NSString *responseUserID;
@property(copy) NSString *responseSignature;
@property(copy) NSDictionary *aliasInfo;
@property(copy) NSArray *supportedProtocols;


- (id)messageBody;
- (id)bagKey;
- (void)dealloc;
- (id)responseAliasInfo;
- (void)setResponseAliasInfo:(id)arg1;
- (id)responseUserID;
- (void)setResponseUserID:(id)arg1;
- (id)responseSignature;
- (void)setResponseSignature:(id)arg1;
- (id)aliasInfo;
- (void)setAliasInfo:(id)arg1;
- (id)supportedProtocols;
- (void)setSupportedProtocols:(id)arg1;
- (id)requiredKeys;
- (id)additionalMessageHeaders;
- (void)handleResponseDictionary:(id)arg1;

@end
