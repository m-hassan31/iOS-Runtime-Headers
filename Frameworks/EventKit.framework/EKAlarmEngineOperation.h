/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSThread, PCPersistentTimer, NSMutableSet, EKAlarmEngine, NSLock;



@interface EKAlarmEngineOperation : NSOperation 
{

  /* Error parsing encoded ivar type info: ^{CalDatabase={__CFRuntimeBase="_cfisa"I"_cfinfo"[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}BBII^{__CFString}ii^{__CFString}} */
    struct CalDatabase { struct __CFRuntimeBase { 
            NSUInteger _cfisa; 
            unsigned char _cfinfo[4]; 
        } x1; NSInteger x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; void*x8; NSUInteger x9; NSUInteger x10; struct __CFString {} *x11; NSInteger x12; NSInteger x13; struct __CFString {} *x14; } *_database;

    EKAlarmEngine *_engine;
    NSThread *_thread;
    NSLock *_lock;
    PCPersistentTimer *_timer;
    NSMutableSet *_notifiedSet;
    double _nextFireDate;
    double _lastCheckpoint;
}


- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { NSUInteger x_1_1_1; unsigned char x_1_1_2[4]; } x1; NSInteger x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct _opaque_pthread_mutex_t { long x_6_1_1; BOOL x_6_1_2[40]; } x6; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x7; void*x8; NSUInteger x9; NSUInteger x10; struct __CFString {} *x11; NSInteger x12; NSInteger x13; struct __CFString {} *x14; }*)arg1 engine:(id)arg2;
     /* Encoded args for previous method: @16@0:4^{CalDatabase={__CFRuntimeBase=I[4C]}i^{CPRecordStore}^{CalEventOccurrenceCache}^{__CFDictionary}{_opaque_pthread_mutex_t=l[40c]}BBII^{__CFString}ii^{__CFString}}8@12 */

- (void)handleChangeNotification;
- (void)rescheduleOrFire;
- (void)_stopRunLoop;
- (void)_rescheduleOrFire;
- (void)_timerFired:(id)arg1;
- (void)_handleChangeNotification;
- (void)_saveCheckpoint;
- (void)_notifyAlarmsFired:(id)arg1;
- (void)_rescheduleTimer;
- (void)_startCountdown;
- (void)main;
- (void)cancel;
- (void)dealloc;

@end
