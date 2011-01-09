/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptTextFieldDelegate;



@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate>
{
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(readonly) UITextField *textField;


- (void)_textDidChange:(id)arg1;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)destroyNativeObject;
- (void)setupNativeObject;
- (id)textField;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)dealloc;

@end
