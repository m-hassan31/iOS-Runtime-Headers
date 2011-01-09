/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISURLBagContext, SSAuthenticationContext, NSString, NSNumber, NSURL;



@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    ISURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    NSURL *_redirectURL;
}

@property(retain) NSURL *redirectURL;
@property(retain) id output;
@property(retain) NSString *contentType;
@property long long contentLength;
@property(retain) ISURLBagContext *bagContext;
@property(retain) NSNumber *authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext;

+ (id)provider;

- (void)resetStream;
- (id)authenticatedAccountDSID;
- (id)redirectURL;
- (void)setOutput:(id)arg1;
- (void)configureFromProvider:(id)arg1;
- (id)output;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)authenticationContext;
- (void)setAuthenticationContext:(id)arg1;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)contentLength;
- (id)bagContext;
- (void)setBagContext:(id)arg1;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (BOOL)isStream;
- (long long)streamedBytes;
- (void)closeStream;
- (void)setContentLength:(long long)arg1;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (void)setRedirectURL:(id)arg1;

@end
