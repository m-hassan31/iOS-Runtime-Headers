/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSError, NSString, NSRecursiveLock, NSTimer;



@interface VVService : NSObject 
{
    NSRecursiveLock *_lock;
    NSUInteger _capabilities;
    NSInteger _mailboxUsage;
    double _trashCompactionAge;
    NSUInteger _unreadCount;
    NSUInteger _trashedCount;
    NSError *_passwordError;
    NSError *_activationError;
    NSString *_password;
    NSString *_passwordMailboxName;
    struct __CFArray { } *_retryIntervals;
    NSTimer *_retryTimer;
    NSTimer *_trashCompactionTimer;
    NSTimer *_notificationFallbackTimer;
    struct __CFDate { } *_notificationFallbackWakeDate;
    struct __CFDate { } *_nextRetryWakeDate;
    struct __CFDate { } *_nextTrashCompactionWakeDate;
    NSInteger _retryIntervalIndex;
    NSUInteger _pmNotifier;
    struct IONotificationPort { } *_pmNotifierPort;
    NSUInteger _pmRootPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    id _carrierParameters;
    Class _notificationInterpreter;
    struct { 
        unsigned int offline : 1; 
        unsigned int subscribed : 1; 
        unsigned int initialSetupRequired : 1; 
        unsigned int fakeInitialSetup : 1; 
        unsigned int launchedWithFakeInitialSetup : 1; 
        unsigned int mwiState : 1; 
        unsigned int notificationFallbackEnabled : 1; 
        unsigned int capabilitiesLoaded : 1; 
    } _serviceFlags;
}

+ (void)setInsomniaEnabled:(BOOL)arg1;
+ (void)initialize;
+ (void)_handleSIMChange;
+ (id)sharedService;
+ (BOOL)sharedServiceIsSubscribed;
+ (void)_setInsomniaState:(BOOL)arg1;
+ (void)_suppressInsomniaState;
+ (void)_resetInsomniaState;

- (BOOL)shouldTrashCompactRecord:(void*)arg1;
- (void)setMailboxUsage:(NSInteger)arg1;
- (void)clearRemoteUIDsForDetachedMessages;
- (void)scheduleAutomatedTrashCompaction;
- (void)resetDelayedSynchronizationAttemptCount;
- (void)cancelDelayedSynchronize;
- (void)updateCountsForChangedFlags:(NSInteger)arg1 currentRecordFlags:(NSInteger)arg2;
- (void)resetCounts;
- (void)scheduleDelayedSynchronize;
- (void)cancelAutomatedTrashCompaction;
- (void)cancelPasswordRequest;
- (void)kill;
- (void)setSubscribed:(BOOL)arg1;
- (void)removeAllNonDetachedRecords;
- (void)setOnline:(BOOL)arg1;
- (BOOL)mailboxRequiresSetup;
- (void)setMailboxRequiresSetup:(BOOL)arg1;
- (BOOL)isInSync;
- (void)handleNotification:(id)arg1 isMWI:(BOOL)arg2;
- (NSInteger)maximumGreetingDuration;
- (NSInteger)maximumRecordedNameDuration;
- (NSInteger)minimumPasswordLength;
- (NSInteger)maximumPasswordLength;
- (NSInteger)mailboxGreetingType;
- (BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
- (BOOL)taskOfTypeExists:(NSInteger)arg1;
- (BOOL)headerChangesPending;
- (BOOL)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(BOOL*)arg2;
- (void)progressiveDataLengthsForRecord:(void*)arg1 expected:(NSUInteger*)arg2 current:(NSUInteger*)arg3;
- (BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)arg1;
- (void)retrieveDataForRecord:(void*)arg1;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (void)retrieveGreeting;
- (void)setGreetingType:(NSInteger)arg1 withData:(id)arg2 duration:(NSUInteger)arg3;
- (void)moveRecordToTrash:(void*)arg1;
- (void)moveRecordFromTrash:(void*)arg1;
- (void)synchronize:(BOOL)arg1;
- (void)displayPasswordRequestIfNecessary;
- (void)handlePasswordRequestCancellation;
- (void)removeAllRecords;
- (NSUInteger)capabilities;
- (id)mailboxName;
- (void)setUnreadCount:(NSUInteger)arg1;
- (void)setPassword:(id)arg1;
- (struct __CFString { }*)connectionServiceType;
- (NSUInteger)unreadCount;
- (BOOL)isSubscribed;
- (void)reportError:(id)arg1;
- (id)password;
- (id)init;
- (void)dealloc;
- (double)trashCompactionAge;
- (BOOL)doTrashCompaction;
- (BOOL)sharedSubscriptionRequiresSetup;
- (NSInteger)mailboxUsage;
- (NSUInteger)trashedCount;
- (void)setTrashedCount:(NSUInteger)arg1;
- (void)updateLoggingSettings;
- (BOOL)isOnline;
- (void)_setOnline:(BOOL)arg1 fallbackMode:(BOOL)arg2;
- (BOOL)_isOfflineDueToRoamingWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (BOOL)isOfflineDueToRoaming;
- (void)_updateOnlineStatusWithDataStatusDict:(struct __CFDictionary { }*)arg1;
- (void)handleDataContextDeactivated;
- (void)_handleCallStatusChange:(struct __CFDictionary { }*)arg1;
- (void)_setActivationError:(id)arg1;
- (void)_contextActivationFailed:(id)arg1;
- (void)_contextActivationSucceeded:(id)arg1;
- (id)activationError;
- (void)clearActivationError;
- (void)cancelNotificationFallback;
- (void)_deliverFallbackNotification;
- (void)_enterFallbackMode:(id)arg1;
- (void)_scheduleFallbackTimerIfNecessary;
- (BOOL)isMessageWaiting;
- (void)setMessageWaiting:(BOOL)arg1;
- (void)_reactToIndicator;
- (void)_cancelIndicatorAction;
- (Class)notificationInterpreterClass;
- (BOOL)respectsMWINotifications;
- (void)handleIndicatorNotification:(struct __CFDictionary { }*)arg1;
- (id)passwordIgnoringSubscription:(BOOL)arg1;
- (void)setProvisionalPassword:(id)arg1;
- (id)provisionalPassword;
- (void)handlePasswordNotificationResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (BOOL)passwordChangeRequiresEnteringOldPassword;
- (id)carrierParameterValueForKey:(id)arg1;
- (BOOL)doesClientManageTrashCompaction;
- (BOOL)greetingAvailable;
- (void)_registerForPowerEventsIfNecessary;
- (void)_deregisterForPowerEventsIfNecessary;
- (void)_attemptDelayedSynchronize;
- (void)_scheduleAutomatedTrashCompaction;
- (void)_cancelAutomatedTrashCompaction;
- (void)_attemptScheduledTrashCompaction;
- (struct __CFArray { }*)_retryIntervals;

@end
