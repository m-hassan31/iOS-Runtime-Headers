/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString;



@interface PTPInitCommandRequestPacket : NSObject 
{
    unsigned char _initiatorGUID[16];
    NSString *_initiatorFriendlyName;
}


- (id)initWithInitiatorGUID:(char *)arg1 initiatorFriendlyName:(id)arg2;
- (const char *)initiatorGUID;
- (void)setInitiatorGUID:(char *)arg1;
- (id)initiatorFriendlyName;
- (void)setInitiatorFriendlyName:(id)arg1;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)contentForTCP;
- (id)description;
- (void)dealloc;

@end
