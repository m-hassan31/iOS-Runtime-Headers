/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */



@interface UITextContentViewAccessibility : UITextContentViewAccessibility_super 
{
}

+ (void)_initializeSafeCategory;

- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (void)webViewDidChange:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilityCurrentSelectionRange;

@end
