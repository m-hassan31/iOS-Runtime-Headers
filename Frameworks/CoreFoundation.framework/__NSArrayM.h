/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface __NSArrayM : NSMutableArray 
{
    NSUInteger _used;
    NSUInteger _size;
    NSUInteger _offset;
    unsigned long _mutations;
    id *_list;
}

+ (id)__new:(id*)arg1 :(NSUInteger)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeLastObject;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;

@end
