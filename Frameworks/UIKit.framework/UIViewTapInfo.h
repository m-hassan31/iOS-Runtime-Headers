/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;



@interface UIViewTapInfo : NSObject 
{
    id _delegate;
    UIView *_view;
    NSInteger _tapDownCount;
    NSInteger _fingerCount;
    float _multiTapDelay;
    float _rejectAsTapThrehold;
    float _viewTouchPauseThreshold;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPosition;
    double _startTime;
    struct { 
        unsigned int shouldSendTouchPauseUp : 1; 
        unsigned int delegateViewHandleTapWithCountEvent : 1; 
        unsigned int delegateViewHandleTapWithCountEventFingerCount : 1; 
        unsigned int delegateViewHandleTouchPauseIsDown : 1; 
        unsigned int reserved : 28; 
    } _tapInfoFlags;
}


- (id)initWithDelegate:(id)arg1 view:(id)arg2;
- (void)releaseAndClearWeakRefs;
- (void)clearTapState;
- (void)_handleTapWithCount:(NSInteger)arg1 event:(struct __GSEvent { }*)arg2;
- (void)handleSingleTapEvent:(struct __GSEvent { }*)arg1;
- (void)handleDoubleTapEvent:(struct __GSEvent { }*)arg1;
- (void)scheduleSingleTapHandlerForEvent:(struct __GSEvent { }*)arg1;
- (void)_sendTouchPauseDownIfNecessary;
- (void)_sendTouchPauseUpIfNecessary;
- (BOOL)_eventLocationConsideredMovement:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (BOOL)cancelMouseTracking;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)setDelegate:(id)arg1;

@end
