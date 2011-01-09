/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUInputSource : NSObject 
{
}

@property(readonly) long long expectedLength;
@property(readonly) BOOL hasBytesAvailable;
@property(readonly) NSUInteger minimumReadLength;


- (id)copyAllData:(id*)arg1;
- (long long)expectedLength;
- (BOOL)open:(id*)arg1;
- (NSUInteger)minimumReadLength;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)hasBytesAvailable;
- (void)close;

@end
