/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray;



@interface IMPeople : NSObject 
{
    NSMutableArray *_people;
    NSInteger _coalesceCount;
    BOOL _hidePeople;
}

@property(readonly) NSArray *groups;
@property(readonly) NSArray *people;
@property BOOL hidePeople; /* unknown property attribute: SsetShouldHidePeople: */
@property(readonly) BOOL coalescingChanges;
@property(readonly) NSUInteger count;


- (id)people;
- (id)init;
- (NSUInteger)count;
- (void)dealloc;
- (BOOL)hidePeople;
- (void)removeNotificationObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)containsIMHandle:(id)arg1;
- (void)addedIMHandle:(id)arg1;
- (void)_addedPeople:(id)arg1;
- (void)removedIMHandle:(id)arg1;
- (BOOL)coalescingChanges;
- (BOOL)removePeopleFromArray:(id)arg1;
- (BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2;
- (BOOL)addPeopleFromArray:(id)arg1;
- (id)groups;
- (void)setShouldHidePeople:(BOOL)arg1;
- (void)beginCoalescedChanges;
- (void)endCoalescedChanges;
- (BOOL)removeIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;

@end
