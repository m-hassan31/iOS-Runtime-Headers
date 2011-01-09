/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray, NSPort;



@interface NSPortMessage : NSObject 
{
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    NSUInteger msgid;
    void *reserved2;
    void *reserved;
}


- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;
- (id)sendPort;
- (id)receivePort;
- (BOOL)sendBeforeDate:(id)arg1;
- (NSUInteger)msgid;
- (id)components;
- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;
- (void)setMsgid:(NSUInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
