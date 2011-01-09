/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKTilePathArray : NSArray 
{
    id _imp;
}

+ (id)arrayWithCapacity:(NSUInteger)arg1;
+ (id)array;

- (id)debugDescription;
- (id)descriptionWithLocale:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })valueAtIndex:(NSUInteger)arg1;
- (void)addValue:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })arg1;
- (id)description;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)init;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)count;
- (void)dealloc;
- (NSUInteger)indexOfValue:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })lastValue;
- (void)insertValue:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; })arg1 atIndex:(NSUInteger)arg2;
- (void)removeLastValue;
- (void)removeValueAtIndex:(NSUInteger)arg1;
- (void)removeValuesAtIndexes:(id)arg1;
- (void)removeValuesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;

@end
