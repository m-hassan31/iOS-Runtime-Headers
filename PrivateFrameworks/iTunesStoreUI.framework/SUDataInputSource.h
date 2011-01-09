/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData;



@interface SUDataInputSource : SUInputSource 
{
    NSData *_data;
    NSInteger _offset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _promiseBlock;

}

@property(readonly) NSData *data;


- (id)copyAllData:(id*)arg1;
- (long long)expectedLength;
- (BOOL)open:(id*)arg1;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2 error:(id*)arg3;
- (id)initWithDataPromise:(id)arg1;
- (BOOL)hasBytesAvailable;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
