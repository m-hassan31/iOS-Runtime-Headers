/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CADisplayLink : NSObject 
{
    void *_impl;
}

@property(readonly) CADisplay *display;
@property(retain) id userInfo;
@property(readonly) double timestamp;
@property(readonly) double duration;
@property(getter=isPaused) BOOL paused;
@property NSInteger frameInterval;

+ (id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

- (id)_initWithDisplayLink:(struct DisplayLink { int (**x1)(); struct Display {} *x2; void *x3; SEL x4; void *x5; NSInteger x6; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_7_1_1; } x7; struct Condition { struct _opaque_pthread_cond_t { long x_1_2_1; BOOL x_1_2_2[24]; } x_8_1_1; } x8; struct _opaque_pthread_t {} *x9; id x10; struct __CFRunLoop {} *x11; struct List<const __CFString*> {} *x12; unsigned long long x13; unsigned long long x14; unsigned int x15 : 1; }*)arg1;
- (NSInteger)frameInterval;
- (BOOL)isPaused;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setPaused:(BOOL)arg1;
- (double)timestamp;
- (void)setFrameInterval:(NSInteger)arg1;
- (id)userInfo;
- (double)duration;
- (void)invalidate;
- (void)dealloc;
- (id)display;

@end
