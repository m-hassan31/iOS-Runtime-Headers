/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class UIView;



@interface UIAccessibilityElementMockSlider : UIAccessibilityElement 
{
    UIView *_view;
    id _delegate;
}

@property id delegate;
@property(retain) UIView *view;


- (struct CGPoint { float x1; float x2; })_accessibilityMinScrubberPosition;
- (struct CGPoint { float x1; float x2; })_accessibilityMaxScrubberPosition;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)setView:(id)arg1;
- (id)view;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
