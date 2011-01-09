/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableSet, NSString, NSThread;



@interface IMExtendedOperation : NSOperation 
{
    NSThread *_operationThread;
    NSString *_operationName;
    NSUInteger _operationState;
    double _operationTimeout;
    NSMutableSet *_childOperations;
}

@property(retain) NSString *name;
@property double timeout;
@property(readonly) NSUInteger state;


- (double)timeout;
- (void)setTimeout:(double)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (void)_setState:(NSUInteger)arg1;
- (NSUInteger)_maxChildOperationState;
- (NSUInteger)_minChildOperationState;
- (void)_startThread;
- (void)_threadedMain;
- (void)_stopWithState:(NSUInteger)arg1;
- (void)_timeout;
- (void)addChildOperation:(id)arg1;
- (void)fail;
- (void)createChildOperations;
- (void)didFinish;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)start;
- (void)cancel;
- (void)setName:(id)arg1;
- (id)name;
- (NSUInteger)state;
- (void)dealloc;

@end
