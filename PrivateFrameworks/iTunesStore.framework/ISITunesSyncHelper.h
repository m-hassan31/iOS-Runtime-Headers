/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDate, NSLock;



@interface ISITunesSyncHelper : NSObject <ISSingleton>
{
    NSInteger _blockSyncCount;
    BOOL _checkedForPurchases;
    NSLock *_lock;
    NSDate *_preSyncCheckForPurchasesDate;
    unsigned int _syncRequested : 1;
}

@property(readonly) BOOL iTunesIsSynching;
@property(getter=isBlockingSync,readonly) BOOL blockingSync;
@property BOOL iTunesCheckedForPurchasesDuringSync;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)iTunesSyncRequestedStart;
- (void)iTunesSyncHasCompleted:(NSInteger)arg1;
- (id)init;
- (void)dealloc;
- (void)beginBlockingSync;
- (void)endBlockingSync;
- (BOOL)isBlockingSync;
- (BOOL)iTunesIsSynching;
- (void)_beginBlockingSync;
- (id)_copyLastCheckForPurchasesDate;
- (void)_endBlockingSync;
- (BOOL)iTunesCheckedForPurchasesDuringSync;
- (void)setITunesCheckedForPurchasesDuringSync:(BOOL)arg1;

@end
