/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableData;



@interface SUBufferDataConsumer : NSObject <SUCollectingDataConsumer>
{
    NSMutableData *_dataBuffer;
}

@property(readonly) NSData *consumedData;


- (id)mutableConsumedData;
- (id)consumedData;
- (NSInteger)consumeData:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)finish;

@end
