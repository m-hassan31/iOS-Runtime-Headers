/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSTimeZone, NSMutableDictionary, NSMutableArray;



@interface EKEventStore : NSObject 
{
    id _database;
    NSMutableDictionary *_calendars;
    NSMutableDictionary *_sources;
    NSMutableArray *_observers;
    NSUInteger _flags;
    NSTimeZone *_timeZone;
}

@property(readonly) NSString *eventStoreIdentifier;
@property(readonly) NSArray *calendars;
@property(readonly) EKCalendar *defaultCalendarForNewEvents;

+ (id)storeWithOptions:(unsigned long)arg1 path:(id)arg2;

- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (void)_databaseChangedExternally;
- (void)daemonRestarted;
- (id)calendars;
- (NSInteger)readWriteCalendarCount;
- (id)readWriteCalendars;
- (id)eventStoreIdentifier;
- (id)calendarWithID:(id)arg1;
- (id)sourceWithID:(id)arg1;
- (void)_saveWithNotify:(BOOL)arg1;
- (void)_save;
- (void)_notifyStoreChanged;
- (BOOL)saveCalendar:(id)arg1 error:(id*)arg2;
- (BOOL)saveCalendar:(id)arg1 deferred:(BOOL)arg2 error:(id*)arg3;
- (BOOL)removeCalendar:(id)arg1 error:(id*)arg2;
- (id)eventWithIdentifier:(id)arg1;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (id)eventForUID:(id)arg1 occurrenceDate:(id)arg2;
- (id)eventWithUniqueId:(id)arg1;
- (BOOL)saveEvent:(id)arg1 span:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)removeEvent:(id)arg1 span:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)setEventParticipationStatus:(id)arg1 status:(NSInteger)arg2 applyToAll:(BOOL)arg3 error:(id*)arg4;
- (BOOL)markEventRead:(id)arg1 error:(id*)arg2;
- (id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(NSUInteger)arg3;
- (id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(NSUInteger)arg3;
- (id)defaultCalendarForNewEvents;
- (void)setDefaultCalendarForNewEvents:(id)arg1;
- (id)defaultCalendarForNewTasks;
- (void)refreshAccountListIfNecessary;
- (void)refreshAccountDataIfNecessary;
- (id)eventsMatchingPredicate:(id)arg1;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(id)arg2;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventIdentifier:(id)arg3 calendars:(id)arg4;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)init;
- (void)dealloc;
- (NSUInteger)serverPort;
- (id)_orderedDefaultColors;
- (id)colorForCalendar:(id)arg1;

@end
