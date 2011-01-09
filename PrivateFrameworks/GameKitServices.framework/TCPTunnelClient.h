/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSMutableData, NSString;



@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel>
{
    BOOL _isConnected;
    NSInteger _connectedFD;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _allocationResponseHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _bindingResponseHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _destroyHandler;

    struct dispatch_queue_s { } *_outQueue;
    struct dispatch_queue_s { } *_inQueue;
    struct dispatch_source_s { } *_readSource;
    NSMutableData *_currentlyReadingMessage;
    NSInteger _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    NSInteger _currentPadding;
    NSString *_participantID;
    unsigned short _channelNumber;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } mutex;
    NSDictionary *_reqRespDict;
    NSDictionary *_relayUpdateDict;
    struct tagIPPORT { 
        NSInteger iFlags; 
        BOOL szIfName[16]; 
        union { 
            NSUInteger dwIPv4; 
            unsigned char abIPv6[16]; 
        } IP; 
        unsigned short wPort; 
    } _serverIPPort;
    NSInteger _callID;
}

@property(retain) NSString *participantID;


- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(NSInteger)arg2;
- (BOOL)sendAllocateMsg;
- (BOOL)sendChannelBindingMsgWithDict:(id)arg1;
- (BOOL)sendRefreshMsg:(NSUInteger)arg1;
- (void)unbindChannel;
- (void)closeTunnelSocket;
- (BOOL)isTunnelSocketClosed;
- (void)processSocketRead;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 toParticipantID:(id)arg3;
- (void)setReceiveHandler:(id)arg1;
- (void)setAllocationResponseHandler:(id)arg1;
- (void)setTerminationHandler:(id)arg1;
- (void)setBindingResponseHandler:(id)arg1;
- (void)setDestroyHandler:(id)arg1;
- (void)receivedControlData:(id)arg1;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (void)setParticipantID:(id)arg1;
- (id)participantID;

@end
