/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class VoiceChatMessageSendQueue, GKVoiceChatServiceFocus, GKRWLock, NSMutableArray, GKSessionInternal, VoiceChatSessionRoster, GKWifiListener, NSString, <GKVoiceChatSessionDelegate>, NSMutableDictionary;



@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, WifiListenerDelegate>
{
    NSString *_sessionName;
    NSUInteger _conferenceID;
    BOOL activeSession;
    float sessionVolume;
    BOOL focusCallbacks;
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_focusPausedPeers;
    NSMutableArray *_connectedVoicePeers;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    BOOL needsRecalculateGoodChannels;
    NSInteger goodChannels;
    NSUInteger talkingPeersLimit;
    NSUInteger _sessionState;
    GKRWLock *_rwLock;
    GKVoiceChatServiceFocus *_vcService;
    VoiceChatSessionRoster *_roster;
    VoiceChatMessageSendQueue *_sendQueue;
    <GKVoiceChatSessionDelegate> *delegate;
    NSUInteger congestionState;
    id _publicWrapper;
    GKWifiListener *_wifiListener;
    BOOL _currentWifiState;
    NSUInteger _audioInputAvailable;
}

@property(readonly) NSString *sessionName;
@property(readonly) NSUInteger conferenceID;
@property(readonly) NSArray *peerList;
@property(getter=isActiveSession) BOOL activeSession;
@property float sessionVolume;
@property NSUInteger talkingPeersLimit;
@property <GKVoiceChatSessionDelegate> *delegate;


- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)delegate;
- (void)wifiStateDidChange:(BOOL)arg1;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (void)calculateConferenceID;
- (id)encodePeerID:(id)arg1;
- (id)decodePeerID:(id)arg1;
- (void)startSession;
- (void)startSessionInternal;
- (void)stopSession;
- (void)stopSessionInternal;
- (void)audioInputDidChange:(unsigned long)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (id)peerList;
- (void)setActiveSession:(BOOL)arg1;
- (BOOL)isActiveSession;
- (NSUInteger)conferenceID;
- (void)setSessionVolume:(float)arg1;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)updatedFocusID:(NSUInteger)arg1;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)sendMutedPeers;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)pauseAll;
- (void)unPauseAll;
- (void)pruneBadLinks;
- (void)addPeerToFocusPausedList:(id)arg1;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)sendConnectedPeers;
- (void)parseConnectedPeers:(id)arg1;
- (NSUInteger)peerCount;
- (float)sessionVolume;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (NSInteger)calculateChannelQualities;
- (NSInteger)goodChannels;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(NSInteger)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (void)didStartSpeaking:(id)arg1;
- (void)didStopSpeaking:(id)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)setTalkingPeersLimit:(NSUInteger)arg1;
- (NSUInteger)talkingPeersLimit;
- (void)cleanupProc:(id)arg1;
- (id)participantID;
- (void)cleanup;
- (id)sessionName;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(NSInteger)arg3;

@end
