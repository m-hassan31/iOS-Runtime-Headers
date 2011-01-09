/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;



@interface MCSubCalAccountPayload : MCPayload 
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    BOOL _useSSL;
    NSString *_accountPersistentUUID;
}

@property(copy) NSString *accountPersistentUUID;
@property(readonly) BOOL useSSL;
@property(readonly) NSString *password;
@property(readonly) NSString *username;
@property(readonly) NSString *hostname;
@property(readonly) NSString *accountDescription;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (id)accountPersistentUUID;
- (id)accountDescription;
- (id)username;
- (BOOL)useSSL;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)password;
- (id)title;
- (id)description;
- (void)dealloc;
- (id)hostname;

@end
