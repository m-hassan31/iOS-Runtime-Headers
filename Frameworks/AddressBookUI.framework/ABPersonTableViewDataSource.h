/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDictionary, NSMutableArray, ABNamePropertyGroup, ABPersonTableTinyActionCell, ABPersonTableFooterView, <ABStyleProvider>, ABPersonTableHeaderView, UIDatePicker, ABPersonCellLayoutManager, UITableView, NSMutableDictionary, UILabel, <ABPersonTableViewDataSourceDelegate>, ABPersonTableActionDataSource, ABActionsController, NSArray, UIResponder, ABMultiCellContentView, NSIndexPath, UITableViewCell, AccountsManager, UIView;



@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, UIActionSheetDelegate, ABPersonTableHeaderViewDelegate, ABPersonTableTinyActionDelegate, ABPickerViewControllerDelegate, ABDatePickerViewControllerDismissDelegate, ABDatePickerPresentationDelegate, ABTabOrderDelegate, ABMultiCellContentViewUpdateDelegate, ABPersonTableActionDelegate, ABPersonCellLayoutManagerDelegate, ABPersonImageDataDelegate, ABPrimaryValueDelegate>
{
    AccountsManager *_accountsManager;
    ABActionsController *_actionsController;
    BOOL _allowsDeletion;
    BOOL _allowsEditing;
    BOOL _allowsActions;
    BOOL _allowsAddToFavorites;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsSounds;
    BOOL _allowsSharing;
    BOOL _allowsConferencing;
    BOOL _shouldShowLinkingUI;
    BOOL _shouldShowAddLinkedContactCell;
    BOOL _shouldShowContactSourcesStringAsMessage;
    BOOL _updateShouldShowAddLinkedContactCell;
    struct __CFArray { } *_displayedProperties;
    struct __CFArray { } *_optionalProperties;
    struct __CFArray { } *_additionalProperties;
    NSMutableArray *_additionalLabels;
    BOOL _attemptDelayedBecomeFirstResponder;
    NSIndexPath *_lastActiveMultiCellIndexPath;
    ABMultiCellContentView *_lastActiveMultiCellContentView;
    ABMultiCellContentView *_multiCellContentViewForWillEndEditing;
    ABMultiCellContentView *_pinningMultiCellContentViewAlternate;
    NSIndexPath *_pinningMultiCellIndexPath;
    NSIndexPath *_pinningMultiCellRelativeIndexPath;
    UIResponder *_pinningResponder;
    BOOL _isPinningLocked;
    void *_addressBook;
    NSArray *_people;
    NSMutableDictionary *_propertyGroupsStore;
    NSMutableDictionary *_unusedPropertyGroupsStore;
    NSMutableArray *_editablePropertyGroups;
    NSMutableArray *_propertyGroups;
    NSMutableArray *_linkedCardInfos;
    struct __CFSet { } *_addNewValuePropertiesStore;
    struct __CFSet { } *_addNewValueProperties;
    ABNamePropertyGroup *_namePropertyGroup;
    NSInteger _actionSheetType;
    ABPersonTableActionDataSource *_actionDataSource;
    UITableView *_tableView;
    ABPersonTableTinyActionCell *_tinyActionCell;
    UILabel *_noValueLabel;
    ABPersonTableHeaderView *_headerView;
    UIView *_customPersonTableHeaderView;
    BOOL _tableHeaderViewScrolls;
    UIView *_notesHeaderView;
    UIDatePicker *_datePicker;
    ABPersonTableFooterView *_footerView;
    NSInteger _primaryProperty;
    NSInteger _highlightedValueProperty;
    NSInteger _highlightedValueIdentifier;
    void *_highlightedValuePerson;
    BOOL _highlightedValueIsImportant;
    BOOL _actionShouldPickHighlightedValue;
    NSInteger _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    <ABStyleProvider> *_styleProvider;
    <ABPersonTableViewDataSourceDelegate> *_delegate;
    UITableViewCell *_partiallySelectedCell;
    ABPersonCellLayoutManager *_cellLayoutManager;
    UIView *_currentTableHeaderView;
    UIView *_currentTableFooterView;
    UIView *_tableHeaderViewContainer;
    struct __CFDictionary { } *_currentImageData;
    void *_personForImageData;
    BOOL _hasImageChanges;
    BOOL _didChangePreferredPersonForImage;
    BOOL _isSettingFirstResponder;
    BOOL _isEndingEditingTransactions;
    float _lastAdjustment;
    BOOL _viewControllerWillSlideOut;
    NSInteger _customKeyboardOutDirection;
    NSDictionary *_cachedKeyboardInfo;
    BOOL _isEditing;
}

