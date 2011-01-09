/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;



@interface UITableViewCellSelectedBackground : UIView 
{
    NSInteger _selectionStyle;
    UIColor *_multiselectBackgroundColor;
    BOOL _multiselect;
}

@property(getter=isMultiselect) BOOL multiselect;
@property(retain) UIColor *multiselectBackgroundColor;
@property NSInteger selectionStyle;


- (void)setMultiselect:(BOOL)arg1;
- (BOOL)isMultiselect;
- (id)multiselectBackgroundColor;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (NSInteger)selectionStyle;
- (void)setSelectionStyle:(NSInteger)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
