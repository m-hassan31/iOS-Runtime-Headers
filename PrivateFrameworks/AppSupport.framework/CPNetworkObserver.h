/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSMutableDictionary, NSLock;



@interface CPNetworkObserver : NSObject 
{
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    NSUInteger _networkReachability;
    struct __SCNetworkReachability { } *_networkReach;
    struct __CFDictionary { } *_networkObservers;
    struct __SCPreferences { } *_wifiPreferences;
    struct __CFDictionary { } *_wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}

+ (id)sharedNetworkObserver;

- (BOOL)isNetworkReachable;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(NSUInteger)arg1;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_wifiObserversInitialize;
- (void)_wifiCallBack:(NSUInteger)arg1;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)removeWiFiObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)isWiFiEnabled;

@end
