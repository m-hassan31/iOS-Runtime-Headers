/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSConditionLock, NSMutableArray;



@interface VoiceChatDataQueue : NSObject 
{
    NSConditionLock *qLock;
    NSMutableArray *dataArray;
}


- (id)init;
- (void)dealloc;
- (BOOL)addToQueue:(id)arg1;
- (id)pullFromQueue;

@end
