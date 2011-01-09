/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIEvent, NSTimer, UIStatusBar, NSMutableSet, UIStatusBarWindow, <UIApplicationDelegate>;



@interface UIApplication : UIResponder <UIActionSheetDelegate>
{
    <UIApplicationDelegate> *_delegate;
    struct __CFDictionary { } *_touchMap;
    NSMutableSet *_exclusiveTouchWindows;
    UIEvent *_event;
    UIEvent *_touchesEvent;
    UIEvent *_motionEvent;
    UIEvent *_remoteControlEvent;
    NSInteger _remoteControlEventObservers;
    NSArray *_topLevelNibObjects;
    NSInteger _networkResourcesCurrentlyLoadingCount;
    NSTimer *_hideNetworkActivityIndicatorTimer;
    id _editAlertView;
    UIStatusBar *_statusBar;
    UIStatusBarWindow *_statusBarWindow;
    struct { 
        unsigned int isActive : 1; 
        unsigned int isSuspended : 1; 
        unsigned int isSuspendedEventsOnly : 1; 
        unsigned int isLaunchedSuspended : 1; 
        unsigned int calledNonSuspendedLaunchDelegate : 1; 
        unsigned int isHandlingURL : 1; 
        unsigned int isHandlingRemoteNotification : 1; 
        unsigned int isHandlingLocalNotification : 1; 
        unsigned int statusBarShowsProgress : 1; 
        unsigned int statusBarRequestedStyle : 4; 
        unsigned int statusBarHidden : 1; 
        unsigned int blockInteractionEvents : 4; 
        unsigned int receivesMemoryWarnings : 1; 
        unsigned int showingProgress : 1; 
        unsigned int receivesPowerMessages : 1; 
        unsigned int launchEventReceived : 1; 
        unsigned int isAnimatingSuspensionOrResumption : 1; 
        unsigned int isResuming : 1; 
        unsigned int isSuspendedUnderLock : 1; 
        unsigned int isRunningInTaskSwitcher : 1; 
        unsigned int shouldExitAfterSendSuspend : 1; 
        unsigned int shouldExitAfterTaskCompletion : 1; 
        unsigned int terminating : 1; 
        unsigned int isHandlingShortCutURL : 1; 
        unsigned int idleTimerDisabled : 1; 
        unsigned int deviceOrientation : 3; 
        unsigned int delegateShouldBeReleasedUponSet : 1; 
        unsigned int delegateHandleOpenURL : 1; 
        unsigned int delegateOpenURL : 1; 
        unsigned int delegateDidReceiveMemoryWarning : 1; 
        unsigned int delegateWillTerminate : 1; 
        unsigned int delegateSignificantTimeChange : 1; 
        unsigned int delegateWillChangeInterfaceOrientation : 1; 
        unsigned int delegateDidChangeInterfaceOrientation : 1; 
        unsigned int delegateWillChangeStatusBarFrame : 1; 
        unsigned int delegateDidChangeStatusBarFrame : 1; 
        unsigned int delegateDeviceAccelerated : 1; 
        unsigned int delegateDeviceChangedOrientation : 1; 
        unsigned int delegateDidBecomeActive : 1; 
        unsigned int delegateWillResignActive : 1; 
        unsigned int delegateDidEnterBackground : 1; 
        unsigned int delegateWillEnterForeground : 1; 
        unsigned int delegateWillSuspend : 1; 
        unsigned int delegateDidResume : 1; 
        unsigned int userDefaultsSyncDisabled : 1; 
        unsigned int headsetButtonClickCount : 4; 
        unsigned int isHeadsetButtonDown : 1; 
        unsigned int isFastForwardActive : 1; 
        unsigned int isRewindActive : 1; 
        unsigned int disableViewGroupOpacity : 1; 
        unsigned int disableViewEdgeAntialiasing : 1; 
        unsigned int shakeToEdit : 1; 
        unsigned int isClassic : 1; 
        unsigned int zoomInClassicMode : 1; 
        unsigned int ignoreHeadsetClicks : 1; 
        unsigned int touchRotationDisabled : 1; 
        unsigned int taskSuspendingUnsupported : 1; 
        unsigned int isUnitTests : 1; 
        unsigned int requiresHighResolution : 1; 
        unsigned int disableViewContentScaling : 1; 
        unsigned int singleUseLaunchOrientation : 3; 
        unsigned int defaultInterfaceOrientation : 3; 
    } _applicationFlags;
}

