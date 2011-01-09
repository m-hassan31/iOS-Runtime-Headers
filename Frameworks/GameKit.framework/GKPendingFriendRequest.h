/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;



@interface GKPendingFriendRequest : NSObject 
{
    NSString *_recipient;
    NSInteger _recipientKind;
    NSString *_originator;
    NSString *_originatorEmail;
    NSString *_requestID;
    NSString *_message;
    NSString *_handle;
    BOOL _shouldBadge;
    NSUInteger _friendRequestCount;
}

@property NSUInteger friendRequestCount;
@property BOOL shouldBadge;
@property(retain) NSString *handle;
@property(retain) NSString *message;
@property(retain) NSString *requestID;
@property(retain) NSString *originatorEmail;
@property(retain) NSString *originator;
@property NSInteger recipientKind;
@property(retain) NSString *recipient;

+ (id)pushDictionaryForQuery:(id)arg1;

- (id)recipient;
- (void)setRecipient:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)description;
- (void)dealloc;
- (void)setHandle:(id)arg1;
- (id)handle;
- (id)initWithPushDictionary:(id)arg1;
- (id)initWithURLQuery:(id)arg1;
- (NSUInteger)friendRequestCount;
- (void)setFriendRequestCount:(NSUInteger)arg1;
- (BOOL)shouldBadge;
- (void)setShouldBadge:(BOOL)arg1;
- (id)originatorEmail;
- (void)setOriginatorEmail:(id)arg1;
- (id)originator;
- (void)setOriginator:(id)arg1;
- (NSInteger)recipientKind;
- (void)setRecipientKind:(NSInteger)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;

@end
