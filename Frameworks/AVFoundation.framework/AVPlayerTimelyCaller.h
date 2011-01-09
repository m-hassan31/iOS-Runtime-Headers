/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, AVWeakReference;



@interface AVPlayerTimelyCaller : NSObject 
{
    AVWeakReference *_weakReference;
    AVPlayer *_player;
    struct dispatch_queue_s { } *_timerQueue;
    struct dispatch_source_s { } *_timerSource;
    BOOL _isTimerSourceRunning;
    BOOL _timerQueueIsPlayerStateDispatchQueue;
}

@property(getter=_weakReference,readonly) AVWeakReference *weakReference;


- (id)initWithPlayer:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;
- (void)itemTimeJumped;
- (id)_weakReference;
- (void)finalize;
- (void)invalidate;
- (void)release;
- (id)retain;
- (void)dealloc;
- (id)player;

@end
