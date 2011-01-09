/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIRemoveControlMinusButton, UIView;



@interface UIRemoveControl : UIView 
{
    UIView *_target;
    id _delegate;
    UIView *_removeConfirmationButton;
    UIRemoveControlMinusButton *_minusButton;
    NSString *_label;
    struct { 
        unsigned int removeButtonVisible : 1; 
        unsigned int removeConfirmationVisible : 1; 
        unsigned int removedFromTargetWhenHidden : 1; 
        unsigned int disableToggleRotate : 1; 
        unsigned int tableCellTarget : 1; 
        unsigned int alwaysHideRemoveButton : 1; 
        unsigned int editingStyle : 3; 
        unsigned int reserved : 23; 
    } _removeControlFlags;
}

+ (BOOL)removeConfirmationsVisibleInView:(id)arg1;
+ (void)hideAllRemoveConfirmationsInView:(id)arg1;
+ (float)removeButtonWidth;
+ (void)_initializeSafeCategory;

- (BOOL)removedFromTargetWhenHidden;
- (void)minusButtonDidHide:(id)arg1;
- (void)_minusButtonFadeAnimationStopped;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultRemoveButtonStartingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultRemoveButtonEndingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeButtonStartingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeButtonEndingFrame;
- (void)_confirmationAnimationDidEnd;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetContentBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_removeConfirmationStartingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_removeConfirmationEndingFrame;
- (void)_setRemoveConfirmationShowing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRemoveConfirmationVisible:(BOOL)arg1;
- (void)setRemoveConfirmationLabel:(id)arg1;
- (id)removeConfirmationButton;
- (BOOL)_isInsertControl;
- (void)_setTableViewCellEditingStyle:(NSInteger)arg1;
- (void)addConfirmationButtonSubview:(id)arg1 withWidth:(float)arg2 target:(id)arg3;
- (void)_hideRemoveConfirmation;
- (void)_showDeleteConfirmation:(id)arg1;
- (void)_doInsert:(id)arg1;
- (void)_doRemove:(id)arg1;
- (void)_shouldRemoveTarget;
- (void)_hideRemoveAnimationDone;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)setLabel:(id)arg1;
- (void)showRemoveButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRemoveConfirmationVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRemovedFromTargetWhenHidden:(BOOL)arg1;
- (void)_setInsertControl:(BOOL)arg1;
- (void)setAlwaysHideRemoveButton:(BOOL)arg1;
- (BOOL)isRemoveConfirmationVisible;
- (void)hideControlsUsingRemoveAnimation;
- (BOOL)isRemoveButtonVisible;
- (id)removeConfirmationView;
- (float)removeButtonAnimationDuration;
- (float)_verticalOffsetFromTarget;
- (void)isHighlighted;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithTarget:(id)arg1;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (id)_interceptEvent:(id)arg1;
- (id)_scriptingInfo;
- (void)setTarget:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setAlpha:(float)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
