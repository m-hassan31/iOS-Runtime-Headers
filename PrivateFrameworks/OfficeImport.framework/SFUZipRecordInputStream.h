/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUBufferedInputStream>;



@interface SFUZipRecordInputStream : NSObject 
{
    <SFUBufferedInputStream> *mInput;
    char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}


- (id)initWithDataRepresentation:(id)arg1;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3;
- (void)dealloc;

@end
