/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */



@interface GKConnection : NSObject 
{
}

@property id eventDelegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;
+ (BOOL)isRelayEnabled;

- (void)connect;
- (id)initWithParticipantID:(id)arg1;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (id)eventDelegate;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id*)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id*)arg2;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)cancelConnectParticipant:(id)arg1;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (NSUInteger)gckPID;
- (struct OpaqueGCKSession { }*)gckSession;
- (void)setEventDelegate:(id)arg1;
- (void)preRelease;

@end
