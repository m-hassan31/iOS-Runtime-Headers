/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURLRequest, NSURLConnection, NSDictionary;



@interface NSURLConnectionIPhone : NSObject 
{
    NSURLRequest *__request;
    id __delegate;
    BOOL __usesCacheFlag;
    long long __maxContentLength;
    BOOL __startImmediatelyFlag;
    NSDictionary *__connectionProperties;
    NSURLConnection *_connection;
}


- (void)start;
- (void)cancel;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (void)_clearIVars;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

@end
