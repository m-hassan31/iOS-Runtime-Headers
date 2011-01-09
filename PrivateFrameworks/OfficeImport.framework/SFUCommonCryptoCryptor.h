/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUCryptoKey;



@interface SFUCommonCryptoCryptor : SFUCryptor 
{
    NSInteger mOperation;
    SFUCryptoKey *mKey;
    struct _CCCryptor { } *mCryptor;
    NSUInteger mBlockSize;
    BOOL mFinished;
    char *mDecryptionInputBuffer;
    char *mOutputBuffer;
    char *mOutputBufferPos;
    NSUInteger mOutputBufferAvailable;
}


- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5;
- (BOOL)cryptDataFromBuffer:(const char *)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(NSUInteger*)arg5 error:(id*)arg6;
- (id)initWithKey:(id)arg1 operation:(NSInteger)arg2 iv:(const char *)arg3 ivLength:(unsigned long)arg4;
- (BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char *)arg2 length:(unsigned long)arg3 bytesRead:(NSUInteger*)arg4 error:(id*)arg5;
- (void)dealloc;

@end
