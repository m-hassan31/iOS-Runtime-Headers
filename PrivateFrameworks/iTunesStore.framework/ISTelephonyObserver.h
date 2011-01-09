/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSRecursiveLock;



@interface ISTelephonyObserver : NSObject <ISSingleton>
{
    struct __CTServerConnection { } *_connection;
    struct __CFMachPort { } *_connectionPort;
    struct __CFRunLoopSource { } *_connectionRunLoopSource;
    NSString *_dataStatusIndicator;
    NSRecursiveLock *_lock;
    NSString *_operatorName;
    struct __CFRunLoop { } *_runLoop;
}

@property(readonly) NSString *dataStatusIndicator;
@property(readonly) NSString *operatorName;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (BOOL)beginObservingOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_registerForNotifications;
- (id)init;
- (void)dealloc;
- (BOOL)_establishServerConnection;
- (void)_invalidateServerConnection;
- (void)_handleMessage:(void*)arg1 withSize:(long)arg2;
- (void)_handleNotificationWithName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2;
- (void)_handleServerInvalidated;
- (id)operatorName;
- (id)dataStatusIndicator;

@end
