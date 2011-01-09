/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, UIToolbar, UITableView, <EKEventViewDelegate>, UIActionSheet, UIButton, NSString, EKEvent;



@interface EKEventViewController : UIViewController 
{
    EKEvent *_event;
    NSString *_eventId;
    UIActionSheet *_alertSheet;
    NSInteger _pendingStatus;
    <EKEventViewDelegate> *_delegate;
    id _editor;
    UIButton *_responseButtons[3];
    UIToolbar *_buttonBar;
    NSInteger _lastOrientation;
    id _currentEditItem;
    UITableView *_tableView;
    unsigned int _didAppear : 1;
    unsigned int _autoPop : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _allowsSubitems : 1;
    unsigned int _showsPreview : 1;
    unsigned int _forcePreview : 1;
    unsigned int _trustsStatus : 1;
    unsigned int _allowsInviteResponses : 1;
    unsigned int _showsAddToCalendar : 1;
    unsigned int _icsPreview : 1;
    unsigned int _needsReload : 1;
    NSArray *_items;
    NSArray *_currentSections;
    NSInteger _scrollToSection;
}

@property(retain) EKEvent *event;
@property BOOL allowsEditing;
@property BOOL allowsCalendarPreview;
@property(readonly) UITableView *tableView;
@property(retain) EKEventDetailItem *_currentEditItem;
@property <EKEventViewDelegate> *delegate;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (id)_items;
- (id)initWithEvent:(id)arg1;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (id)event;
- (void)setEvent:(id)arg1;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)tableView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)accessibilityLargeTextDidChange;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_updateNavBarAnimated:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_idealSize;
- (void)_pop;
- (BOOL)allowsSubitems;
- (void)setAllowsSubitems:(BOOL)arg1;
- (BOOL)allowsCalendarPreview;
- (BOOL)alwaysShowsCalendarPreview;
- (void)setAlwaysShowsCalendarPreview:(BOOL)arg1;
- (BOOL)isICSPreview;
- (void)setICSPreview:(BOOL)arg1;
- (BOOL)showsAddToCalendar;
- (void)setShowsAddToCalendar:(BOOL)arg1;
- (void)completeWithAction:(NSInteger)arg1;
- (void)setScrollToSection:(NSInteger)arg1;
- (NSInteger)scrollToSection;
- (void)set_currentEditItem:(id)arg1;
- (void)_storeChanged:(id)arg1;
- (void)_localeChanged;
- (void)_setupAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_updateFooterIfNeeded;
- (void)setupForEvent;
- (void)doneButtonPressed;
- (void)editEvent;
- (void)_markEventAsRead;
- (void)_saveStatus:(NSInteger)arg1 span:(NSInteger)arg2;
- (BOOL)_performSave:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_presentValidationAlert:(id)arg1;
- (void)_performDelete;
- (BOOL)_canDetachSingleOccurrence;
- (void)_presentDetachSheet;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)eventItemDidCommit:(id)arg1;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)_dismissEditor:(BOOL)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(NSInteger)arg2;
- (void)_prepareEventForEdit;
- (void)invokeInviteAction:(NSInteger)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_addToCalendarClicked:(id)arg1;
- (void)_updateResponseVisibility;
- (void)_updateResponse;
- (void)_selectButtonWithTag:(NSInteger)arg1;
- (void)_acceptButtonPressed:(id)arg1;
- (void)_maybeButtonPressed:(id)arg1;
- (void)_declineButtonPressed:(id)arg1;
- (void)_responseChanged:(id)arg1;
- (id)_currentEditItem;
- (void)setAllowsCalendarPreview:(BOOL)arg1;

@end
