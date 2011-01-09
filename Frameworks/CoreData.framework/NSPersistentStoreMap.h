/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSMappedObjectStore, NSString;



@interface NSPersistentStoreMap : NSObject 
{
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSMutableDictionary *_storeMetadata;
    unsigned long long _nextPK64;
    NSMutableDictionary *_mappings;
}

+ (void)initialize;

- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)externalMapping;
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (void)setDatabaseUUID:(id)arg1;
- (id)_storeMetadataForSaving;
- (unsigned long long)nextPK64;
- (id)databaseUUID;
- (void)_setMetadata:(id)arg1;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (id)handleFetchRequest:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)configurationName;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)store;
- (void)dealloc;

@end
