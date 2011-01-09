/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableSet;



@interface UITapRecognizer : NSObject 
{
    NSUInteger _numberOfTouchesRequired;
    NSUInteger _numberOfTapsRequired;
    NSMutableSet *_activeTouches;
    NSInteger _currentNumberOfTouches;
    NSInteger _currentNumberOfTaps;
    struct CGPoint { 
        float x; 
        float y; 
    } _location;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    float _allowableMovement;
    double _maximumSingleTapDuration;
    double _maximumIntervalBetweenSuccessiveTaps;
    NSMutableArray *_touches;
    id _delegate;
    unsigned int _timerOn : 1;
    unsigned int _noNewTouches : 1;
}

@property float allowableMovement;
@property double maximumSingleTapDuration;
@property double maximumIntervalBetweenSuccessiveTaps;
@property <UITapRecognizerDelegate> *delegate;
@property(readonly) NSArray *touches;
@property NSUInteger numberOfTouchesRequired;
@property NSUInteger numberOfTapsRequired;


- (void)clearTapTimer;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (struct CGPoint { float x1; float x2; })_locationOnScreen;
- (double)maximumSingleTapDuration;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)_reset;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (NSUInteger)numberOfTapsRequired;
- (float)allowableMovement;
- (NSUInteger)numberOfTouchesRequired;
- (void)setAllowableMovement:(float)arg1;
- (id)touches;
- (void)setNumberOfTapsRequired:(NSUInteger)arg1;
- (void)setNumberOfTouchesRequired:(NSUInteger)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
