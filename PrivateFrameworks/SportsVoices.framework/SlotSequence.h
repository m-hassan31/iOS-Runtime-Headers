/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSMutableArray;



@interface SlotSequence : Slot 
{
    NSMutableArray *slots;
}

@property(retain) NSMutableArray *slots;

+ (id)slotSequenceWithArray:(id)arg1;
+ (id)emptySlotSequence;

- (id)subsequenceFromIndex:(NSInteger)arg1;
- (id)slotSubsequenceFromIndex:(NSInteger)arg1;
- (void)setSlots:(id)arg1;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (id)occurrenceOfSequence:(id)arg1 atIndex:(NSInteger)arg2;
- (id)portionPrecedingOccurrenceOfSequence:(id)arg1 atIndex:(NSInteger)arg2;
- (id)portionFollowingOccurrenceOfSequence:(id)arg1 atIndex:(NSInteger)arg2;
- (id)rest;
- (id)reversed;
- (id)slots;
- (id)overlayedOn:(id)arg1;
- (id)initFromPlist:(id)arg1;
- (BOOL)matches:(id)arg1;
- (id)first;
- (id)initWithArray:(id)arg1;
- (id)description;
- (NSInteger)count;
- (void)dealloc;
- (BOOL)empty;

@end
