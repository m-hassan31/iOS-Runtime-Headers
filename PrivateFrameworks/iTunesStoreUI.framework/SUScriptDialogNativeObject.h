/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUScriptDialogNativeObject : SUScriptNativeObject <UIActionSheetDelegate, UIAlertViewDelegate>
{
}


- (void)showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)showSheet;
- (void)_addScriptButton:(id)arg1 toAlert:(id)arg2 atIndex:(NSInteger)arg3;
- (id)_newActionSheetForDialog:(id)arg1;
- (void)_tearDownForDismissWithButtonIndex:(NSInteger)arg1;
- (void)destroyNativeObject;
- (void)dismiss;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)show;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;

@end
