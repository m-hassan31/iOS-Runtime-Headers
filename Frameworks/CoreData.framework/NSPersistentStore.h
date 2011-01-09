/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSString, NSPersistentStoreCoordinator, NSDictionary, NSURL;



@interface NSPersistentStore : NSObject 
{
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_configurationName;
    NSURL *_url;
    NSDictionary *_options;
    NSMutableDictionary *_oidFactories;
    id _defaultFaultHandler;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    } _flags;
    void *_temporaryIDClass;
    void *_reserved2;
    void *_reserved3;
}

+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 error:(id*)arg3 options:(id)arg4;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (BOOL)loadMetadata:(id*)arg1;
- (Class)_objectIDClass;
- (Class)faultHandlerClass;
- (Class)objectIDClassForEntity:(id)arg1;
- (BOOL)_unload:(id*)arg1;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_defaultMetadata;
- (void)_updateMetadata;
- (void)_preflightCrossCheck;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(BOOL)arg1;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)persistentStoreCoordinator;
- (id)configurationName;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)faultHandler;
- (BOOL)_isMetadataDirty;
- (void)_setMetadataDirty:(BOOL)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (BOOL)load:(id*)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (void)_didLoadMetadata;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)objectIDFactoryForEntity:(id)arg1;
- (BOOL)isReadOnly;
- (id)options;
- (void)setURL:(id)arg1;
- (void)finalize;
- (id)type;
- (id)URL;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setReadOnly:(BOOL)arg1;

@end
