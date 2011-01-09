/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDateValue, ICSDuration;



@interface ICSPeriod : NSObject <NSCoding>
{
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}


- (id)initWithStart:(id)arg1;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (BOOL)isDurationBased;
- (id)start;
- (id)end;
- (id)duration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
