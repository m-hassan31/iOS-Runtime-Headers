/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UISearchDisplayController;



@interface GKSearchResultsTableView : GKTableView 
{
    UISearchDisplayController *_controller;
}

@property UISearchDisplayController *controller;


- (void)setController:(id)arg1;
- (id)controller;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)_numberOfRowsDidChange;
- (void)_updateNoSearchResultsMessageVisibility;

@end
