/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */



@interface IMAVController : NSObject 
{
}

+ (void)_markSetup;
+ (void)setupIMAVController;
+ (void)declineVCRequestWithBuddy:(id)arg1 response:(NSUInteger)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
+ (void)dumpCaps;
+ (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
+ (void)setIMAVCapabilities:(NSInteger)arg1 toCaps:(NSInteger)arg2;
+ (void)setHasActiveConference:(BOOL)arg1;
+ (BOOL)multiAudioCapable;
+ (BOOL)multiVideoCapable;
+ (BOOL)cameraConnected;
+ (BOOL)microphoneConnected;
+ (BOOL)ARDClientCapable;
+ (BOOL)canUseSmallDataBlobs;
+ (BOOL)canReceiveWidescreen;
+ (BOOL)ARDServerCapable;
+ (BOOL)softwareCameraEnabled;
+ (void)setSoftwareCameraEnabled:(BOOL)arg1;
+ (BOOL)softwareMicrophoneEnabled;
+ (void)setSoftwareMicrophoneEnabled:(BOOL)arg1;
+ (void)setBlockAudioOnlyCalls:(BOOL)arg1;
+ (BOOL)blockMicrophoneCapable;
+ (void)setBlockMicrophoneCapable:(BOOL)arg1;
+ (BOOL)blockCameraCapable;
+ (void)setBlockCameraCapable:(BOOL)arg1;
+ (BOOL)blockARDCapable;
+ (void)setBlockARDCapable:(BOOL)arg1;
+ (BOOL)ardMuxingSupported;
+ (void)requestPendingVCInvitations;
+ (void)_updateOverallChatState;
+ (NSUInteger)overallChatState;
+ (BOOL)microphoneCapable;
+ (void)updateActiveConference;
+ (void)currentAVChatInfoChanged:(id)arg1;
+ (void)declineVCRequestWithBuddy:(id)arg1 response:(NSUInteger)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
+ (BOOL)hasActiveConference;
+ (BOOL)blockAudioOnlyCalls;
+ (BOOL)cameraCapable;
+ (BOOL)_shouldRunConferences;
+ (void)pushCachedVCCapsToDaemon;
+ (BOOL)_shouldHandleInvites;
+ (void)vcCapabilitiesChanged:(unsigned long long)arg1;
+ (id)vcResponseInfoWithSessionID:(NSUInteger)arg1 ICEData:(id)arg2 natType:(id)arg3 natIP:(id)arg4 ardChannelInfo:(id)arg5 forParticipant:(id)arg6 relaySupported:(BOOL)arg7;
+ (id)vcResponseInfoWithSessionID:(NSUInteger)arg1;
+ (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4;
+ (void)setDelegate:(id)arg1;
+ (id)delegate;


@end
