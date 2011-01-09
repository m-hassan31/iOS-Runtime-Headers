/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLDownloadInternal;



@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender>
{
    NSURLDownloadInternal *_internal;
}

+ (id)_downloadWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
+ (id)_downloadWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg1;
+ (BOOL)_isEncodingMIMETypeResumable:(id)arg1;

- (id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3;
- (id)_initWithResumeInformation:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)initWithResumeData:(id)arg1 delegate:(id)arg2 path:(id)arg3;
- (id)_resumeInformation;
- (id)resumeData;
- (void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2;
- (void)_setDeletesFileAfterFailure:(BOOL)arg1;
- (BOOL)_deletesFileAfterFailure;
- (void)setDeletesFileUponFailure:(BOOL)arg1;
- (BOOL)deletesFileUponFailure;
- (id)_directoryPath;
- (void)_setDelegate:(id)arg1;
- (void)_setDirectoryPath:(id)arg1;
- (void)_setOriginatingURL:(id)arg1;
- (id)_originatingURL;
- (BOOL)_downloadActive;
- (void)sendDidStart:(struct _CFURLDownload { }*)arg1;
- (unsigned char)sendDownloadShouldUseCredentialStorage;
- (void)sendWillResumeWithResponse:(struct _CFURLResponse { }*)arg1 startingByte:(unsigned long long)arg2;
- (void)sendDidReceiveData:(long)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)sendShouldDecodeDataOfMIMEType:(struct __CFString { }*)arg1;
     /* Encoded args for previous method: B12@0:4^{__CFString=}8 */

- (void)sendDecideDestinationWithSuggestedObjectName:(struct __CFString { }*)arg1;
- (void)sendDidCreateDestination:(struct __CFURL { }*)arg1;
- (void)sendDidFinish;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)cleanupChallenges;
- (void)releaseDelegate;
- (struct _CFURLRequest { }*)sendWillSendRequest:(struct _CFURLRequest { }*)arg1 redirectResponse:(struct _CFURLResponse { }*)arg2;
- (void)sendDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (void)sendDidFail:(struct __CFError { }*)arg1;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (id)_delegate;
- (id)url;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (id)request;
- (void)cancel;
- (id)init;
- (void)dealloc;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;

@end
