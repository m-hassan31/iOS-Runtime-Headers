/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UITouch;



@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol>
{
    NSMutableArray *_uncommittedTouches;
    UITouch *_activeTouch;
    UITouch *_shiftKeyTouch;
    UITouch *_swipeTouch;
}

@property(retain) UITouch *swipeTouch;
@property(retain) UITouch *shiftKeyTouch;
@property(retain) UITouch *activeTouch;


- (void)swipeGestureRecognized:(id)arg1;
- (void)addSwipeRecognizer;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (void)commitTouchesBeforeTouch:(id)arg1;
- (float)flickDistance;
- (id)swipeTouch;
- (void)setSwipeTouch:(id)arg1;
- (id)shiftKeyTouch;
- (void)setShiftKeyTouch:(id)arg1;
- (id)activeTouch;
- (void)setActiveTouch:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (void)changeToKeyplane:(id)arg1;
- (BOOL)doesKeyCharging;
- (BOOL)shouldShowIndicator;
- (id)activationIndicatorView;
- (void)deactivateActiveKeys;
- (BOOL)performReturnAction;
- (void)showKeyboardType:(NSInteger)arg1 withAppearance:(NSInteger)arg2;
- (BOOL)usesAutoShift;
- (void)phraseBoundaryDidChange;
- (void)didClearInput;
- (void)restoreDefaultsForAllKeys;
- (BOOL)canProduceString:(id)arg1;
- (float)hitBuffer;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)shiftKeyRequiresImmediateUpdate;
- (BOOL)isShiftKeyBeingHeld;
- (void)setAutoshift:(BOOL)arg1;
- (void)updateLocalizedKeys;
- (id)candidateList;
- (void)updateReturnKey;
- (void)longPressAction;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setShift:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
