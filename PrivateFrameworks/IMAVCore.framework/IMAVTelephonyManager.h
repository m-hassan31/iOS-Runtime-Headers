/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class CTCallCenter;



@interface IMAVTelephonyManager : NSObject 
{
    CTCallCenter *_callCenter;
    struct __CTServerConnection { } *_ctServerConnection;
    struct __CTCall { } *_currentCallRef;
    struct __CFMachPort { } *_ctServerMachPort;
    struct __CFUUID { } *_ctToken;
}

@property(readonly) NSUInteger callState;

+ (id)numberToDialForNumber:(id)arg1 dialAssist:(BOOL*)arg2;
+ (id)sharedInstance;

- (NSUInteger)callState;
- (void)_handleCallEvent:(id)arg1;
- (void)_cleanupMachInfo;
- (BOOL)_setupCTServerConnection;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_registerCTRequestService;
- (BOOL)_unregisterCTRequestService;
- (BOOL)_disconnectCTServerConnection;
- (void)_dialRequested:(struct __CFDictionary { }*)arg1;
- (void)_answerCall:(struct __CTCall { }*)arg1;
- (void)_hangUpCall:(struct __CTCall { }*)arg1;
- (void)_handleCTServiceRequestName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2 contextInfo:(void*)arg3;
- (void)notifyCallConnectingForChat:(id)arg1;
- (void)_setCurrentCallStatus:(NSInteger)arg1;
- (void)notifyMissedCallForChat:(id)arg1;
- (void)startWatchingForCTRequests;
- (void)stopWatchingForCTRequests;
- (void)notifyCallConnectedForChat:(id)arg1;
- (void)notifyCallEndedForChat:(id)arg1;
- (void)notifyCallStartedForChat:(id)arg1;
- (void)updateCallState;
- (NSUInteger)retainCount;
- (id)init;
- (oneway void)release;
- (id)autorelease;
- (void)dealloc;

@end
