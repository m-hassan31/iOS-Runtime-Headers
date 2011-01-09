/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface NSValue : NSObject <NSCopying, NSCoding>
{
}

+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (void)initialize;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)valueWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
+ (id)valueWithCGSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithDDRange:(struct _DDRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithCMTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
+ (id)valueWithCMTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg1;
+ (id)valueWithCMTimeMapping:(struct { struct { struct { long long x_1_2_1; NSInteger x_1_2_2; NSUInteger x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; NSInteger x_2_2_2; NSUInteger x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; NSInteger x_1_2_2; NSUInteger x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; NSInteger x_2_2_2; NSUInteger x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1;
+ (id)valueWithCFUUIDBytes:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithCFUUIDBytes:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })arg1;

- (BOOL)isNSValue__;
- (const char *)objCType;
- (BOOL)isEqualToValue:(id)arg1;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (struct CGPoint { float x1; float x2; })pointValue;
- (void*)pointerValue;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeValue;
- (struct CGSize { float x1; float x2; })sizeValue;
- (Class)classForCoder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectValue;
- (id)nonretainedObjectValue;
- (void)getValue:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })CATransform3DValue;
- (struct Object { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; }*)arg4;
     /* Encoded args for previous method: @24@0:4@8@12@16r^{ValueInterpolator=dddddddddB}20 */

- (float)CA_distanceToValue:(id)arg1;
- (struct CGPoint { float x1; float x2; })CGPointValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })CGRectValue;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })CGAffineTransformValue;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })UIEdgeInsetsValue;
- (struct CGSize { float x1; float x2; })CGSizeValue;
- (struct _DDRange { unsigned long long x1; unsigned long long x2; })ddrangeValue;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })CMTimeValue;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeValue;
- (struct { struct { struct { long long x_1_2_1; NSInteger x_1_2_2; NSUInteger x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; NSInteger x_2_2_2; NSUInteger x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; NSInteger x_1_2_2; NSUInteger x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; NSInteger x_2_2_2; NSUInteger x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })CMTimeMappingValue;
- (id)_mapkit_initWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_mapkit_initWithCADoublePoint:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })CADoublePointValue;
- (id)_mapkit_initWithCADoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })CADoubleRectValue;
- (id)_mapkit_initWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithZoomRegion:(struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_zoomRegionValue;
- (id)_mapkit_initWithMKMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKMapRectValue;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })CFUUIDBytesValue;
- (struct CGPoint { float x1; float x2; })cgPointValue;
- (struct CGSize { float x1; float x2; })cgSizeValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cgRectValue;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })CFUUIDBytesValue;

@end
