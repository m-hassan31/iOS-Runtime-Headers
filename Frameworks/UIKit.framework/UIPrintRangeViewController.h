/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPanelViewController, UILabel, UITableView, UIPrintRangePickerView;



@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIPrintPanelViewController *_printPanelViewController;
    NSInteger _pageCount;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _pageRange;
    UIPrintRangePickerView *_fromPicker;
    UIPrintRangePickerView *_toPicker;
    UILabel *_toLabel;
    UITableView *_tableView;
}


- (id)initWithPrintPanelViewController:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (NSInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSInteger)arg2;
- (float)pickerView:(id)arg1 widthForComponent:(NSInteger)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(NSInteger)arg2;
- (id)pickerView:(id)arg1 viewForRow:(NSInteger)arg2 forComponent:(NSInteger)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(NSInteger)arg2 inComponent:(NSInteger)arg3;
- (void)dealloc;

@end
