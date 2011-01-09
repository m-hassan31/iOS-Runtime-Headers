/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKSource, NSMutableArray;



@interface EKGroupInfo : NSObject 
{
    EKSource *_source;
    NSMutableArray *_calendars;
    BOOL _selected;
}

@property(retain) EKSource *source;
@property(copy,readonly) NSString *title;
@property(copy,readonly) NSString *typeTitle;
@property(retain,readonly) NSArray *calendarInfos;
@property(copy,readonly) NSSet *calendarSet;
@property(copy,readonly) NSSet *selectedCalendarSet;
@property(readonly) NSInteger numCalendars;
@property(readonly) NSInteger numSelectedCalendars;
@property(readonly) BOOL showCalendarNameIfSolitary;
@property(readonly) NSInteger sortOrder;
@property(readonly) BOOL isSubscribed;
@property BOOL selected;


- (void)removeCalendar:(id)arg1;
- (BOOL)isSubscribed;
- (void)setSource:(id)arg1;
- (id)source;
- (BOOL)selected;
- (void)selectAll;
- (void)setSelected:(BOOL)arg1;
- (id)title;
- (id)init;
- (void)dealloc;
- (NSInteger)sortOrder;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (id)typeTitle;
- (id)calendarInfos;
- (NSInteger)numCalendars;
- (NSInteger)numSelectedCalendars;
- (id)calendarAtIndex:(NSInteger)arg1;
- (id)copyCalendars;
- (id)calendarSet;
- (id)selectedCalendarSet;
- (void)selectNone;
- (BOOL)showCalendarNameIfSolitary;

@end
