/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;



@interface AVArrayQueueFeeder : AVQueueFeeder 
{
    NSMutableArray *_items;
}


- (void)shuffleWithCurrentIndex:(NSUInteger)arg1;
- (id)pathAtIndex:(NSUInteger)arg1;
- (id)initWithArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (id)init;
- (void)dealloc;
- (id)itemForIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfPaths;
- (NSUInteger)itemCount;

@end
