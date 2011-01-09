/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;



@interface AAAuthenticateRequest : AARequest 
{
    NSString *_username;
    NSString *_password;
}

@property(copy) NSString *password;
@property(copy) NSString *username;

+ (Class)responseClass;

- (id)username;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)password;
- (void)dealloc;

@end
