/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel;



@interface _UILabeledPushButton : UIThreePartButton 
{
    UILabel *_textLabel;
    float _labelFontSize;
    float _labelOffset;
}

@property float labelFontSize;
@property float labelOffset;

+ (void)_initializeSafeCategory;

- (float)labelOffset;
- (void)setLabelFontSize:(float)arg1;
- (float)labelFontSize;
- (id)label;
- (void)setLabelOffset:(float)arg1;
- (void)setLabel:(id)arg1;
- (void)drawTitleAtPoint:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2;
- (void)_drawImageAndTextPartInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)accessibilityLabel;

@end
