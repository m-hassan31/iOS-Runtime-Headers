/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIAnimation : NSObject 
{
    id _target;
    SEL _action;
    id _delegate;
    struct { 
        unsigned int curve : 4; 
        unsigned int tvOutput : 1; 
        unsigned int reserved : 27; 
    } _animationFlags;
    double _startTime;
    double _duration;
    NSInteger _state;
}


- (float)progressForFraction:(float)arg1;
- (BOOL)tvOutput;
- (float)fractionForTime:(double)arg1;
- (void)markStart:(double)arg1;
- (void)markStop;
- (SEL)action;
- (id)initWithTarget:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setAnimationCurve:(NSInteger)arg1;
- (void)setDuration:(double)arg1;
- (NSInteger)state;
- (id)target;
- (void)stopAnimation;
- (void)setProgress:(float)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
