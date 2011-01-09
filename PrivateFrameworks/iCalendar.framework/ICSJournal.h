/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */



@interface ICSJournal : ICSComponent 
{
}

@property(retain) NSURL *url;
@property(retain) NSString *uid;
@property(retain) NSString *summary;
@property NSInteger status;
@property NSUInteger sequence;
@property(retain) NSArray *rrule;
@property(retain) ICSDate *recurrence_id;
@property(retain) NSArray *rdate;
@property(retain) ICSUserAddress *organizer;
@property(retain) ICSDate *last_modified;
@property(retain) NSArray *exrule;
@property(retain) NSArray *exdate;
@property(retain) ICSDate *dtstart;
@property(retain) ICSDate *dtstamp;
@property(retain) NSString *description;
@property(retain) ICSDate *created;
@property NSInteger classification;
@property(retain) NSArray *attendee;
@property(retain) NSArray *attach;

+ (id)name;

- (BOOL)validate:(id*)arg1;

@end