@property(readonly) BOOL canSave;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasNameChanges;
@property(copy) NSString *alternateName;
@property(copy) NSString *message;
@property(retain) UIFont *messageFont;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIView *customMessageView;
@property(readonly) ABPersonImageView *personImageView;
@property(retain) UIView *personHeaderView;
@property(retain) UIView *customPersonTableHeaderView;
@property(readonly) ABPersonTableHeaderView *tableHeaderView;
@property(getter=isEditing) BOOL editing;
@property(readonly) NSInteger primaryProperty;
@property(readonly) NSString *attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(readonly) BOOL isPinning;
@property NSInteger customKeyboardOutDirection;
@property BOOL viewControllerWillSlideOut;
@property(retain) UIResponder *pinningResponder;
@property(retain) NSIndexPath *pinningMultiCellRelativeIndexPath;
@property(retain) NSIndexPath *pinningMultiCellIndexPath;
@property(retain) ABMultiCellContentView *pinningMultiCellContentViewAlternate;
@property(retain) ABMultiCellContentView *multiCellContentViewForWillEndEditing;
@property(retain) ABMultiCellContentView *lastActiveMultiCellContentView;
@property(retain) NSIndexPath *lastActiveMultiCellIndexPath;
@property(retain) UITableViewCell *partiallySelectedCell;
@property BOOL tableHeaderViewScrolls;
@property(retain) <ABStyleProvider> *styleProvider;
@property(readonly) id insertionLabel;
@property(readonly) id insertionValue;
@property(readonly) NSInteger insertionProperty;
@property BOOL actionShouldPickHighlightedValue;
@property BOOL highlightedValueIsImportant;
@property void *highlightedValuePerson;
@property NSInteger highlightedValueIdentifier;
@property NSInteger highlightedValueProperty;
@property __CFArray *displayedProperties;
@property BOOL shouldShowContactSourcesStringAsMessage;
@property BOOL shouldShowLinkingUI;
@property BOOL allowsSounds;
@property BOOL allowsDeletion;
@property BOOL allowsConferencing;
@property BOOL allowsSharing;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsAddToFavorites;
@property BOOL allowsEditing;
@property BOOL allowsActions;
@property(retain) UITableView *tableView;
@property <ABPersonTableViewDataSourceDelegate> *delegate;
@property(retain) UIView *currentTableFooterView;
@property(retain) UIView *currentTableHeaderView;
@property void *addressBook;
@property(retain) NSArray *people;


