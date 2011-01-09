/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKConversationSearcher, UIToolbar, CKConversationList, UITableView, CKService, UINavigationController, MFMailComposeViewController, CKTranscriptController;



@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, CKConversationSearcherDelegate>
{
    UINavigationController *_navigationController;
    UITableView *_table;
    CKTranscriptController *_transcriptController;
    UIToolbar *_buttonBar;
    NSUInteger _willBeMarkedReadCount;
    unsigned int _dirty : 1;
    unsigned int _isVisible : 1;
    unsigned int _isUpdatingDisabled : 1;
    CKService *_currentService;
    CKConversationList *_conversationList;
    MFMailComposeViewController *_mailComposeController;
    CKConversationSearcher *_searcher;
    BOOL _disableSMSFullDialog;
}

@property(retain) CKService *currentService;
@property CKConversationList *conversationList;

+ (void)_initializeSafeCategory;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (void)show:(BOOL)arg1;
- (NSInteger)selectedIndex;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)accessibilityLargeTextDidChange;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)applicationWillSuspend;
- (void)significantTimeChange;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldUseKeyWindowStack;
- (void)dealloc;
- (void)setConversationList:(id)arg1;
- (id)initWithNavigationController:(id)arg1 service:(id)arg2;
- (id)transcriptController;
- (void)_conversationWasMarkedAsRead:(id)arg1;
- (void)_conversationDidChange:(id)arg1;
- (void)_databaseFull:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_groupsChanged:(id)arg1;
- (void)updateNavigationItems;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)noteUnreadCountsChanged;
- (void)updateConversationList;
- (void)disableConversationListUpdates;
- (void)enableConversationListUpdates;
- (void)noteConversationListChanged;
- (void)showMessagesForAddress:(id)arg1 animate:(BOOL)arg2;
- (void)showNewMessageCompositionPanel:(BOOL)arg1;
- (void)hideNewMessageCompositionPanel:(BOOL)arg1;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2;
- (void)showConversationAndMessageForGroupRowID:(NSInteger)arg1 messageRowID:(NSInteger)arg2 partRowID:(NSInteger)arg3;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)hideSearchUI;
- (BOOL)resumeToConversation:(id)arg1 unsentComposition:(id)arg2;
- (BOOL)hasUnreadConversations;
- (BOOL)showUnreadConversations;
- (BOOL)isShowingCompositionPanel;
- (BOOL)isShowingEmptyCompositionPanel;
- (BOOL)isShowingTranscriptWithUnsentText;
- (void)composeButtonClicked:(id)arg1;
- (void)deleteButtonPressedForIndexPath:(id)arg1;
- (void)_displaySMSDatabaseFullWarning;
- (void)_checkIfDatabaseIsFull;
- (void)_showMailComposeSheet;
- (void)showMailComposeSheetForAutosavedMessage;
- (void)autosaveMailComposition;
- (void)showMailComposeSheetForAddress:(id)arg1;
- (id)searcherContentsController:(id)arg1;
- (id)searcher:(id)arg1 conversationForGroupRowID:(NSInteger)arg2;
- (void)searcher:(id)arg1 userDidSelectConversationGroupID:(NSInteger)arg2 messageRowID:(NSInteger)arg3 partRowID:(NSInteger)arg4;
- (id)conversationList;
- (id)currentService;
- (void)setCurrentService:(id)arg1;
- (void)didCancelComposition:(id)arg1;
- (void)updateTitle;

@end
