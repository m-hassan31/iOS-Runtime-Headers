/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;



@interface ISStoreServicesRequestOperation : ISOperation 
{
    SSRequest *_request;
}

@property(readonly) SSRequest *request;


- (void)stopRunLoop;
- (void)_beginObservingNotifications;
- (void)_endObservingNotifications;
- (id)request;
- (void)run;
- (void)cancel;
- (void)dealloc;
- (void)_requestStateChangedNotification:(id)arg1;
- (void)_delayedStartRequest;
- (void)_delayedStopRequest;
- (void)_timer:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
