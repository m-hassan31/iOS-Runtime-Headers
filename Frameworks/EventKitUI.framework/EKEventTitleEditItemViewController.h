/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UITableView;



@interface EKEventTitleEditItemViewController : EKEventEditItemViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_table;
    NSString *_eventTitle;
    NSString *_eventLocation;
}

@property(copy) NSString *eventTitle;
@property(copy) NSString *eventLocation;


- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(NSInteger)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_textViewForRow:(NSInteger)arg1;
- (BOOL)validateAllowingAlert:(BOOL)arg1;
- (void)setEventTitle:(id)arg1;
- (void)setEventLocation:(id)arg1;
- (id)eventTitle;
- (id)eventLocation;

@end
