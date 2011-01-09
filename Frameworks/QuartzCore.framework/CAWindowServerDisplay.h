/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CAWindowServerDisplay : NSObject 
{
    void *_impl;
}

@property(readonly) CGRect bounds;
@property(readonly) NSString *name;
@property(readonly) NSString *deviceName;
@property(readonly) NSUInteger displayId;
@property(readonly) NSUInteger rendererFlags;
@property(readonly) NSSet *clones;
@property(readonly) CAWindowServerDisplay *cloneMaster;
@property(getter=isBlanked) BOOL blanked;
@property(copy) NSString *orientation;
@property BOOL invertsColors;
@property float contrast;
@property(getter=isMirroringEnabled) BOOL mirroringEnabled;
@property NSInteger tag;
@property(copy) NSString *TVMode;
@property(copy) NSString *TVSignalType;


- (id)TVSignalType;
- (id)_initWithCADisplayServer:(struct Server { int (**x1)(); struct SpinLock { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_3_1_1; } x3; struct Display {} *x4; struct __CFString {} *x5; struct ContextItem {} *x6; NSUInteger x7; NSUInteger x8; struct SpinLock { struct { NSInteger x_1_2_1; } x_9_1_1; } x9; struct PendingOperation {} *x10; struct Context {} *x11; struct Context {} *x12; NSUInteger x13; struct Shape {} *x14; NSUInteger x15; struct Context {} *x16; double x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; }*)arg1;
- (NSUInteger)rendererFlags;
- (id)contextIdsWithClientPort:(NSUInteger)arg1;
- (NSUInteger)contextIdHostingContextId:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfContextId:(NSUInteger)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromContextId:(NSUInteger)arg2;
- (id)clones;
- (void)addClone:(id)arg1;
- (void)removeClone:(id)arg1;
- (void)removeAllClones;
- (id)cloneMaster;
- (void)setBlanked:(BOOL)arg1;
- (BOOL)isBlanked;
- (void)setInvertsColors:(BOOL)arg1;
- (BOOL)invertsColors;
- (void)setMirroringEnabled:(BOOL)arg1;
- (BOOL)isMirroringEnabled;
- (void)setTVMode:(id)arg1;
- (id)TVMode;
- (void)setTVSignalType:(id)arg1;
- (NSUInteger)displayId;
- (float)contrast;
- (void)setContrast:(float)arg1;
- (void)setOrientation:(id)arg1;
- (id)deviceName;
- (id)name;
- (NSInteger)tag;
- (void)setTag:(NSInteger)arg1;
- (id)description;
- (NSUInteger)clientPortAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (NSUInteger)contextIdAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toContextId:(NSUInteger)arg2;
- (void)invalidate;
- (id)orientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;

@end
