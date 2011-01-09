/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */



@interface GKTable : NSObject 
{
    struct _gktableitem { NSUInteger x1; id x2; double x3; double x4; } *_items;
    NSUInteger _count;
    NSUInteger _size;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}

@property(readonly) NSUInteger count;


- (void)lock;
- (void)unlock;
- (id)allObjects;
- (id)initWithSize:(unsigned long)arg1;
- (void)removeObjectForKey:(NSUInteger)arg1;
- (id)objectForKey:(NSUInteger)arg1;
- (void)setObject:(id)arg1 forKey:(NSUInteger)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)init;
- (unsigned long)count;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)dealloc;
- (void)touchObject:(id)arg1;
- (void)touchObjectForKey:(NSUInteger)arg1;
- (void)print;

@end
