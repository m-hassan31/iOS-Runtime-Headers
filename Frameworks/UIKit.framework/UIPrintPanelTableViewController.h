/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, UIPrintPanelViewController;



@interface UIPrintPanelTableViewController : UITableViewController 
{
    UIPrintPanelViewController *_printPanelViewController;
    UIButton *_printButton;
    BOOL _waitingForPrinterLookup;
}


- (void)updatePageRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)updateCopies:(id)arg1;
- (void)updateDuplex:(id)arg1;
- (void)_setupPrintButtons;
- (void)_update;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)showCancelButton;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end
