/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKService, NSMutableArray, CKConversation;



@interface CKConversationList : NSObject 
{
    NSMutableArray *_conversations;
    CKConversation *_pendingConversation;
    NSMutableArray *_groupsToDelete;
    BOOL _fullyLoaded;
    BOOL _runningInAppIndexer;
    CKService *_service;
}

@property(readonly) CKService *service;


- (void)resetCaches;
- (id)service;
- (NSInteger)unreadCount;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)_recipientForMessage:(id)arg1;
- (id)_newConversationForMessage:(id)arg1 groupID:(NSInteger)arg2;
- (id)_conversationForMessage:(id)arg1 groupID:(NSInteger)arg2 create:(BOOL)arg3;
- (id)conversationForGroupID:(NSInteger)arg1;
- (id)existingConversationForGroupID:(NSInteger)arg1;
- (id)conversationForMessage:(id)arg1 create:(BOOL)arg2;
- (id)activeConversations;
- (void)_addGroupToDeletionSchedule:(NSInteger)arg1;
- (void)_deleteGroups;
- (id)loadedConversations;
- (void)reloadConversations;
- (id)conversations;
- (id)existingConversationForAddresses:(id)arg1;
- (void)setRunningInAppIndexer;
- (void)resort;
- (void)_conversationChanged;
- (void)addConversation:(id)arg1;
- (void)deleteConversationAtIndex:(NSInteger)arg1;
- (id)pendingConversation:(BOOL)arg1;
- (void)fixupNames;
- (id)conversationForRecipients:(id)arg1 create:(BOOL)arg2;
- (void)applyPendingConversation;
- (void)unpendConversation;

@end