- (void)setDisplayedProperties:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)displayedProperties;
- (void*)addressBook;
- (id)footerView;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(NSInteger)arg2 editableFlag:(BOOL)arg3;
- (NSUInteger)sectionForAction:(id)arg1;
- (void)_getPropertyGroup:(id*)arg1 index:(NSInteger*)arg2 editableFlag:(BOOL*)arg3 atIndexPath:(id)arg4;
- (BOOL)_isReadonlyAtIndexPath:(id)arg1;
- (BOOL)_isFavoriteOfType:(NSInteger)arg1 inPropertyGroup:(id)arg2 atIndex:(NSInteger)arg3;
- (id)linkedCardInfos;
- (BOOL)_shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1;
- (void)showLinkedCardAtRow:(NSInteger)arg1;
- (id)_contactSourcesString;
- (void)updateContactSourcesStringIfNeeded;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_footerViewFrame;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (id)titleForNoValueWithProperty:(NSInteger)arg1;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1 invalidatePropertyData:(BOOL)arg2;
- (void)notifyHeaderViewHeightDidChange;
- (id)controllerMainView;
- (void)updateTableHeaderViewAnimated:(BOOL)arg1;
- (void)_endTableViewUpdatesWithoutScroll;
- (id)newFooterView;
- (void)updateTableFooterView;
- (void)updateTableFooterViewAnimated:(BOOL)arg1;
- (NSInteger)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(NSInteger)arg2 withPropertyGroups:(id)arg3 whenEditing:(BOOL)arg4;
- (NSInteger)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (NSInteger)sectionIndexForProperty:(NSInteger)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (id)sectionAnimationsDictionaryForEditing:(BOOL)arg1;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)containerView:(id)arg1 setContentView:(id)arg2 animated:(BOOL)arg3;
- (void)setCurrentTableHeaderView:(id)arg1;
- (void)setCurrentTableHeaderView:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentTableFooterView:(id)arg1;
- (void)setCurrentTableFooterView:(id)arg1 animated:(BOOL)arg2;
- (void)updateHeadersAndFootersForEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (struct __CFDictionary { }*)currentImageData;
- (void)setCurrentImageData:(struct __CFDictionary { }*)arg1;
- (void)markImagesWith:(id)arg1 forPerson:(void*)arg2;
- (void)resetImageData;
- (void)updateRecordImages;
- (id)imageDataWithFormat:(NSInteger)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3 isRemoved:(BOOL*)arg4;
- (void*)personForImageDataExcludingPeople:(id)arg1;
- (BOOL)didChangePreferredPersonForImage;
- (void)presentDifferentiationSheetIfNeededForAction:(id)arg1 withPropertyGroup:(id)arg2;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(NSInteger)arg3 actionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(NSInteger)arg3 whenEditing:(BOOL)arg4;
- (BOOL)shouldShowActionForProperty:(NSInteger)arg1 assumeThatPropertyHasSection:(BOOL)arg2;
- (BOOL)shouldShowActionForProperty:(NSInteger)arg1;
- (BOOL)shouldShowAction:(id)arg1 excludingProperty:(NSInteger)arg2;
- (NSInteger)actionCountForGrouping:(NSInteger)arg1 inSection:(NSInteger)arg2 excludingProperty:(NSInteger)arg3 outExcludedIndexPaths:(id*)arg4;
- (NSInteger)actionCountForBottomGroupingExcludingProperty:(NSInteger)arg1;
- (NSInteger)actionCountForTopGroupingInSection:(NSInteger)arg1 excludingProperty:(NSInteger)arg2 outExcludedIndexPaths:(id*)arg3;
- (NSInteger)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2 assumeThatPropertyHasSection:(BOOL)arg3;
- (NSInteger)actionGroupingCountForPropertyGroup:(id)arg1 whenEditing:(BOOL)arg2;
- (BOOL)isPropertyDisplayed:(NSInteger)arg1;
- (BOOL)hasPhoneValue;
- (BOOL)allowsFaceTimeFavorite;
- (BOOL)allowsVoiceFavorite;
- (BOOL)shouldShowAddToFavoritesAction;
- (void)sendTextMessage:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)shareContactButtonClicked:(id)arg1;
- (void)addToFavoritesButtonClicked:(id)arg1;
- (void)reloadBottomActionCellAnimated:(BOOL)arg1;
- (void)reloadBottomActionDataForFavorites:(BOOL)arg1 texting:(BOOL)arg2 sharing:(BOOL)arg3 conferencing:(BOOL)arg4;
- (void)reloadBottomActionsAnimated:(BOOL)arg1;
- (void)reloadBottomActions;
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(NSInteger)arg1 inPropertyGroup:(id)arg2 entryType:(NSInteger)arg3;
- (void)reloadPrimaryPropertyActionsSection;
- (void)setAllowsAddToFavorites:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSendingTextMessage:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSharing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)reloadConferencing;
- (void)setAllowsConferencing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)_conferenceHistoryChanged:(id)arg1;
- (id)tinyActionCell;
- (void)deleteButtonClicked:(id)arg1;
- (void)valueAtIndex:(NSInteger)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(BOOL)arg4;
- (void)setInsertionLabel:(id)arg1;
- (void)setInsertionValue:(id)arg1;
- (void)_resetAddNewValueCells;
- (BOOL)usesAddNewValueCellForProperty:(NSInteger)arg1;
- (BOOL)shouldUseAddNewValueCellForProperty:(NSInteger)arg1;
- (void)setShouldUseAddNewValueCell:(BOOL)arg1 forProperty:(NSInteger)arg2;
- (void)swapAddNewValueCellForProperty:(NSInteger)arg1 atIndexPath:(id)arg2;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)addFieldCellSelected:(id)arg1;
- (id)_indexPathForHeaderViewRow:(NSUInteger)arg1;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)updateByAddingFieldForProperty:(NSInteger)arg1 whenEditing:(BOOL)arg2;
- (void)addToContactsButtonClicked:(id)arg1;
- (void)addFieldAction:(id)arg1;
- (void)addFieldTouchDown:(id)arg1;
- (void)addFieldTouchCancel:(id)arg1;
- (NSInteger)tableViewRowAnimationForUpdateAction:(NSUInteger)arg1 isFirstRow:(BOOL)arg2;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (void*)policyForPerson:(void*)arg1;
- (BOOL)isPropertyOptional:(NSInteger)arg1;
- (struct __CFArray { }*)newAdditionalProperties;
- (struct __CFArray { }*)additionalProperties;
- (void)invalidateAdditionalProperties;
- (void)invalidateLinkedCardInfos;
- (void)resetPropertyGroupStores;
- (id)propertyGroupForProperty:(NSInteger)arg1 createIfEmpty:(BOOL)arg2;
- (id)displayedPropertyGroupForProperty:(NSInteger)arg1 whenEditing:(BOOL)arg2;
- (id)newPropertyGroupsForEditing:(BOOL)arg1 withDisplayedProperties:(struct __CFArray { }*)arg2;
- (id)newPropertyGroupsForEditing:(BOOL)arg1;
- (id)propertyGroupsForEditing:(BOOL)arg1;
- (void)invalidateAllPropertyGroups;
- (void)invalidatePropertyGroupsForEditing:(BOOL)arg1;
- (BOOL)isPinning;
- (void)cancelPinning;
- (void)setLastActiveMultiCellIndexPath:(id)arg1;
- (void)setLastActiveMultiCellContentView:(id)arg1;
- (BOOL)abTableView:(id)arg1 isValidIndexPath:(id)arg2;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1 becomeFirstResponder:(BOOL)arg2;
- (NSInteger)editingSectionForNonEditingSection:(NSInteger)arg1;
- (void)indexOfFirstPropertyGroupSection:(NSInteger*)arg1 lastPropertyGroupSection:(NSInteger*)arg2 addFieldSection:(NSInteger*)arg3 linkingUISection:(NSInteger*)arg4 primaryPropertyActionsSection:(NSInteger*)arg5 topGroupingActionSection:(NSInteger*)arg6 bottomGroupingActionSection:(NSInteger*)arg7 cardActionsSection:(NSInteger*)arg8 cardActionsSectionCount:(NSInteger*)arg9 totalSectionCount:(NSInteger*)arg10 whenEditing:(BOOL)arg11;
- (NSInteger)indexOfLinkingUISectionWhenEditing:(BOOL)arg1;
- (NSInteger)numberOfSectionsWhenEditing:(BOOL)arg1;
- (NSInteger)numberOfRowsInSection:(NSInteger)arg1 whenEditing:(BOOL)arg2;
- (id)cellForTableView:(id)arg1 ofClass:(Class)arg2 withReuseIdentifier:(id)arg3 allowDequeing:(BOOL)arg4;
- (void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(NSInteger)arg2 isInsertionIndex:(BOOL)arg3 inTableView:(id)arg4;
- (id)cellLayoutManager;
- (id)newAccessoryViewWhenEditing:(BOOL)arg1 forDataProvider:(id)arg2 index:(NSInteger)arg3 editableFlag:(BOOL)arg4;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(NSInteger*)arg6;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(NSInteger)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(NSInteger*)arg6;
- (void)tableView:(id)arg1 cell:(id*)arg2 orTag:(NSInteger*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(BOOL)arg5;
- (void)performPersonTableActionWithSection:(NSInteger)arg1 row:(NSInteger)arg2;
- (BOOL)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)_delayedKeyboardWillShow:(id)arg1;
- (void)_delayedKeyboardWillHide:(id)arg1;
- (void)_registerForKeyboardNotifications;
- (void)_unregisterForKeyboardNotifications;
- (BOOL)personTableTinyActionCell:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableHeaderView:(id)arg1 imageViewWasSelected:(id)arg2;
- (void)presentDifferentiationSheetForAction:(id)arg1;
- (void)action:(id)arg1 willShowButton:(id)arg2 forValueAtIndex:(NSInteger)arg3 inPropertyGroup:(id)arg4;
- (BOOL)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2;
- (BOOL)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2;
- (id)capitalizedTitleForContentView:(id)arg1;
- (id)datePickerForDateField:(id)arg1;
- (BOOL)dateField:(id)arg1 shouldPresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePrepareToPresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegatePresentDatePicker:(id)arg2;
- (void)dateField:(id)arg1 delegateDismissDatePicker:(id)arg2;
- (void)datePickerViewControllerWillDisappear:(id)arg1;
- (BOOL)ABTabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)selectLabelPartForCell:(id)arg1;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectWholePartForCell:(id)arg1;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occupiedCorners:(NSUInteger)arg2 forCell:(id)arg3;
- (void)_multiCellContentView:(id)arg1 selectedLabel:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedCountry:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedService:(id)arg2;
- (void)_multiCellContentView:(id)arg1 selectedRingtone:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesBeganForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesEndedForView:(id)arg2;
- (void)multiCellContentView:(id)arg1 touchesCancelledForView:(id)arg2;
- (BOOL)multiCellContentView:(id)arg1 entryFieldShouldBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 entryFieldDidBeginEditing:(id)arg2;
- (void)multiCellContentView:(id)arg1 entryField:(id)arg2 didUpdateValue:(id)arg3 forKey:(id)arg4;
- (void)multiCellContentView:(id)arg1 entryFieldDidEndEditing:(id)arg2;
- (void)multiCellContentViewDidEndEditing:(id)arg1;
- (void)multiCellContentView:(id)arg1 willResizeAnimated:(BOOL)arg2;
- (void)multiCellContentView:(id)arg1 didResizeAnimated:(BOOL)arg2;
- (void)multiCellContentViewWillShowDeleteConfirmation:(id)arg1;
- (void)multiCellContentViewWillHideDeleteConfirmation:(id)arg1;
- (BOOL)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(NSInteger)arg2;
- (NSInteger)customKeyboardOutDirection;
- (BOOL)viewControllerWillSlideOut;
- (id)pinningResponder;
- (void)setPinningResponder:(id)arg1;
- (id)pinningMultiCellRelativeIndexPath;
- (void)setPinningMultiCellRelativeIndexPath:(id)arg1;
- (id)pinningMultiCellIndexPath;
- (void)setPinningMultiCellIndexPath:(id)arg1;
- (id)pinningMultiCellContentViewAlternate;
- (void)setPinningMultiCellContentViewAlternate:(id)arg1;
- (id)multiCellContentViewForWillEndEditing;
- (void)setMultiCellContentViewForWillEndEditing:(id)arg1;
- (id)lastActiveMultiCellContentView;
- (id)lastActiveMultiCellIndexPath;
- (id)partiallySelectedCell;
- (void)setPartiallySelectedCell:(id)arg1;
- (BOOL)tableHeaderViewScrolls;
- (id)insertionLabel;
- (BOOL)highlightedValueIsImportant;
- (void)setHighlightedValueIsImportant:(BOOL)arg1;
- (void*)highlightedValuePerson;
- (void)setHighlightedValuePerson:(void*)arg1;
- (NSInteger)highlightedValueIdentifier;
- (void)setHighlightedValueIdentifier:(NSInteger)arg1;
- (NSInteger)highlightedValueProperty;
- (void)setHighlightedValueProperty:(NSInteger)arg1;
- (BOOL)shouldShowContactSourcesStringAsMessage;
- (id)currentTableFooterView;
- (id)currentTableHeaderView;
- (id)_notesHeaderView;
- (id)_headerView;
- (BOOL)_shouldShowAddLinkedContactCell;
- (id)accountsManager;
- (void)setPeople:(id)arg1;
- (void)setShouldShowContactSourcesStringAsMessage:(BOOL)arg1;
- (void)reloadFavoritesData;
- (id)propertyGroupForProperty:(NSInteger)arg1;
- (void)updateForConferencingAvailabilityChange;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(NSInteger)arg5 actionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(NSInteger)arg4 target:(id)arg5 selector:(SEL)arg6 property:(NSInteger)arg7 actionGrouping:(NSInteger)arg8 ordering:(NSInteger)arg9;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 property:(NSInteger)arg3 actionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5 animated:(BOOL)arg6;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 actionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6 outActions:(id*)arg7 outIndex:(NSInteger*)arg8;
- (void)setActionShouldPickHighlightedValue:(BOOL)arg1;
- (BOOL)actionShouldPickHighlightedValue;
- (BOOL)isInFullEditingMode;
- (void)setTableHeaderViewScrolls:(BOOL)arg1;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1 andRefreshUI:(BOOL)arg2;
- (void)setInsertionProperty:(NSInteger)arg1 value:(id)arg2 label:(id)arg3;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1;
- (void)prepareView;
- (void)updateTableHeaderView;
- (void)endPinning;
- (void)reloadNoValueLabelAnimated:(BOOL)arg1;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllerWillSlideOut:(BOOL)arg1;
- (void)setCustomKeyboardOutDirection:(NSInteger)arg1;
- (id)noValueLabel;
- (NSInteger)primaryProperty;
- (void)beginPinning;
- (id)namePropertyGroup;
- (void)unselectAllCellParts;
- (void)conference:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)reloadLinkingUISection;
- (void)reloadDeleteButton;
- (void)reloadPropertyGroups;
- (BOOL)isAttributionEnabled;
- (void)setAlternateName:(id)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)setCustomPersonTableHeaderView:(id)arg1;
- (id)customPersonTableHeaderView;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (BOOL)hasNameChanges;
- (BOOL)hasImageChanges;
- (void)reloadNameData;
- (BOOL)shouldShowLinkingUI;
- (BOOL)allowsDeletion;
- (BOOL)allowsSharing;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsSounds;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (void)setMessageFont:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (id)customMessageView;
- (void)setCustomMessageView:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (id)attribution;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)endEditingTransactions;
- (void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2;
- (BOOL)pickerViewControllerShouldDismissKeyboard:(id)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (BOOL)allowsActions;
- (id)insertionValue;
- (NSInteger)insertionProperty;
- (id)personImageView;
- (id)primarySourceNameForPerson:(void*)arg1;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (void)setPersonForImageData:(void*)arg1;
- (void)removeImageDataForPerson:(void*)arg1;
- (void)setImageData:(id)arg1 withFormat:(NSInteger)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(void*)arg4;
- (id)imageDataWithFormat:(NSInteger)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3;
- (void*)personForImageData;
- (BOOL)hasImageDataForPerson:(void*)arg1;
- (id)writablePeople;
- (void)imageWillSave;
- (void)refreshImageData;
- (id)people;
- (void)updateRecord;
- (BOOL)canSave;
- (void)reloadImageData;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)actionsController;
- (id)alternateName;
- (void)setMessage:(id)arg1;
- (id)message;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)tableView;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)setTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(NSInteger)arg2;
- (float)marginForTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (id)viewForFooterInTableView:(id)arg1;
- (id)tableHeaderView;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sizeToFit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (id)init;
- (void)dealloc;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)hasChanges;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAddressBook:(void*)arg1;
- (id)messageFont;

@end
