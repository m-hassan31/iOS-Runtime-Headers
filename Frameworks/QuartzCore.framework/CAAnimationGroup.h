/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CAAnimationGroup : CAAnimation 
{
}

@property(copy) NSArray *animations;


- (void)setDefaultDuration:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (NSUInteger)_propertyFlagsForLayer:(id)arg1;
- (id)animations;
- (void)CA_prepareRenderValue;
- (void)setAnimations:(id)arg1;

@end
