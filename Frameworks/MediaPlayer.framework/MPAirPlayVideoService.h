/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSNetService, NSString, MPAVItem, NSData, MediaControlClient;



@interface MPAirPlayVideoService : NSObject <NSNetServiceDelegate>
{
    NSNetService *_netService;
    struct _DNSServiceRef_t { } *_dnsService;
    NSString *_ipAddress;
    MediaControlClient *_mediaControlClient;
    MPAVItem *_item;
    void *_context;
    NSData *_playInfoData;
    double _cachedCurrentPlaybackTime;
    float _cachedVolume;
    BOOL _didResolveOrFailToResolve;
    BOOL _hasVolumeControl;
    BOOL _isPlaying;
    BOOL _playbackTimeIsValid;
    NSUInteger _playbackState;
    BOOL _oldUsesBackgroundNetwork;
    unsigned char _oldCellFlags;
    unsigned char _oldWiFiFlags;
}

@property(readonly) BOOL isAvailable;
@property(readonly) NSNetService *netService;
@property(readonly) BOOL _didResolveOrFailToResolve;
@property void *context;


- (BOOL)setRate:(float)arg1;
- (void)setCurrentPlaybackTime:(double)arg1;
- (NSUInteger)playbackState;
- (double)currentPlaybackTime;
- (void)setItem:(id)arg1;
- (id)item;
- (void)setContext:(void*)arg1;
- (void*)context;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (BOOL)prepareToDisplayItem:(id)arg1 completionHandler:(id)arg2;
- (void)sendPICRequestData:(id)arg1 responseHandler:(id)arg2;
- (void)sendPlayInfoData:(id)arg1;
- (void)_resolveWithTimeout:(double)arg1;
- (void)_cancelResolve;
- (void)_updateForPlaybackEnding;
- (BOOL)_didResolveOrFailToResolve;
- (id)_initWithNSNetService:(id)arg1;
- (BOOL)playReturningError:(id*)arg1;
- (BOOL)canDisplayItem:(id)arg1;
- (BOOL)hasVolumeControl;
- (BOOL)isAvailable;
- (void)stop;
- (float)volume;
- (void)setVolume:(float)arg1;
- (id)ipAddress;
- (id)netService;

@end
