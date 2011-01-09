/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISUniqueOperationContext, NSLock, NSMutableArray, NSMutableDictionary;



@interface ISUniqueOperationManager : NSObject <ISSingleton>
{
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
    NSMutableDictionary *_lockPool;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)predecessorForKey:(id)arg1 operation:(id)arg2;
- (void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2;
- (void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2;
- (id)_contextForOperation:(id)arg1;
- (id)_activeContext;
- (void)checkInOperation:(id)arg1;
- (void)checkOutOperation:(id)arg1;
- (id)lockWithIdentifier:(id)arg1;

@end
