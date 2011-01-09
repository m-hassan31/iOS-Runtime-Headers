/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary;



@interface NSDictionaryStoreMap : NSPersistentStoreMap 
{
    NSMutableDictionary *_theMap;
}

+ (void)initialize;

- (id)initWithStore:(id)arg1 fromArchivedData:(id)arg2;
- (id)_theDictionary;
- (id)_nodeFromObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (id)handleFetchRequest:(id)arg1;
- (id)_archivedData;
- (id)dataForKey:(id)arg1;
- (id)initWithStore:(id)arg1 fromPath:(id)arg2;
- (id)initWithStore:(id)arg1;
- (void)saveToPath:(id)arg1;
- (void)dealloc;

@end
