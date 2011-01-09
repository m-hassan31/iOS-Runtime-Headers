/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface EmojiScrollView : UIScrollView 
{
    double _delay;
    BOOL _canDragToScroll;
}

@property double delay;

+ (void)_initializeSafeCategory;

- (void)_stopLookingForScrolling;
- (void)_lookForScrolling;
- (void)setDelay:(double)arg1;
- (double)delay;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (double)_touchDelayForScrollDetection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_accessibilityShouldAnimateScroll;
- (void)_accessibilityMovePage:(BOOL)arg1;
- (BOOL)_accessibilityIsScrollAncestor;
- (void)accessibilityScrollRightPage;
- (void)accessibilityScrollLeftPage;

@end
