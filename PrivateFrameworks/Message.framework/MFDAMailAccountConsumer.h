/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock;



@interface MFDAMailAccountConsumer : NSObject 
{
    NSConditionLock *_doneCondition;
}


- (void)setDone:(BOOL)arg1;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)waitUntilDone;
- (id)init;
- (void)dealloc;

@end
