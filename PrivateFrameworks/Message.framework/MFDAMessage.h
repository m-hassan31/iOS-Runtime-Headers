/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class Message, MailboxUid, DAMailMessage;



@interface MFDAMessage : MailMessage 
{
    DAMailMessage *_DAMailMessage;
    Message *_rfc822CreatedMessage;
    MailboxUid *_mailbox;
}


- (id)messageBody;
- (id)remoteID;
- (id)mailbox;
- (id)DAMailMessage;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)remoteMailboxURL;
- (BOOL)messageData:(id*)arg1 messageSize:(NSUInteger*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (unsigned long long)messageFlags;
- (NSUInteger)messageSize;
- (void)dealloc;
- (id)headers;

@end
