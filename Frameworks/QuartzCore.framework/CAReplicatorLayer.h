/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CAReplicatorLayer : CALayer 
{
}

@property NSInteger instanceCount;
@property BOOL preservesDepth;
@property double instanceDelay;
@property CATransform3D instanceTransform;
@property CGColor *instanceColor;
@property float instanceRedOffset;
@property float instanceGreenOffset;
@property float instanceBlueOffset;
@property float instanceAlphaOffset;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (NSInteger)instanceCount;
- (void)setInstanceCount:(NSInteger)arg1;
- (BOOL)preservesDepth;
- (void)setPreservesDepth:(BOOL)arg1;
- (double)instanceDelay;
- (void)setInstanceDelay:(double)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })instanceTransform;
- (void)setInstanceTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CGColor { }*)instanceColor;
- (void)setInstanceColor:(struct CGColor { }*)arg1;
- (float)instanceRedOffset;
- (void)setInstanceRedOffset:(float)arg1;
- (float)instanceGreenOffset;
- (void)setInstanceGreenOffset:(float)arg1;
- (float)instanceBlueOffset;
- (void)setInstanceBlueOffset:(float)arg1;
- (float)instanceAlphaOffset;
- (void)setInstanceAlphaOffset:(float)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (id)_implicitActionForKey:(id)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; NSUInteger x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; NSInteger x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; NSUInteger x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; }*)arg1 layerFlags:(NSUInteger)arg2 commitFlags:(NSUInteger*)arg3;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)_renderLayerDefinesProperty:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;

@end
