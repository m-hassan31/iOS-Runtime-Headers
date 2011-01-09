/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSMutableArray, <FTMessageQueueDelegate>;



@interface FTMessageQueue : NSObject 
{
    NSMutableArray *_queue;
    NSMutableArray *_addDates;
    double _timeoutTime;
    <FTMessageQueueDelegate> *_delegate;
}

@property(readonly) FTMessage *topMessage;
@property(readonly) NSInteger count;
@property(readonly) NSArray *messages;
@property <FTMessageQueueDelegate> *delegate;
@property double messageTimeoutTime;


- (id)messages;
- (id)init;
- (NSInteger)count;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)addMessage:(id)arg1;
- (void)removeAllMessages;
- (BOOL)removeMessage:(id)arg1;
- (void)_clearTimeout;
- (void)_setTimeout;
- (void)_timeoutHit;
- (id)dequeueTopMessage;
- (id)topMessage;
- (double)messageTimeoutTime;
- (void)setMessageTimeoutTime:(double)arg1;

@end
