/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIWindow, UIView;



@interface UITouch : NSObject 
{
    double _timestamp;
    NSInteger _phase;
    NSInteger _savedPhase;
    NSUInteger _tapCount;
    UIWindow *_window;
    UIView *_view;
    UIView *_gestureView;
    NSMutableArray *_gestureRecognizers;
    struct CGPoint { 
        float x; 
        float y; 
    } _locationInWindow;
    struct CGPoint { 
        float x; 
        float y; 
    } _previousLocationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isWarped : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
    } _touchFlags;
}

@property double timestamp;
@property NSInteger phase;
@property NSUInteger tapCount;
@property BOOL isTap;
@property BOOL isWarped;
@property BOOL sentTouchesEnded;
@property(retain) UIWindow *window;
@property(retain) UIView *view;
@property(retain) UIView *gestureView;
@property(readonly) double timestamp;
@property(readonly) NSInteger phase;
@property(readonly) NSUInteger tapCount;
@property(retain,readonly) UIWindow *window;
@property(retain,readonly) UIView *view;
@property(copy,readonly) NSArray *gestureRecognizers;
@property float _pathMajorRadius; /* unknown property attribute: S_setPathMajorRadius: */
@property unsigned char _pathIdentity; /* unknown property attribute: S_setPathIdentity: */
@property unsigned char _pathIndex; /* unknown property attribute: S_setPathIndex: */

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(NSInteger)arg2 view:(id)arg3;

- (void)setIsDelayed:(BOOL)arg1;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (void)_loadStateFromTouch:(id)arg1;
- (float)_pathMajorRadius;
- (unsigned char)_pathIndex;
- (id)_phaseDescription;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (NSInteger)_compareIndex:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (BOOL)sentTouchesEnded;
- (BOOL)_isFirstTouchForView;
- (NSInteger)info;
- (NSUInteger)tapCount;
- (double)timestamp;
- (BOOL)isDelayed;
- (void)_pushPhase:(NSInteger)arg1;
- (void)_popPhase;
- (id)_gestureRecognizers;
- (id)description;
- (void)_clearGestureRecognizers;
- (void)_addGestureRecognizer:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (id)gestureRecognizers;
- (void)setIsTap:(BOOL)arg1;
- (void)setTapCount:(NSUInteger)arg1;
- (NSInteger)phase;
- (BOOL)isTap;
- (void)setPhase:(NSInteger)arg1;
- (id)gestureView;
- (void)setGestureView:(id)arg1;
- (void)_setPathIndex:(unsigned char)arg1;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathMajorRadius:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWindow:(id)arg1;
- (void)setIsWarped:(BOOL)arg1;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (unsigned char)_pathIdentity;
- (BOOL)isWarped;
- (id)window;
- (void)dealloc;
- (id)_mk_delayedCopy;

@end
