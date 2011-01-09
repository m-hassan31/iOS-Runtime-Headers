/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKComposeSuggestedContactsControllerDelegate>, NSArray;



@interface GKComposeSuggestedContactsController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_searchResultItems;
    <GKComposeSuggestedContactsControllerDelegate> *_delegate;
}

@property(retain,readonly) UITableView *searchResultsTable;
@property <GKComposeSuggestedContactsControllerDelegate> *delegate;
@property(copy) NSArray *searchResultItems;


- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)searchResultItems;
- (id)searchResultsTable;
- (void)setSearchResultItems:(id)arg1;

@end
