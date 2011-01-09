/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPServerObjectProxy : NSObject 
{
    unsigned int _didPrepareForRemoteSelectorInvocation : 1;
    unsigned int _lastPrepareForRemoteSelectorInvocationTimedOut : 1;
    double _lastPrepareAttemptTime;
}

+ (id)_center;

- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double*)arg1;
- (void)_messagingCenterDied:(id)arg1;
- (void)_serverConnectionDied;
- (BOOL)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (BOOL)prepareForRemoteSelectorInvocation;
- (void)didPrepareForRemoteSelectorInvocation;
- (void)serverConnectionDied;

@end
