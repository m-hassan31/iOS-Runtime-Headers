/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableDictionary, AccountsManager;



@interface CalendarAccountsController : NSObject 
{
    NSMutableDictionary *_lastCalendarRefreshDates;
    NSMutableDictionary *_lastStoreRefreshDates;
    NSMutableDictionary *_lastStoreListingRefreshDates;
    AccountsManager *_accountsManager;
}

+ (id)sharedInstance;
+ (void)invalidate;

- (id)accountManager;
- (void)dealloc;
- (id)titleForStore:(void*)arg1 forBeginningOfSentence:(BOOL)arg2;
- (id)accountTypeTitleForStore:(void*)arg1;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
- (id)accountTypeTitleForSource:(id)arg1;
- (NSInteger)sortOrderForSource:(id)arg1;
- (NSInteger)sortOrderForStoreType:(NSInteger)arg1;
- (BOOL)calendarNeedsRefresh:(void*)arg1;
- (BOOL)storeNeedsRefresh:(void*)arg1;
- (BOOL)storeListingNeedsRefresh:(void*)arg1;
- (void)refreshCalendar:(void*)arg1;
- (void)_refreshSubscribedStore:(void*)arg1;
- (void)_refreshStore:(void*)arg1;
- (void)refreshStore:(void*)arg1;
- (void)refreshListingForStore:(void*)arg1;
- (void*)copyMainCalendarForStore:(void*)arg1;

@end
