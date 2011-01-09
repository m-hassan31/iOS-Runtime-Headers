/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMachPort, VideoConference, GKNATObserver, ICEResultWaitQueue, NSMutableArray;



@interface VideoConferenceManager : NSObject <NSMachPortDelegate>
{
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } stateLock;
    NSMutableArray *vcList;
    VideoConference *activeConference;
    VideoConference *conferenceWithMic;
    ICEResultWaitQueue *resultQueue;
    struct tagHANDLE { NSInteger x1; } *hAUIO;
    struct tagHANDLE { NSInteger x1; } *hSIP;
    NSInteger audioRefCount;
    NSInteger sipRefCount;
    BOOL shouldSetupAudioSession;
    BOOL enableSpeakerPhone;
    NSInteger internalSampleRate;
    NSInteger hardwareSampleRate;
    NSInteger internalBlockSize;
    NSInteger encodeBitrate;
    NSInteger clientPID;
    BOOL isUsingSuppression;
    BOOL isForcingAudioBitrate;
    GKNATObserver *natObserver;
    BOOL isTetheredDisplayMode;
    struct opaqueCMSession { } *cmSession;
    NSInteger cmSessionRefCount;
    BOOL tearDownCMSession;
    NSMachPort *cmSessionMachPort;
    NSInteger startToken;
    NSInteger stopToken;
    struct dispatch_queue_s { } *cmSessionQueue;
}

@property BOOL isForcingAudioBitrate;
@property BOOL isUsingSuppression;
@property NSInteger clientPID;
@property(readonly) NSMutableArray *vcList;
@property NSInteger internalSampleRate;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property BOOL shouldSetupAudioSession;
@property(readonly) ICEResultWaitQueue *resultQueue;
@property VideoConference *conferenceWithMic;
@property VideoConference *activeConference;

+ (id)defaultVideoConferenceManager;

- (id)init;
- (void)createSIP;
- (id)conferenceForCallID:(NSInteger)arg1;
- (BOOL)hasVideoConference:(id)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (BOOL)projectionModeEnabledState;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { NSInteger x_12_1_1; BOOL x_12_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; NSUInteger x13; }*)arg1;
- (BOOL)tearDownAudioIO:(BOOL)arg1;
- (void)setupAudioSessionProperties;
- (void)startAudioSession;
- (void)stopAudioSession;
- (void)tearDownAudioSession:(BOOL)arg1;
- (BOOL)forceSampleRate:(double*)arg1;
- (BOOL)forceBufferFrames:(NSInteger*)arg1;
- (BOOL)forceBufferDuration:(float*)arg1;
- (void)resetAudioSessionProperties;
- (void)pauseVideoConferences:(BOOL)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(NSUInteger)arg3;
- (void)handleRouteChanged:(struct opaqueCMSession { }*)arg1;
- (void)handleMachMessage:(void*)arg1;
- (void)setClientPID:(NSInteger)arg1;
- (void)setInternalSampleRate:(NSInteger)arg1;
- (BOOL)isForcingAudioBitrate;
- (NSInteger)clientPID;
- (NSInteger)internalSampleRate;
- (id)activeConference;
- (id)vcList;
- (void)startSIP;
- (struct tagHANDLE { NSInteger x1; }*)SIPHandle;
- (void)stopSIP;
- (id)resultQueue;
- (BOOL)stopAudioIO;
- (BOOL)startAudioIO:(struct AudioStreamBasicDescription { double x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; NSUInteger x8; NSUInteger x9; })arg1 sampleRate:(NSInteger)arg2 minSamplesPerFrame:(NSInteger)arg3 audioBundle:(NSInteger)arg4 remoteVCCallInfo:(id)arg5 error:(id*)arg6;
- (void)setIsForcingAudioBitrate:(BOOL)arg1;
- (void)addVideoConference:(id)arg1;
- (void)setActiveConference:(id)arg1;
- (void)removeVideoConference:(id)arg1;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (void)setConferenceWithMic:(id)arg1;
- (id)conferenceWithMic;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (BOOL)shouldSetupAudioSession;
- (void)setEncodeBitrate:(NSInteger)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingSuppression;

@end
