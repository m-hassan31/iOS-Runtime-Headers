/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class UIBarButtonItem, UIProgressIndicator, NSTimer;



@interface AccountSettingsUIDetailController : PSListController 
{
    UIProgressIndicator *_progressIndicator;
    NSTimer *_idleJiggleTimer;
    void *_powerAssertion;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _appearedBefore;
    BOOL _addedToTaskList;
}

+ (BOOL)shouldPresentAsModalSheet;

- (void)setCellsChecked:(BOOL)arg1;
- (id)specifiers;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5;
- (id)confirmDeleteAccountWithDataclasses:(id)arg1 context:(id)arg2;
- (void)setTaskCompletionEnabled:(BOOL)arg1;
- (void)dismissWithAnimation:(BOOL)arg1;
- (void)reloadParentSpecifier;
- (void)startValidationWithPrompt:(id)arg1;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)removeParentSpecifier;
- (void)viewDidLoad;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)init;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)dealloc;
- (BOOL)presentedAsModalSheet;
- (void)updateValidationPrompt:(id)arg1;
- (void)reloadParentSpecifiers;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(NSInteger)arg5 context:(id)arg6;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(NSInteger)arg4 context:(id)arg5;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(NSInteger)arg4 context:(id)arg5;
- (void)_layoutProgressIndicator;
- (void)_jiggleIdleTimer;
- (void)_preventSleepAndDimming:(BOOL)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)doneButtonClicked:(id)arg1;

@end
