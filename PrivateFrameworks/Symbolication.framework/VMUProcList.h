/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMapTable, NSLock;



@interface VMUProcList : NSObject 
{
    NSLock *procLock;
    NSMapTable *allProcs;
    NSMapTable *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}


- (void)setProcInfos:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)_populateFromSystem;
- (BOOL)updateFromSystem;
- (void)setOwnedOnly:(BOOL)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (void)setAppsOnly:(BOOL)arg1;
- (id)allProcInfos;
- (id)allPIDs;
- (id)allNames;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)procInfoWithPID:(NSInteger)arg1;
- (BOOL)appsOnly;
- (void)finalize;
- (BOOL)update;
- (id)init;
- (NSUInteger)count;
- (void)dealloc;

@end
