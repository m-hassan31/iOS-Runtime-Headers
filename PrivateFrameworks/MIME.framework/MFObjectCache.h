/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */



@interface MFObjectCache : NSObject 
{
    NSInteger _arrayCapacity;
    struct __CFArray { } *_keysAndValues;
    BOOL _useIsEqual;
}


- (void)setUsesIsEqualForComparison:(BOOL)arg1;
- (BOOL)isObjectInCache:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(long)arg1;
- (void)removeAllObjects;
- (void)dealloc;
- (void)setCapacity:(long)arg1;

@end
