/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, SFUCryptoKey;



@interface SFUFileDataRepresentation : SFUDataRepresentation 
{
    NSString *mPath;
    NSInteger mSharedFd;
    long long mFileLength;
    NSUInteger mFileType;
    BOOL mHasFileAttributes;
    long long mPlaintextDataLength;
    SFUCryptoKey *mCryptoKey;
}


- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(NSInteger)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (void)setFileType:(unsigned long)arg1;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (void)readFileAttributes;
- (long long)encodedLength;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(NSInteger)arg2;
- (BOOL)isReadable;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (BOOL)isEncrypted;
- (unsigned long)fileType;
- (long long)dataLength;
- (id)initWithPath:(id)arg1;
- (id)path;
- (id)description;
- (void)dealloc;

@end
