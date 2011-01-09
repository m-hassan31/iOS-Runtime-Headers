/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */



@interface ICSDate : ICSProperty 
{
}

@property(retain) NSString *tzid;


- (BOOL)hasTimeComponent;
- (void)setTzid:(id)arg1;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3 hour:(NSInteger)arg4 minute:(NSInteger)arg5 second:(NSInteger)arg6 timeZone:(id)arg7;
- (id)components;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3 hour:(NSInteger)arg4 minute:(NSInteger)arg5 second:(NSInteger)arg6;
- (id)initWithValue:(id)arg1;
- (BOOL)hasFloatingTimeZone;
- (id)tzid;
- (id)description;

@end
