/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSObject<CNFConferenceManagerDelegate>, AVController, NSURL, CNFDisplayController, CNFAudioPlayer, CNFAudioDeviceController;



@interface CNFConferenceManager : NSObject <UIApplicationDelegate, CNFDisplayControllerDelegate, CNFSoundPlayerDelegateProtocol, CNFAudioDeviceControllerProtocol>
{
    NSObject<CNFConferenceManagerDelegate> *_delegate;
    AVController *_avController;
    CNFDisplayController *_displayController;
    CNFAudioDeviceController *_deviceController;
    BOOL _isOutgoingInvitation;
    BOOL _initialMuteState;
    BOOL _audioWasInterrupted;
    NSURL *_originationURL;
    CNFAudioPlayer *_player;
}

@property(retain) NSURL *originationURL;
@property BOOL initialMuteState;
@property BOOL isOutgoingInvitation;
@property NSObject<CNFConferenceManagerDelegate> *delegate;
@property(retain,readonly) CNFAudioDeviceController *deviceController;
@property(retain,readonly) CNFDisplayController *displayController;


- (void)_fakeConferenceFirstLocalFrameNotification;
- (void)_fakeConferenceFirstRemoteFrameNotification;
- (void)_fakeConferenceConnectedNotification;
- (void)_fakeDeclinedNotification;
- (void)_fakeFailureNotification;
- (void)_fakeHangUp;
- (void)_ensureDisplayControllerExists;
- (void)_setupAudioPlayer;
- (void)_setupDeviceController;
- (void)_muteConference:(BOOL)arg1;
- (void)_setUpConferenceManager;
- (void)_tearDownConferenceManager;
- (void)_beginAudioInterruption;
- (void)_endAudioInterruption;
- (void)_handlePresentConference:(id)arg1;
- (void)_gracefullyTerminateAndReturnToLastApp;
- (void)animateOutFinished;
- (void)_handleInvitationSent:(id)arg1;
- (void)_handleFirstRemoteFrame:(id)arg1;
- (void)_handleDismissConference:(id)arg1;
- (void)_handleAccountNotRegistered:(id)arg1;
- (void)_handleConferenceRemotePauseChanged:(id)arg1;
- (void)_delayedPlayOutgoingRingSound;
- (void)_playOutgoingRingSound;
- (void)_stopSounds;
- (void)startConferenceWithURL:(id)arg1;
- (void)hangUpConferenceOnScreenLock;
- (void)audioPlayerDidStopPlaying:(id)arg1;
- (void)setOriginationURL:(id)arg1;
- (BOOL)initialMuteState;
- (void)setInitialMuteState:(BOOL)arg1;
- (void)setIsOutgoingInvitation:(BOOL)arg1;
- (id)deviceController;
- (id)displayController;
- (void)audioDeviceView:(id)arg1 eventOccurred:(id)arg2;
- (BOOL)shouldDisplayMuteOption;
- (BOOL)muteButtonEnabled;
- (BOOL)audioIsMuted;
- (NSInteger)audioDeviceViewNumberOfDevices:(id)arg1;
- (id)audioDeviceView:(id)arg1 deviceAtIndex:(NSInteger)arg2 isActive:(BOOL*)arg3;
- (void)audioDeviceView:(id)arg1 selectedItem:(NSInteger)arg2;
- (void)audioDeviceView:(id)arg1 selectedMute:(NSInteger)arg2;
- (void)_handleConferenceDidStart;
- (void)conferenceDisplayController:(id)arg1 endCallWithReason:(NSUInteger)arg2;
- (BOOL)isInPhoneCall;
- (BOOL)isOutgoingInvitation;
- (void)conferenceDisplayController:(id)arg1 didFinishAnimatingCallEndWithReason:(NSUInteger)arg2;
- (id)originationURL;
- (void)conferenceDisplayControllerEndedWhileSuspending:(id)arg1;
- (void)conferenceDisplayController:(id)arg1 endWithReason:(NSUInteger)arg2;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (void)conferenceDisplayController:(id)arg1 muteConferenceWithReason:(NSUInteger)arg2;
- (void)conferenceDisplayController:(id)arg1 cameraToggleWithReason:(NSUInteger)arg2;
- (void)conferenceDisplayController:(id)arg1 retryVideoConferenceInvitationWithReason:(NSUInteger)arg2;
- (void)conferenceDisplayController:(id)arg1 returnToVoiceCallWithReason:(NSUInteger)arg2;
- (void)conferenceDisplayController:(id)arg1 cancelCallFailureRecoveryWithReason:(NSUInteger)arg2;
- (void)showCallBarsAnimated:(BOOL)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

@end
