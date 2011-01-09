/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray;



@interface IMOfflinePeopleListGroup : IMPeopleListGroup 
{
    NSMutableArray *_visibleMembers;
    NSMutableArray *_dontShowMembers;
    NSInteger _changes;
    BOOL _pendingClear;
}

@property(readonly) BOOL isChanging;


- (void)removeAllItems;
- (void)endChanges;
- (NSInteger)numberOfItems;
- (id)init;
- (void)dealloc;
- (void)forgetIgnoredPresences;
- (void)_clearVisibleMembers;
- (BOOL)isChanging;
- (void)dontShowPresence:(id)arg1;
- (id)visibleMembers;
- (void)addPeopleListItem:(id)arg1;
- (void)removePeopleListItem:(id)arg1;
- (void)beginChanges;

@end
