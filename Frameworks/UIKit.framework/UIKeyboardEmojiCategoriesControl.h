/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIImage;



@interface UIKeyboardEmojiCategoriesControl : UIControl 
{
    NSInteger _selected;
    NSInteger _total;
    UIImage *_darkDivider;
    UIImage *_plainDivider;
    UIImage *_selectedDivider;
    NSMutableArray *_segmentViews;
    NSMutableArray *_dividerViews;
}

@property(readonly) NSInteger numSegments;
@property NSInteger selectedIndex;

+ (id)categoryControl;
+ (void)_initializeSafeCategory;

- (NSInteger)numSegments;
- (NSInteger)selectedIndex;
- (void)setSelectedIndex:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
