/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonViewControllerDelegate>;



@interface ABPersonViewController : UIViewController 
{
    <ABPersonViewControllerDelegate> *_personViewDelegate;
    struct __CFArray { } *_displayedProperties;
    id _helper;
}

@property <ABPersonViewControllerDelegate> *personViewDelegate;
@property void *addressBook;
@property void *displayedPerson;
@property(copy) NSArray *displayedProperties;
@property BOOL allowsEditing;
@property BOOL shouldShowLinkedPeople;
@property BOOL allowsActions;
@property BOOL allowsSharing;
@property BOOL allowsAddToFavorites;
@property BOOL allowsDeletion;
@property BOOL allowsCancel;
@property BOOL allowsSounds;
@property BOOL allowsConferencing;
@property(retain) ABModel *model;
@property(retain) <ABStyleProvider> *styleProvider;
@property(copy) NSString *message;
@property(retain) UIFont *messageFont;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIView *customMessageView;
@property(retain) UIView *personHeaderView;
@property(retain) UIView *customHeaderView;
@property BOOL personHeaderViewScrolls;
@property(copy) NSString *attribution;
@property <ABPersonEditDelegate> *editDelegate;
@property BOOL shouldShowLinkingUI;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString *shareMessageBody;
@property(copy) NSString *shareMessageSubject;
@property BOOL appearsInLinkingPeoplePicker;
@property BOOL allowsSettingAsPreferredCardForName;

+ (struct __CFArray { }*)newCFArrayByUnwrappingIntegersInArray:(id)arg1;
+ (id)arrayByWrappingIntegersInCFArray:(struct __CFArray { }*)arg1;

- (void)setDisplayedProperties:(id)arg1;
- (id)displayedProperties;
- (void*)addressBook;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(NSInteger)arg4 withActionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 model:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 model:(id)arg3;
- (BOOL)shouldShowLinkedPeople;
- (void)peoplePickerLinkButtonTapped;
- (BOOL)appearsInLinkingPeoplePicker;
- (BOOL)shouldShowLinkingUI;
- (BOOL)allowsDeletion;
- (BOOL)isReadonly;
- (BOOL)allowsSharing;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsSounds;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (BOOL)allowsSettingAsPreferredCardForName;
- (id)personViewDelegate;
- (void)setMessageFont:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (id)customMessageView;
- (void)setCustomMessageView:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (id)attribution;
- (void)setAttribution:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)shareMessageBodyIsHTML;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageSubject;
- (void)setShareMessageSubject:(id)arg1;
- (void)setDisplayedPropertiesAsIntegers:(struct __CFArray { }*)arg1;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (BOOL)personHeaderViewScrolls;
- (void)setPersonHeaderViewScrolls:(BOOL)arg1;
- (void)shareContactByEmail:(id)arg1;
- (BOOL)manuallyLinkPerson:(void*)arg1;
- (BOOL)manuallyUnlinkPerson:(void*)arg1;
- (void)editCancel:(id)arg1;
- (void)cancelEditing:(BOOL)arg1;
- (void)pickerCancel:(id)arg1;
- (void)editAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2;
- (void)setPeopleForUnifiedCard:(id)arg1;
- (void)ignoreNextLocalChange;
- (float)ab_heightToFitForViewInPopoverView;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (id)editDelegate;
- (void)setEditDelegate:(id)arg1;
- (id)initWithModel:(id)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3;
- (NSInteger)abViewControllerType;
- (BOOL)allowsCancel;
- (BOOL)allowsActions;
- (void*)displayedPerson;
- (void)updateRecord;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)modelDatabaseChange:(id)arg1;
- (void)model:(id)arg1 localChangeWithInfo:(struct __CFDictionary { }*)arg2;
- (void)setModel:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)model;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (id)init;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)dealloc;
- (void)saveChanges;
- (id)initWithAddressBook:(void*)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)updateTitle;
- (void)updateNavigationButtons;
- (void)setAddressBook:(void*)arg1;
- (id)messageFont;
- (id)helper;

@end
