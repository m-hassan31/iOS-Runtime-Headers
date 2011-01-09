/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray;



@interface ISURLOperationPoolOperation : ISOperation 
{
    NSInteger _cancelCount;
    BOOL _forwardImmediately;
    NSMutableArray *_operations;
}

@property(readonly) ISURLOperation *mainOperation;


- (void)addOperation:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)mainOperation;
- (void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2;
- (BOOL)containsOperation:(id)arg1;

@end
