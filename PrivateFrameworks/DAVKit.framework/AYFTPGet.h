/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSURL, NSString, NSMutableData;



@interface AYFTPGet : AYOperation 
{
    NSURL *_url;
    struct __CFReadStream { } *_readStream;
    struct { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
    NSString *_username;
    NSString *_password;
    long long _ressourceSize;
    long long _readSize;
    NSMutableData *_readData;
}

+ (id)getRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;

- (id)initGetRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;
- (void)resetOperation;
- (void)_readStreamEvent:(unsigned long)arg1;
- (void)endOperationWithError:(id)arg1;
- (BOOL)isRunLoopBased;
- (long long)operationTotal;
- (void)dispatch;
- (long long)operationProgress;
- (void)finalize;
- (id)data;
- (void)dealloc;

@end
