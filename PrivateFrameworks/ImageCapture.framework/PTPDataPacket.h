/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;



@interface PTPDataPacket : NSObject 
{
    unsigned short _operationCode;
    NSUInteger _transactionID;
    id _data;
    NSString *_filepath;
    NSInteger _fd;
    long long _bufferSize;
    long long _offsetInBuffer;
    struct _PTPRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    long long _bytesTransferred;
}


- (NSInteger)setRange:(struct _PTPRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)filepath;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andFilepath:(id)arg3;
- (id)initWithUSBBuffer:(void*)arg1;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (void)setOperationCode:(unsigned short)arg1;
- (long long)bufferSize;
- (long long)offsetInBuffer;
- (long long)bytesTransferred;
- (void)setBytesTransferred:(long long)arg1;
- (long long)copyToBuffer:(void*)arg1 numBytes:(long long)arg2;
- (long long)copyToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2;
- (long long)copyFromBuffer:(void*)arg1 numBytes:(long long)arg2;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned short)operationCode;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andData:(id)arg3;
- (struct _PTPRange { unsigned long long x1; unsigned long long x2; })range;
- (id)data;
- (id)description;
- (void)dealloc;
- (void)setData:(id)arg1;

@end
