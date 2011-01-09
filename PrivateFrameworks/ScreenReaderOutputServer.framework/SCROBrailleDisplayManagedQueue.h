/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class SCRCIndexMap;



@interface SCROBrailleDisplayManagedQueue : NSObject 
{
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary { } *_queueStateDict;
    struct __CFDictionary { } *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    NSUInteger _maxActiveQueueSize;
}


- (id)_queueForState:(NSInteger)arg1 createQueue:(BOOL)arg2;
- (void)addDisplay:(id)arg1 withState:(NSInteger)arg2;
- (void)_fillActiveBrailleDisplayQueue;
- (void)setState:(NSInteger)arg1 forDisplay:(id)arg2;
- (NSInteger)stateForDisplay:(id)arg1;
- (id)displayForToken:(long)arg1;
- (NSUInteger)displayCountIncludingDisconnectedDisplays:(BOOL)arg1;
- (id)primaryDisplay;
- (void)setPrimaryDisplay:(id)arg1;
- (NSUInteger)activeQueueMaximumSize;
- (void)setActiveQueueMaximumSize:(NSUInteger)arg1;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (id)sleepingDisplays;
- (id)disconnectedDisplays;
- (id)loadingDisplays;
- (void)removeDisplay:(id)arg1;
- (id)init;
- (void)dealloc;

@end
