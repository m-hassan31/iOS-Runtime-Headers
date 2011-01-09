/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary;



@interface NSAtomicStore : NSPersistentStore 
{
    NSMutableDictionary *_nodeCache;
    NSMutableDictionary *_entityCache;
    NSMutableDictionary *_storeMetadata;
    NSInteger _nextReference;
    void *_reserved4;
    void *_reserved5;
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;

- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (BOOL)save:(id*)arg1;
- (BOOL)load:(id*)arg1;
- (void)addCacheNodes:(id)arg1;
- (id)cacheNodes;
- (void)willRemoveCacheNodes:(id)arg1;
- (id)cacheNodeForObjectID:(id)arg1;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (id)objectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)referenceObjectForObjectID:(id)arg1;
- (void)_registerCacheNode:(id)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;
- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;
- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;
- (id)executeRefreshRequest:(id)arg1 withContext:(id)arg2;
- (id)_retrieveNodeForObjectID:(id)arg1;
- (id)_retrieveNodeForObject:(id)arg1;
- (void)_insertNodeIntoMainCache:(id)arg1;
- (void)_insertNodeIntoEntityCache:(id)arg1;
- (void)_deleteNodeFromMainCache:(id)arg1;
- (void)_deleteNodeFromEntityCache:(id)arg1;
- (id)_retrieveNodesSatisfyingRequest:(id)arg1;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)_didLoadMetadata;
- (void)_storeNextReferenceInMetadata;
- (id)_getNewIDForObject:(id)arg1;
- (void)_addObject:(id)arg1;
- (void)_removeObject:(id)arg1;
- (void)_updateObject:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)_retainedObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)init;
- (void)dealloc;

@end
