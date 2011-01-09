/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectedItemPrivate>, DOMHTMLSelectElement, NSArray;



@interface UIWebSelectPicker : UIPickerView <UIWebSelectControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    <UIWebSelectedItemPrivate> *_singleSelectionItem;
    NSUInteger _singleSelectionIndex;
}

@property(retain) <UIWebSelectedItemPrivate> *_singleSelectionItem;
@property(retain) NSArray *_cachedItems;
@property(retain) DOMHTMLSelectElement *_selectionNode;

+ (void)_initializeSafeCategory;

- (void)set_singleSelectionItem:(id)arg1;
- (id)_singleSelectionItem;
- (void)set_cachedItems:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (id)_cachedItems;
- (id)_selectionNode;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(NSUInteger)arg4 multipleSelection:(BOOL)arg5;
- (id)controlView;
- (void)controlBeginEditing;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (NSInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSInteger)arg2;
- (void)pickerViewLoaded:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(NSInteger)arg2 forComponent:(NSInteger)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3 checked:(BOOL)arg4;
- (void)dealloc;
- (BOOL)_accessibilityServesAsFirstElement;

@end
