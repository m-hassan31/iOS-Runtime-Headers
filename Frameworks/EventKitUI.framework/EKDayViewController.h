/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewControllerDelegate>, NSTimeZone, CalendarOccurrencesCollection, UIView<EKDayViewProtocol>, EKDayBannerView, NSDate, <EKDayViewControllerDataSource>;



@interface EKDayViewController : UIViewController <EKDayViewDelegate, EKDayViewDataSource>
{
    EKDayBannerView *_banner;
    UIView<EKDayViewProtocol> *_dayView;
    CalendarOccurrencesCollection *_occurrences;
    NSTimeZone *_timeZone;
    NSDate *_selectedDate;
    struct { 
        NSInteger year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _selectedDateGr;
    double _dayStart;
    double _dayEnd;
    BOOL _showsBanner;
    BOOL _allowsDaySwitching;
    BOOL _allowsSelection;
    BOOL _initialLoad;
    BOOL _instigatedDateChange;
    BOOL _shouldScrollToFirstEvent;
    <EKDayViewControllerDelegate> *_delegate;
    <EKDayViewControllerDataSource> *_dataSource;
}

@property(copy) NSDate *selectedDate;
@property(copy) NSTimeZone *timeZone;
@property BOOL showsBanner;
@property BOOL allowsDaySwitching;
@property BOOL allowsSelection;
@property <EKDayViewControllerDataSource> *dataSource;
@property <EKDayViewControllerDelegate> *delegate;


- (id)timeZone;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setAllowsSelection:(BOOL)arg1;
- (BOOL)allowsSelection;
- (void)setTimeZone:(id)arg1;
- (void)dealloc;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)dataSource;
- (void)_createBannerView;
- (void)_disposeBannerView;
- (void)_releaseViews;
- (void)setShowsBanner:(BOOL)arg1;
- (BOOL)showsBanner;
- (BOOL)allowsDaySwitching;
- (void)layoutContainerView:(id)arg1;
- (void)setSelectedDateInternal:(id)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })selectedDateGr;
- (void)setAllowsDaySwitching:(BOOL)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)dayView:(id)arg1 didChangeSelectedDate:(id)arg2;
- (NSUInteger)dayView:(id)arg1 numberOfEventsInSection:(NSInteger)arg2;
- (id)dayView:(id)arg1 occurrenceViewForItemPath:(id)arg2;
- (void)dayView:(id)arg1 didSelectItemAtPath:(id)arg2;
- (id)dayView:(id)arg1 startDateForItemPath:(id)arg2;
- (id)dayView:(id)arg1 endDateForItemPath:(id)arg2;
- (double)dayView:(id)arg1 durationForItemPath:(id)arg2;
- (id)selectedDate;
- (void)bringEventToFront:(id)arg1;
- (NSUInteger)firstVisibleSecond;
- (void)setSelectedDate:(id)arg1;
- (void)calendarDayBanner:(id)arg1 arrowClicked:(NSInteger)arg2;
- (void)_localeChanged;
- (void)longPress:(id)arg1;

@end
