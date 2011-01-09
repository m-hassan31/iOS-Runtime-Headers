/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSDate, NSTimeZone;



@interface MKDate : NSDate 
{
    NSDate *_date;
    NSTimeZone *_tz;
}

@property(readonly) NSDate *nsDate;
@property(retain) NSTimeZone *timeZone;

+ (id)dateWithNSDate:(id)arg1;

- (id)descriptionWithLocale:(id)arg1;
- (NSInteger)dayOfCommonEra;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)timeZone;
- (id)description;
- (double)timeIntervalSinceReferenceDate;
- (void)setTimeZone:(id)arg1;
- (void)dealloc;
- (id)initWithNSDate:(id)arg1;
- (id)nsDate;

@end
