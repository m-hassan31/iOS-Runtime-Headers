/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableData;



@interface SUDataBufferConsumer : NSObject <SUCollectingDataConsumer>
{
    NSMutableData *_buffer;
}

@property(readonly) NSData *consumedData;


- (id)consumedData;
- (NSInteger)consumeData:(id)arg1;
- (id)init;
- (void)finish;

@end
