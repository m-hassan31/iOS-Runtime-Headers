/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, NSData, EKEventStore;



@interface EKICSPreviewModel : NSObject 
{
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
}

@property(readonly) EKEventStore *eventStore;
@property(readonly) NSInteger totalEventCount;
@property(readonly) NSInteger importedEventCount;
@property(readonly) NSInteger unimportedEventCount;
@property(readonly) NSArray *importedEvents;
@property(readonly) NSArray *unimportedEvents;
@property(readonly) NSArray *allEvents;


- (id)allEvents;
- (void)dealloc;
- (NSInteger)importedEventCount;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2;
- (id)importedEvents;
- (id)unimportedEvents;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (NSInteger)totalEventCount;
- (NSInteger)unimportedEventCount;
- (id)importAllIntoCalendar:(id)arg1;
- (id)eventStore;

@end
