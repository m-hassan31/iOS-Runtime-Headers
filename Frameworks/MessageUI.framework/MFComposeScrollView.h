/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableSet, UIView, UIGestureRecognizer;



@interface MFComposeScrollView : UIScrollView 
{
    UIGestureRecognizer *_singleTapGestureRecognizer;
    NSMutableSet *_disabledSubviews;
    UIView *_tappedView;
    struct CGPoint { 
        float x; 
        float y; 
    } _tapLocation;
    NSInteger _scrollBlocked;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _selectedRange;
    BOOL _catchesSingleTap;
    BOOL _shouldScrollToFirstResponder;
}

@property BOOL catchesSingleTap;
@property BOOL shouldScrollToFirstResponder;
@property CGPoint tapLocation;
@property(retain) UIView *tappedView;


- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)catchesSingleTap;
- (void)performDelayedTap:(BOOL)arg1;
- (void)disableSubview:(id)arg1;
- (void)enableSubview:(id)arg1;
- (BOOL)shouldScrollToFirstResponder;
- (struct CGPoint { float x1; float x2; })tapLocation;
- (void)setTapLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)tappedView;
- (void)setTappedView:(id)arg1;
- (void)beginBlockingScroll;
- (void)endBlockingScroll;
- (void)setCatchesSingleTap:(BOOL)arg1;
- (void)setShouldScrollToFirstResponder:(BOOL)arg1;
- (void)singleTap:(id)arg1;

@end
