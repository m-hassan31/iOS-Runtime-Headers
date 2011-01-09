/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSString, NSInputStream, NSOutputStream, EAAccessory;



@interface EASession : NSObject 
{
    EAAccessory *_accessory;
    NSUInteger _sessionID;
    NSString *_protocolString;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(readonly) NSOutputStream *outputStream;
@property(readonly) NSInputStream *inputStream;
@property(readonly) NSString *protocolString;
@property(readonly) EAAccessory *accessory;


- (id)inputStream;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)outputStream;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)_shortDescription;
- (id)accessory;
- (id)protocolString;
- (NSUInteger)_sessionID;

@end