@property(getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;
@property <UIApplicationDelegate> *delegate;
@property(getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property(readonly) UIWindow *keyWindow;
@property(readonly) NSArray *windows;
@property(getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
@property NSInteger statusBarStyle;
@property(getter=isStatusBarHidden) BOOL statusBarHidden;
@property NSInteger statusBarOrientation;
@property(readonly) double statusBarOrientationAnimationDuration;
@property(readonly) CGRect statusBarFrame;
@property NSInteger applicationIconBadgeNumber;
@property BOOL applicationSupportsShakeToEdit;
@property(readonly) NSInteger applicationState;
@property(readonly) double backgroundTimeRemaining;
@property(getter=isProtectedDataAvailable,readonly) BOOL protectedDataAvailable;

+ (id)sharedApplication;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)shouldMakeUIForDefaultPNG;
+ (void)_startWindowServerIfNecessary;
+ (BOOL)isRunningEventPump;
+ (BOOL)registerForSystemEvents;
+ (BOOL)rendersLocally;
+ (id)stringForStatusBarStyle:(NSInteger)arg1;
+ (NSInteger)statusBarStyleForString:(id)arg1;
+ (NSInteger)interfaceOrientationForString:(id)arg1;
+ (id)stringForInterfaceOrientation:(NSInteger)arg1;
+ (void)_initializeSafeCategory;

- (void)_alertSheetStackChanged;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 requireTopApplication:(BOOL)arg5;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 requireTopApplication:(BOOL)arg5 presentAnimated:(BOOL)arg6;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 requireTopApplication:(BOOL)arg5 opaque:(BOOL)arg6 presentAnimated:(BOOL)arg7;
- (void)endRemoteSheet:(id)arg1;
- (void)endRemoteSheet:(id)arg1 returnCode:(NSInteger)arg2;
- (void)endRemoteSheet:(id)arg1 returnCode:(NSInteger)arg2 dismissAnimated:(BOOL)arg3;
- (BOOL)_accessibilitySettingsLoaderPresent;
- (id)_accessibilitySettingsBundle;
- (void)_updateAccessibilityItunesSettings;
- (void)_updateAccessibilitySettingsLoader;
- (BOOL)_accessibilityApplicationIsSystemWideServer;
- (Class)_accessibilityBundlePrincipalClass;
- (void)_updateApplicationAccessibility;
- (void)_updateLargeTextNotification;
- (void)_accessibilityStatusChanged:(id)arg1;
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)arg1;
- (BOOL)launchedToTest;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)_noteAnimationStarted:(id)arg1;
- (void)_noteAnimationFinished:(id)arg1;
- (void)runTest:(id)arg1 forAnimation:(id)arg2;
- (void)runTest:(id)arg1 startingBeforeAnimation:(id)arg2 stoppingAfterAnimation:(id)arg3;
- (id)_pathForFrameworkName:(id)arg1 inPrivate:(BOOL)arg2;
- (void*)_getSymbol:(id)arg1 forFramework:(id)arg2;
- (BOOL)isRunningTest;
- (BOOL)isRunningTest:(id)arg1;
- (id)resultsForTest:(id)arg1;
- (void)startedSubTest:(id)arg1 forTest:(id)arg2;
- (void)finishedSubTest:(id)arg1 forTest:(id)arg2;
- (struct __CFMessagePort { }*)_purplePPTServerPort;
- (void)_reportResults:(id)arg1;
- (void)finishedTest:(id)arg1;
- (void)failedTest:(id)arg1;
- (void)startCHUDRecording:(id)arg1;
- (void)stopCHUDRecording;
- (void)enableFramebufferStatisticsGathering;
- (void)_leak;
- (void)startLeaking;
- (void)stopLeaking;
- (void)testPrep:(id)arg1 options:(id)arg2;
- (BOOL)rotateIfNeeded:(NSInteger)arg1;
- (void)setDeviceOrientation:(NSInteger)arg1;
- (void)_accessibilityInit;
- (id)_currentTests;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (BOOL)reportApplicationSuspended;
- (BOOL)isRunningQuitTest;
- (BOOL)isRunningSuspendTest;
- (BOOL)_accessibilityCaptureSimulatorEvent:(struct __GSEvent { }*)arg1;
- (void)startedTest:(id)arg1;
- (BOOL)handleTestURL:(id)arg1;
- (id)init;
- (id)_extendLaunchTest;
- (id)_launchTestName;
- (BOOL)shouldLaunchSafe;
- (BOOL)firstLaunchAfterBoot;
- (void)_setDelegate:(id)arg1 assumeOwnership:(BOOL)arg2;
- (void)beginIgnoringInteractionEvents;
- (void)endIgnoringInteractionEvents;
- (BOOL)isIgnoringInteractionEvents;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (BOOL)isIdleTimerDisabled;
- (BOOL)_isActivated;
- (void)_setActivated:(BOOL)arg1;
- (void)_callInitializationDelegatesForURL:(id)arg1 payload:(id)arg2 suspended:(BOOL)arg3;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString { }*)arg1;
- (void)_run;
- (void)_reportAppLaunchFinished;
- (void)_runWithURL:(id)arg1 payload:(id)arg2 launchOrientation:(NSInteger)arg3 statusBarStyle:(NSInteger)arg4 statusBarHidden:(BOOL)arg5;
- (NSInteger)_currentExpectedInterfaceOrientation;
- (void)_registerForAlertItemStateChangeNotification;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_registerForLanguageChangedNotification;
- (void)_registerForLocaleWillChangeNotification;
- (void)_registerForLocaleChangedNotification;
- (void)_registerForKeyBagLockStatusNotification;
- (void)_unregisterForSignificantTimeChangeNotification;
- (void)_unregisterForLanguageChangedNotification;
- (void)_unregisterForLocaleChangedNotification;
- (void)_unregisterForTimeChangedNotification;
- (void)_loadMainNibFile;
- (void)pushRunLoopMode:(id)arg1;
- (void)popRunLoopMode:(id)arg1;
- (void)sendAction:(SEL)arg1 fromSender:(id)arg2 toTarget:(id)arg3 forEvent:(struct __GSEvent { }*)arg4;
- (BOOL)sendAction:(SEL)arg1 toTarget:(id)arg2 fromSender:(id)arg3 forEvent:(id)arg4;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)setNetworkActivityIndicatorVisible:(BOOL)arg1;
- (BOOL)isNetworkActivityIndicatorVisible;
- (BOOL)handleDoubleHeightStatusBarTap:(NSInteger)arg1;
- (void)_createStatusBarWithRequestedStyle:(NSInteger)arg1 orientation:(NSInteger)arg2 hidden:(BOOL)arg3;
- (id)statusBar;
- (id)statusBarWindow;
- (NSInteger)_validateStatusBarStyle:(NSInteger)arg1;
- (void)performDisablingStatusBarStyleValidation:(id)arg1;
- (void)setStatusBarStyle:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 animation:(NSInteger)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(NSInteger)arg5;
- (void)setStatusBarStyle:(NSInteger)arg1 animation:(NSInteger)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 duration:(double)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1;
- (NSInteger)statusBarStyle;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 changeApplicationFlag:(BOOL)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 duration:(double)arg2 changeApplicationFlag:(BOOL)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(NSInteger)arg2;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)isStatusBarHidden;
- (void)_notifyWillChangeStatusBarFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_notifyDidChangeStatusBarFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)arg1;
- (void)setStatusBarOrientation:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)setStatusBarOrientation:(NSInteger)arg1 animation:(NSInteger)arg2 duration:(double)arg3;
- (void)setStatusBarOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStatusBarOrientation:(NSInteger)arg1;
- (NSInteger)statusBarOrientation;
- (double)statusBarOrientationAnimationDuration;
- (void)addStatusBarStyleOverrides:(NSInteger)arg1;
- (void)removeStatusBarStyleOverrides:(NSInteger)arg1;
- (void)setGlowAnimationEnabled:(BOOL)arg1 forStyle:(NSInteger)arg2;
- (void)setDoubleHeightStatusText:(id)arg1 forStyle:(NSInteger)arg2;
- (void)setDoubleHeightMode:(NSInteger)arg1 glowAnimationEnabled:(BOOL)arg2;
- (void)setDoubleHeightMode:(NSInteger)arg1;
- (NSInteger)doubleHeightMode;
- (void)setDoubleHeightPrefixText:(id)arg1;
- (void)setDoubleHeightStatusText:(id)arg1;
- (void)applicationWillSuspend;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillSuspendUnderLock;
- (void)applicationDidBeginSuspendAnimation;
- (void)applicationDidEndResumeAnimation;
- (void)applicationDidResumeFromUnderLock;
- (void)applicationDidResume;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationWillTerminate;
- (void)_setSuspended:(BOOL)arg1;
- (BOOL)isSuspended;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedUnderLock;
- (BOOL)isRunningInTaskSwitcher;
- (void)_setSuspendedEventsOnly:(BOOL)arg1;
- (void)_setSuspendedUnderLock:(BOOL)arg1;
- (void)setRunningInTaskSwitcher:(BOOL)arg1;
- (BOOL)isAnimatingSuspensionOrResumption;
- (BOOL)_isResuming;
- (BOOL)_isLaunchedSuspended;
- (void)suspend;
- (void)suspendReturningToLastApp:(BOOL)arg1;
- (NSUInteger)_frontmostApplicationPort;
- (void)applicationSuspended:(struct __GSEvent { }*)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent { }*)arg1;
- (void)applicationExited:(struct __GSEvent { }*)arg1;
- (void)mediaKeyDown:(struct __GSEvent { }*)arg1;
- (void)mediaKeyUp:(struct __GSEvent { }*)arg1;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent { }*)arg1;
- (void)lockButtonDown:(struct __GSEvent { }*)arg1;
- (void)lockButtonUp:(struct __GSEvent { }*)arg1;
- (void)headsetButtonDown:(struct __GSEvent { }*)arg1;
- (void)headsetButtonUp:(struct __GSEvent { }*)arg1;
- (void)headsetAvailabilityChanged:(struct __GSEvent { }*)arg1;
- (void)menuButtonDown:(struct __GSEvent { }*)arg1;
- (void)menuButtonUp:(struct __GSEvent { }*)arg1;
- (void)statusBarMouseDown:(struct __GSEvent { }*)arg1;
- (void)statusBarMouseUp:(struct __GSEvent { }*)arg1;
- (void)statusBarReturnActionTap:(struct __GSEvent { }*)arg1;
- (void)ringerChanged:(NSInteger)arg1;
- (void)volumeChanged:(struct __GSEvent { }*)arg1;
- (void)acceleratedInX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)proximityStateChanged:(BOOL)arg1;
- (void)_handleAccessoryKeyStateChanged:(struct __GSEvent { }*)arg1;
- (void)accessoryKeyStateChanged:(struct __GSEvent { }*)arg1;
- (void)lockDevice:(struct __GSEvent { }*)arg1;
- (void)quitTopApplication:(struct __GSEvent { }*)arg1;
- (void)resetIdleTimerAndUndim;
- (NSUInteger)simpleRemoteRoutingPriority;
- (void)setSimpleRemoteRoutingPriority:(NSUInteger)arg1;
- (void)_postSimpleRemoteNotificationForAction:(NSInteger)arg1 andContext:(NSInteger)arg2;
- (void)_handleHeadsetButtonDown:(struct __GSEvent { }*)arg1;
- (void)_handleHeadsetButtonUp:(struct __GSEvent { }*)arg1;
- (void)_handleHeadsetButtonClick;
- (void)_handleHeadsetButtonDoubleClick;
- (void)_handleHeadsetButtonTripleClick;
- (BOOL)_saveSnapshotToPath:(id)arg1;
- (void)_terminateWithStatus:(NSInteger)arg1;
- (void)terminateWithSuccess;
- (void)applicationSuspend:(struct __GSEvent { }*)arg1;
- (void)_handleApplicationSuspend:(struct __GSEvent { }*)arg1 eventInfo:(void*)arg2;
- (void)updateSuspendedSettings:(id)arg1;
- (void)applicationResume:(struct __GSEvent { }*)arg1;
- (id)roleID;
- (id)displayIdentifier;
- (BOOL)_canOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)canOpenURL:(id)arg1;
- (void)applicationOpenToShortCut:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
- (void)_applicationOpenURL:(id)arg1 payload:(id)arg2;
- (void)_applicationOpenURL:(id)arg1 event:(struct __GSEvent { }*)arg2;
- (BOOL)isHandlingOpenShortCut;
- (void)_setHandlingURL:(BOOL)arg1 url:(id)arg2;
- (BOOL)isHandlingURL;
- (void)showTTYPromptForNumber:(id)arg1 withID:(NSInteger)arg2;
- (void)showNetworkPromptsIfNecessary:(BOOL)arg1;
- (void)setUsesBackgroundNetwork:(BOOL)arg1;
- (BOOL)usesBackgroundNetwork;
- (id)userHomeDirectory;
- (id)userLibraryDirectory;
- (id)userCachesDirectory;
- (id)_localCachesDirectory;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationSnapshotRectForOrientation:(NSInteger)arg1;
- (struct CGImage { }*)_createDefaultImageSnapshot;
- (void)_writeApplicationDefaultPNGSnapshot;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)pathToDefaultImageNamed:(id)arg1;
- (id)_createCurrentSnapshot;
- (BOOL)_updateDefaultImage;
- (void)_removeSnapshotImage;
- (void)prepareForDefaultImageSnapshot;
- (void)removeDefaultImage:(id)arg1;
- (double)defaultImageSnapshotExpiration;
- (BOOL)_isInteractionEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isTouchEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isMotionEvent:(struct __GSEvent { }*)arg1;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
- (void)addStatusBarImageNamed:(id)arg1;
- (void)addStatusBarImageNamed:(id)arg1 removeOnExit:(BOOL)arg2;
- (void)removeStatusBarImageNamed:(id)arg1;
- (void)addStatusBarItem:(NSInteger)arg1 removeOnExit:(BOOL)arg2;
- (void)addStatusBarItem:(NSInteger)arg1;
- (void)removeStatusBarItem:(NSInteger)arg1;
- (void)setApplicationBadgeString:(id)arg1;
- (NSInteger)applicationIconBadgeNumber;
- (void)setApplicationIconBadgeNumber:(NSInteger)arg1;
- (BOOL)applicationSupportsShakeToEdit;
- (void)setApplicationSupportsShakeToEdit:(BOOL)arg1;
- (BOOL)isProtectedDataAvailable;
- (void)addWebClipToHomeScreen:(id)arg1;
- (BOOL)homeScreenCanAddIcons;
- (void)_setIsClassic:(BOOL)arg1;
- (void)_fetchInfoPlistFlags;
- (NSInteger)interfaceOrientation;
- (NSInteger)orientation;
- (NSInteger)statusBarMode;
- (void)_setStatusBarMode:(NSInteger)arg1;
- (NSInteger)_frontMostAppOrientation;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (void)_sendMotionBegan:(NSInteger)arg1;
- (void)_sendMotionEnded:(NSInteger)arg1;
- (void)_sendMotionCancelled:(NSInteger)arg1;
- (void)_sendRemoteControlEvent:(NSInteger)arg1;
- (void)_showEditAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)alertViewCancel:(id)arg1;
- (BOOL)_alertWindowShouldRotate;
- (void)motionEnded:(NSInteger)arg1 withEvent:(id)arg2;
- (void)_setRotationDisabledDuringTouch:(BOOL)arg1;
- (BOOL)_rotationDisabledDuringTouch;
- (BOOL)_isTrackingAnyTouch;
- (void)_setUserDefaultsSyncEnabled:(BOOL)arg1;
- (NSInteger)statusBar:(id)arg1 styleForRequestedStyle:(NSInteger)arg2 overrides:(NSInteger)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(NSInteger)arg5;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(NSInteger)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarFrameForOrientation:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarFrame;
- (float)statusBarHeightForOrientation:(NSInteger)arg1;
- (float)statusBarHeightForOrientation:(NSInteger)arg1 ignoreHidden:(BOOL)arg2;
- (float)statusBarHeight;
- (NSInteger)activeInterfaceOrientation;
- (NSInteger)_getSpringBoardOrientation;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4 animation:(NSInteger)arg5;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4 animation:(NSInteger)arg5 startTime:(double)arg6;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3;
- (void)setStatusBarMode:(NSInteger)arg1 duration:(float)arg2;
- (double)windowRotationDuration;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (void)setStatusBarShowsProgress:(BOOL)arg1;
- (BOOL)_usesEmoji;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (BOOL)ignoresInteractionEvents;
- (NSUInteger)blockInteractionEventsCount;
- (void)significantTimeChange;
- (void)batteryStatusDidChange:(id)arg1;
- (void)_handleUserDefaultsDidChange:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_clearTouchesForView:(id)arg1;
- (void)_cancelCurrentTouchEvent;
- (void)_registerForUserDefaultsChanges;
- (void)_unregisterForUserDefaultsChanges;
- (void)vibrateForDuration:(NSInteger)arg1;
- (void)setBacklightLevel:(float)arg1;
- (float)backlightLevel;
- (void)setProximitySensorEnabled:(BOOL)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1;
- (void)setHardwareVolumeControlEnabled:(BOOL)arg1;
- (void)_dumpUIHierarchy:(struct __GSEvent { }*)arg1;
- (void)_dumpScreenContents:(struct __GSEvent { }*)arg1;
- (void)_processScriptEvent:(struct __GSEvent { }*)arg1;
- (void)_performMemoryWarning;
- (void)didReceiveMemoryWarning;
- (void)didReceiveUrgentMemoryWarningSuspendedAndWillTerminate;
- (void)_receivedMemoryNotification;
- (void)setReceivesMemoryWarnings:(BOOL)arg1;
- (void)_purgeSharedInstances;
- (void)_playbackTimerCallback:(id)arg1;
- (void)_stopPlayback;
- (void)_startPlaybackTimer;
- (void)_addRecorder:(id)arg1;
- (void)_removeRecorder:(id)arg1;
- (void)_playbackEvents:(id)arg1 atPlaybackRate:(float)arg2 messageWhenDone:(id)arg3 withSelector:(SEL)arg4;
- (void)_cancelGestureRecognizers:(id)arg1;
- (void)_cancelGestureRecognizersForView:(id)arg1;
- (void)_cancelTouches:(id)arg1 withEvent:(id)arg2 sendingTouchesCancelled:(BOOL)arg3 includingGestures:(BOOL)arg4;
- (void)_cancelAllTouches;
- (void)_cancelEvent:(id)arg1 forWindow:(id)arg2;
- (void)_cancelEvent:(id)arg1;
- (BOOL)_shouldHandleTestURL:(id)arg1;
- (void)_callApplicationResumeHandlersForURL:(id)arg1 payload:(id)arg2;
- (void)_handleApplicationResumeEvent:(struct __GSEvent { }*)arg1;
- (void)_updateOrientation;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 withNewEvent:(id)arg2;
- (void)sendEvent:(id)arg1;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)handleKeyEvent:(struct __GSEvent { }*)arg1;
- (id)defaultFirstResponder;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseKeyWindowStack;
- (void)setHardwareKeyboardLayoutName:(id)arg1;
- (id)keyWindow;
- (id)windows;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)applicationWillOrderInContext:(NSUInteger)arg1 windowLevel:(float)arg2 windowOutput:(NSInteger)arg3;
- (void)applicationDidOrderOutContext:(NSUInteger)arg1;
- (void)_sendOrderedOutContexts;
- (BOOL)_isWindowServerHostingManaged;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert:(NSInteger*)arg1;
- (void)willDismissMiniAlert:(NSInteger*)arg1 andShowAnother:(BOOL)arg2;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (BOOL)isLocked;
- (BOOL)isPasscodeRequiredToUnlock;
- (void)requestDeviceUnlock;
- (BOOL)canShowAlerts;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (void)runModal:(id)arg1;
- (void)stopModal;
- (BOOL)_supportsShakesWhenNotActive;
- (NSInteger)enabledRemoteNotificationTypes;
- (void)registerForRemoteNotificationTypes:(NSInteger)arg1;
- (void)unregisterForRemoteNotifications;
- (void)presentLocalNotificationNow:(id)arg1;
- (void)scheduleLocalNotification:(id)arg1;
- (void)cancelLocalNotification:(id)arg1;
- (void)cancelAllLocalNotifications;
- (void)setScheduledLocalNotifications:(id)arg1;
- (id)scheduledLocalNotifications;
- (BOOL)_isViewGroupOpacityDisabled;
- (BOOL)_isViewEdgeAntialiasingDisabled;
- (BOOL)_isClassic;
- (BOOL)_shouldZoom;
- (void)_setShouldZoom:(BOOL)arg1;
- (BOOL)_isViewContentScalingDisabled;
- (BOOL)_requiresHighResolution;
- (void)_hideNetworkActivityIndicator;
- (void)_beginShowingNetworkActivityIndicator;
- (void)_endShowingNetworkActivityIndicator;
- (void)_setIgnoreHeadsetClicks:(BOOL)arg1;
- (BOOL)_shouldIgnoreHeadsetClicks;
- (BOOL)shouldFenceStatusBarRotation;
- (BOOL)_executableWasLinkedWithUIKit;
- (NSInteger)applicationState;
- (double)backgroundTimeRemaining;
- (NSUInteger)beginBackgroundTaskWithExpirationHandler:(id)arg1;
- (void)endBackgroundTask:(NSUInteger)arg1;
- (id)_backgroundModes;
- (void)_wakeTimerFired;
- (BOOL)setKeepAliveTimeout:(double)arg1 handler:(id)arg2;
- (void)clearKeepAliveTimeout;
- (void)beginReceivingRemoteControlEvents;
- (void)endReceivingRemoteControlEvents;
- (BOOL)_usesPreMTAlertBehavior;
- (id)_remoteControlEvent;
- (id)_motionEvent;
- (id)_touchesEvent;
- (id)_event;
- (id)_exclusiveTouchWindows;
- (struct __CFDictionary { }*)_touchMap;
- (void)setProximitySensingEnabled:(BOOL)arg1;
- (BOOL)isProximitySensingEnabled;
- (void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (NSInteger)alertOrientation;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)_accessibilityIsSystemWideServer;
- (BOOL)_accessibilityIsSystemWideServer;
- (id)_accessibilityLastElement;
- (id)_accessibilityTitleBarElement;
- (id)_lastStatusBarElement;
- (id)_firstStatusBarElement;
- (id)_accessibilityTypingCandidates;
- (id)_accessibilityBundleIdentifier;
- (id)_accessibilityFirstElement;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2;
- (id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2;
- (id)_accessibilityUIWindowFindWithGlobalPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilitySummaryElement;
- (void)_accessibilityKeyboardDidShow:(id)arg1;
- (void)_accessibilityKeyboardDidHide:(id)arg1;
- (BOOL)_accessibilityHardwareKeyboardActive;
- (NSInteger)_accessibilityApplicationForPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityAttributeValue:(NSInteger)arg1;
- (void)accessibilityDisable;
- (void)_accessibilityInitialize;
- (BOOL)_accessibilityEscape;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityResponderElement;
- (id)_accessibilityMainWindow;
- (id)_accessibilityUserTestingChildren;
- (BOOL)_accessibilityAllowsNotificationsDuringSuspension;
- (BOOL)_accessibilitySoftwareKeyboardActive;
- (void)_mapkit_refreshSharedAddressBookIfNeeded;
- (void)_mapkit_resetSharedAddressBookNeedsRefresh;
- (void*)_mapkit_sharedAddressBook;
- (BOOL)isSuspendedForAnyReason;
- (void)openStoreURL:(id)arg1 forContext:(id)arg2;
- (void)accessibilityStartStopToggle;
- (void)beginPPTWithName:(id)arg1;
- (void)endCurrentPPT;

@end
