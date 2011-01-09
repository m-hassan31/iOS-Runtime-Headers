/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;



@interface GKSendFriendRequestDataRequest : GKDataRequest 
{
    NSInteger _recipientType;
    id _recipients;
    NSString *_message;
    id _results;
}

@property(retain) id results;
@property(copy) NSString *message;
@property(retain) id recipients;
@property NSInteger recipientType;


- (id)results;
- (void)setResults:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)key;
- (id)request;
- (void)dealloc;
- (void)processResults:(id)arg1 errorDict:(id)arg2 forKey:(id)arg3 recipients:(id)arg4;
- (id)recipients;
- (NSInteger)recipientType;
- (id)errorForResponse:(id)arg1;
- (void)setRecipientType:(NSInteger)arg1;
- (void)setRecipients:(id)arg1;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;

@end
