/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */



@interface CMAccelerometerData : CMLogItem 
{
    id _internal;
}

@property(readonly) ? acceleration;


- (id)initWithAcceleration:(struct { float x1; float x2; float x3; })arg1 andTimestamp:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (struct { double x1; double x2; double x3; })acceleration;

@end
