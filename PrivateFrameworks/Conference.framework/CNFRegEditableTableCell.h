/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */



@interface CNFRegEditableTableCell : PSEditableTableCell 
{
    SEL _emptyStateSelector;
    id _textChangeObserver;
    BOOL _textFieldIsEmpty;
}


- (void)_updateTextFieldOffsetWithDict:(id)arg1;
- (void)notifyTextFieldEmptyStateChanged:(BOOL)arg1;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3;
- (BOOL)_textFieldIsCurrentlyEmpty;
- (void)_handleTextChanged;
- (void)_startListeningForTextChanges;
- (void)_stopListeningForTextChanges;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
