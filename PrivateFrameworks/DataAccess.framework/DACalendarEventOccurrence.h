/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface DACalendarEventOccurrence : DACalendarObject 
{
}

@property(readonly) DACalendarEvent *event;
@property(readonly) NSDate *date;
@property(readonly) BOOL canBeDetached;


- (id)event;
- (id)date;
- (BOOL)canBeDetached;
- (void)removeAndFuture:(BOOL)arg1;
- (id)detachAndFuture:(BOOL)arg1;

@end
