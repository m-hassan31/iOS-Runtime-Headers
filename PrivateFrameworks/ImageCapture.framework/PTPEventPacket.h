/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface PTPEventPacket : NSObject 
{
    NSInteger _numParameters;
    unsigned short _eventCode;
    NSUInteger _transactionID;
    NSUInteger _parameters[3];
}


- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (void)setEventCode:(unsigned short)arg1;
- (void)setParameter1:(unsigned long)arg1;
- (void)setParameter2:(unsigned long)arg1;
- (void)setParameter3:(unsigned long)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned short)eventCode;
- (unsigned long)parameter1;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (unsigned long)parameter2;
- (unsigned long)parameter3;
- (id)description;

@end
