/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;



@interface _MFMailboxUidChildrenEnumerator : NSEnumerator 
{
    NSMutableArray *_mailboxes;
    NSUInteger _index;
    BOOL _includeHidden;
}


- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2;
- (id)nextObject;
- (void)dealloc;

@end
