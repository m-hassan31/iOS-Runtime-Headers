/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, EKEventDetailAlarmCell;



@interface EKEventAlarmDetailItem : EKEventDetailItem 
{
    NSMutableArray *_cells;
    EKEventDetailAlarmCell *_cell;
}


- (void)reset;
- (BOOL)_alarmsAreEditable;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(NSInteger)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (NSInteger)numberOfSubitems;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (id)cellForSubitemAtIndex:(NSInteger)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;

@end
