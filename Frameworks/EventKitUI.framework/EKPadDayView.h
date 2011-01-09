/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayView, UIView, EKPadDayAllDayView, <EKDayViewDataSource>, <EKDayViewDelegate>;



@interface EKPadDayView : UIView <EKDayViewDelegate, EKPadAllDayViewDelegate, EKPadAllDayViewDataSource, EKDayViewProtocol, EKDayViewDataSource>
{
    EKDayView *_timedView;
    EKPadDayAllDayView *_allDayView;
    UIView *_bottomFader;
    UIView *_topFader;
    BOOL _dimsNonSelectedItems;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _layedOutOccurrencesForBounds;
    <EKDayViewDelegate> *_delegate;
    <EKDayViewDataSource> *_dataSource;
}

@property ? selectedDateGr;
@property(readonly) NSArray *occurrenceViews;
@property BOOL dimsNonSelectedItems;
@property BOOL allowsOccurrenceSelection;
@property NSUInteger firstVisibleSecond;
@property(copy) NSDate *selectedDate;
@property <EKDayViewDataSource> *dataSource;
@property <EKDayViewDelegate> *delegate;


- (id)selectedItem;
- (void)dealloc;
- (void)reloadData;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)setSelectedDateGr:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setTopFader:(id)arg1 bottomFader:(id)arg2 sizeToImage:(BOOL)arg3;
- (void)_resetOccurrences;
- (id)_faderForFaderImage:(id)arg1 fader:(id)arg2 sizeToImage:(BOOL)arg3;
- (void)_notifyDelegateOfPressOnEvent:(id)arg1;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (void)_notifyDelegateOfDragExitedOnOccurrence:(id)arg1;
- (void)dayView:(id)arg1 didClickOnEvent:(id)arg2;
- (NSUInteger)numberOfEventsInPadAllDayView:(id)arg1;
- (id)padAllDayView:(id)arg1 startDateForEventAtIndex:(NSUInteger)arg2;
- (id)padAllDayView:(id)arg1 endDateForEventAtIndex:(NSUInteger)arg2;
- (id)padAllDayView:(id)arg1 occurrenceViewForEventAtIndex:(NSUInteger)arg2;
- (void)padAllDayViewStartDrag:(id)arg1;
- (void)padAllDayViewFinishScrollingToOccurrence:(id)arg1;
- (void)padAllDayView:(id)arg1 occurrencePressed:(id)arg2 onDay:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3;
- (void)padAllDayView:(id)arg1 occurrenceDragExited:(id)arg2;
- (void)padAllDayView:(id)arg1 didSelectItemWithEventIndex:(NSUInteger)arg2;
- (void)padAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg3;
- (void)padAllDayViewEmptySpaceClick:(id)arg1 onDay:(struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })selectedDateGr;
- (void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(NSUInteger)arg2;
- (NSUInteger)dayView:(id)arg1 numberOfEventsInSection:(NSInteger)arg2;
- (id)dayView:(id)arg1 occurrenceViewForItemPath:(id)arg2;
- (void)dayView:(id)arg1 didSelectItemAtPath:(id)arg2;
- (id)dayView:(id)arg1 startDateForItemPath:(id)arg2;
- (id)dayView:(id)arg1 endDateForItemPath:(id)arg2;
- (double)dayView:(id)arg1 durationForItemPath:(id)arg2;
- (void)dayView:(id)arg1 didPressOnEvent:(id)arg2;
- (void)dayView:(id)arg1 dragExitedEvent:(id)arg2;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(BOOL)arg3 scrollbarShowsInside:(BOOL)arg4;
- (id)selectedDate;
- (void)scrollToItemAtPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToOccurrence:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2;
- (void)setFirstVisibleSecond:(NSUInteger)arg1;
- (id)occurrenceViews;
- (void)bringEventToFront:(id)arg1;
- (void)resetLastSelectedOccurrencePoint;
- (id)occurrenceVisibleRect:(id)arg1;
- (id)viewForItemAtPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForItemAtPath:(id)arg1;
- (void)selectItemAtPath:(id)arg1;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (NSUInteger)firstVisibleSecond;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (BOOL)dimsNonSelectedItems;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (BOOL)allowsOccurrenceSelection;
- (void)setSelectedDate:(id)arg1;
- (void)setOutlineStyle:(NSInteger)arg1;

@end
