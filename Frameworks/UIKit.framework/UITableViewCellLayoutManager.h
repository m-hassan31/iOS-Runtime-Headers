/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UITableViewCellLayoutManager : NSObject 
{
}

+ (id)layoutManagerForTableViewCellStyle:(NSInteger)arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editControlRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_reorderControlRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_reorderSeparatorRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingAccessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3;
- (float)defaultTextLabelFontSizeForCell:(id)arg1;
- (float)defaultDetailTextLabelFontSizeForCell:(id)arg1;
- (id)defaultImageViewForCell:(id)arg1;
- (id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2;
- (id)defaultLabelForCell:(id)arg1;
- (id)defaultEditableTextFieldForCell:(id)arg1;
- (float)contentIndentationForCell:(id)arg1;
- (BOOL)editControlShouldAppearForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)editControlShouldFadeForCell:(id)arg1;
- (BOOL)reorderControlShouldAppearForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)reorderControlShouldFadeForCell:(id)arg1;
- (BOOL)reorderSeparatorShouldAppearForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)reorderSeparatorShouldFadeForCell:(id)arg1;
- (BOOL)accessoryShouldAppearForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)accessoryShouldFadeForCell:(id)arg1;
- (BOOL)editingAccessoryShouldAppearForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (BOOL)editingAccessoryShouldFadeForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deleteConfirmationRectForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2;
- (id)textLabelForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (id)imageViewForCell:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForCell:(id)arg1 forState:(NSUInteger)arg2;
- (void)cell:(id)arg1 willTransitionToState:(NSUInteger)arg2;
- (void)cell:(id)arg1 didTransitionToState:(NSUInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2;
- (void)layoutSubviewsOfCell:(id)arg1;

@end
