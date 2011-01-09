/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@class UIAlertView, DAAccount, NSString;



@interface DASettingsAccountController : AccountSettingsUIDetailController <DAValidityCheckConsumer, DAAutoDiscoveryConsumer, UIActionSheetDelegate, UIAlertViewDelegate>
{
    BOOL _accountNeedsAdd;
    NSInteger _purposeInLife;
    BOOL _setupComplete;
    DAAccount *_account;
    NSString *_chosenType;
    NSString *_placeHolder;
    id _confirmUnvalidatedAlertOrSheet;
    id _confirmDeleteAccountAlertOrSheet;
    UIAlertView *_sslFailureView;
    BOOL _attemptedAutodiscovery;
    BOOL _attemptedValidation;
    BOOL _validating;
    BOOL _validatedSuccessfully;
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _needsSave;
}

@property BOOL attemptedValidation;
@property BOOL needsSave;


- (id)account;
- (id)specifiers;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)finishedAccountSetup;
- (BOOL)validateAccount;
- (BOOL)haveEnoughValues;
- (void)propertyValueChanged:(id)arg1;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (BOOL)isRunningFromMobileMailApp;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)dealloc;
- (void)reloadAccount;
- (void)showSSLFailureView;
- (void)didConfirmTryWithoutSSL:(BOOL)arg1;
- (void)didConfirmSaveUnvalidatedAccount:(BOOL)arg1;
- (void)_confirmSaveUnvalidatedAccount;
- (BOOL)_beginAccountAutodiscovery;
- (void)_beginAccountValidation;
- (BOOL)dismissesAfterInitialSetup;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (void)_dismissAndUpdateParent;
- (void)_deleteAccount;
- (void)_saveAccountDismissWhenDone:(BOOL)arg1;
- (id)localizedEnterAccountInfoString;
- (BOOL)attemptedValidation;
- (void)setAttemptedValidation:(BOOL)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)confirmDeleteAccount:(id)arg1;
- (void)didConfirmDeleteAccount:(BOOL)arg1;
- (BOOL)needsSave;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (void)showProgress;
- (void)hideProgressWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)showIdenticalAccountFailureView;
- (NSInteger)indexOfCurrentlyEditingCell;
- (id)currentlyEditingCell;
- (id)accountFromSpecifier;
- (id)newDefaultAccount;
- (id)autodiscoverySpecifiers;
- (id)accountSpecifiers;
- (BOOL)autodiscoverAccount;
- (BOOL)transitionsAfterInitialSetup;
- (id)_defaultAccountDescription;
- (id)localizedValidationFailureTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedEnablingAccountString;
- (id)localizedDisablingAccountString;
- (id)localizedAccountSetupTitleString;
- (id)localizedAccountTitleString;
- (void)reloadAccountOnSpecifier;
- (void)_accountsChanged:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)updateDoneButton;
- (void)doneButtonClicked:(id)arg1;

@end
