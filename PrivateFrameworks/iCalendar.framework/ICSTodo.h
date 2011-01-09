/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */



@interface ICSTodo : ICSComponent 
{
}

@property(retain) ICSDate *completed;
@property(retain) ICSDate *due;
@property NSUInteger x_apple_sort_order;
@property(retain) NSString *x_apple_ews_permission;
@property BOOL x_apple_ews_needsserverconfirmation;
@property(retain) NSString *x_apple_ews_itemid;
@property(retain) NSString *x_apple_ews_changekey;
@property(retain) NSURL *url;
@property(retain) NSString *uid;
@property(retain) NSString *summary;
@property NSInteger status;
@property NSUInteger sequence;
@property(retain) NSArray *rrule;
@property(retain) ICSDate *recurrence_id;
@property(retain) NSArray *rdate;
@property NSUInteger priority;
@property(retain) ICSUserAddress *organizer;
@property(retain) NSString *location;
@property(retain) ICSDate *last_modified;
@property(retain) NSArray *exrule;
@property(retain) NSArray *exdate;
@property(retain) ICSDuration *duration;
@property(retain) ICSDate *dtstart;
@property(retain) ICSDate *dtstamp;
@property(retain) NSString *description;
@property(retain) ICSDate *created;
@property NSInteger classification;
@property(retain) NSArray *attendee;
@property(retain) NSArray *attach;

+ (id)name;

- (void)setDue:(id)arg1;
- (NSUInteger)x_apple_sort_order;
- (void)setX_apple_sort_order:(NSUInteger)arg1;
- (void)fixComponent;
- (BOOL)validate:(id*)arg1;
- (id)due;
- (id)completed;
- (void)setPriority:(NSUInteger)arg1;
- (NSUInteger)priority;
- (void)setCompleted:(id)arg1;

@end
