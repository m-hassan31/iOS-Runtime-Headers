/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableDictionary;



@interface AVChatInvitationOp : AVChatNegotiationOp 
{
    NSMutableDictionary *_inviteesInfo;
    BOOL _audioOnly;
}


- (id)initWithParticipant:(id)arg1 conferenceID:(id)arg2;
- (void)createChildOperations;
- (void)didFinish;
- (void)main;
- (void)dealloc;

@end
