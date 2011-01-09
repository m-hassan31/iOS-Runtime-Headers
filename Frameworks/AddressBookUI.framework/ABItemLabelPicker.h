/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, UITableView, NSString, ABStyleProvider, NSMutableArray, ABPropertyGroup;



@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate>
{
    id _delegate;
    id _editedItem;
    NSString *_savedLabel;
    NSString *_selectedLabel;
    NSIndexPath *_selectedPath;
    UITableView *_tableView;
    NSMutableArray *_additionalLabels;
    struct __CFArray { } *_sortedCustomItemLabelInfos;
    struct __CFArray { } *_sortedDefaultItemLabelInfos;
    void *_sortedCustomItemLabelInfosMemory;
    void *_sortedDefaultItemLabelInfosMemory;
    ABPropertyGroup *_propertyGroup;
    NSInteger _property;
    NSInteger _itemIndex;
    void *_addressBook;
    BOOL _addLabelDisabled;
    BOOL _didCreateNewLabel;
    ABStyleProvider *_styleProvider;
}

@property BOOL didCreateNewLabel;
@property void *addressBook;
@property(retain) ABStyleProvider *styleProvider;
@property(getter=isAddLabelDisabled) BOOL addLabelDisabled;
@property(readonly) UITableView *tableView;

+ (id)builtInLabelsForProperty:(NSInteger)arg1;
+ (id)defaultLabelsForProperty:(NSInteger)arg1 policy:(void*)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForPropertyGroup:(id)arg1 person:(void*)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForProperty:(NSInteger)arg1 person:(void*)arg2;
+ (id)_defaultLabelsForProperty:(NSInteger)arg1 person:(void*)arg2 propertyGroup:(id)arg3 index:(NSInteger)arg4 addressBook:(void*)arg5 outBestLabelIndex:(NSInteger*)arg6 forceIncludeLabels:(id)arg7;
+ (id)defaultLabelsForProperty:(NSInteger)arg1 person:(void*)arg2 addressBook:(void*)arg3 outBestLabelIndex:(NSInteger*)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(NSInteger)arg2 addressBook:(void*)arg3 outBestLabelIndex:(NSInteger*)arg4 forceIncludeLabels:(id)arg5;

- (void*)addressBook;
- (void)resetLabelCaches;
- (void)setPropertyGroup:(id)arg1 itemIndex:(NSInteger)arg2;
- (void)setAdditionalLabels:(id)arg1;
- (void)setSavedLabel:(id)arg1;
- (id)savedLabel;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (void)_setSelectedPath:(id)arg1;
- (void)_setSelectedLabel:(id)arg1;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)setSelectedLabel:(id)arg1;
- (id)selectedLabel;
- (BOOL)allowsCustomLabels;
- (void)reloadItemLabels;
- (void)buildUI;
- (void)_didEndPickingAndConfirmed:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (void)toggleEditing;
- (void)createNewCustomLabel;
- (BOOL)shouldPopItem;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (BOOL)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (BOOL)didCreateNewLabel;
- (void)setDidCreateNewLabel:(BOOL)arg1;
- (BOOL)isAddLabelDisabled;
- (void)setAddLabelDisabled:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)tableView;
- (void)displayScrollerIndicators;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)isEditing;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (BOOL)canEdit;

@end
