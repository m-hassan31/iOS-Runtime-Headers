/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel, <EKDayAllDayViewDelegate>, UIScrollView, NSMutableArray, <EKDayAllDayViewDataSource>;



@interface EKDayAllDayView : UIView 
{
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    UIScrollView *_scroller;
    float _occurrenceInset;
    <EKDayAllDayViewDelegate> *_delegate;
    BOOL _allowSelection;
    BOOL _showSelection;
    BOOL _dimsNonSelectedItems;
    NSInteger _maxVisibleItems;
    NSUInteger _selectedEventIndex;
    <EKDayAllDayViewDataSource> *_dataSource;
}

@property BOOL showsSelection;
@property BOOL allowsOccurrenceSelection;
@property BOOL dimsNonSelectedItems;
@property <EKDayAllDayViewDataSource> *dataSource;
@property <EKDayAllDayViewDelegate> *delegate;
@property NSInteger maxVisibleItems;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)reloadData;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
- (void)setShowsSelection:(BOOL)arg1;
- (BOOL)showsSelection;
- (NSInteger)maxVisibleItems;
- (void)setMaxVisibleItems:(NSInteger)arg1;
- (NSUInteger)selectedEventIndex;
- (void)selectItemWithEventIndex:(NSUInteger)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (BOOL)dimsNonSelectedItems;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (BOOL)allowsOccurrenceSelection;
- (id)viewForEventIndex:(NSUInteger)arg1;
- (NSUInteger)eventIndexForView:(id)arg1;
- (void)removeAllOccurrenceViews;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;

@end
