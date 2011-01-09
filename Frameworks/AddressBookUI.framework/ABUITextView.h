/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABSwellTextView, UIColor;



@interface ABUITextView : UITextView 
{
    float _lastContentHeight;
    BOOL _isHighlighted;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    BOOL _disallowsSetContentOffset;
    BOOL _informParentOfContentSizeChange;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _pinnedCursorPosition;
    ABSwellTextView *_parent;
}

@property BOOL disallowsSetContentOffset;
@property(retain) UIColor *highlightedTextColor;
@property(getter=isHighlighted) BOOL highlighted;
@property ABSwellTextView *parent;

+ (void)_initializeSafeCategory;

- (void)setDisallowsSetContentOffset:(BOOL)arg1;
- (void)_secretSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)disallowsSetContentOffset;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)becomeFirstResponder;
- (void)setTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end
