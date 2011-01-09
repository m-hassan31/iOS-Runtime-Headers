/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;



@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet 
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    BOOL _padding[3];
}

+ (struct { NSUInteger x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)setSet:(id)arg1;
- (id)_setValueWithSelector:(SEL)arg1;
- (id)_createMutableSetValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)member:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (NSUInteger)count;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;

@end
