/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintingMessageView, NSArray;



@interface UIPrintStatusJobsViewController : UITableViewController 
{
    NSArray *_jobs;
    BOOL _autoPush;
    UIPrintingMessageView *_noJobsView;
}


- (void)pushJob:(id)arg1 animated:(BOOL)arg2;
- (void)pushSingleJobAnimated:(BOOL)arg1;
- (void)updateForJobCountChange;
- (id)visibleJobs;
- (void)updateTableViewCell:(id)arg1 withJob:(id)arg2;
- (void)updateJobInfoAnimated:(BOOL)arg1;
- (void)updateJobInfo;
- (void)willReappear;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;

@end
