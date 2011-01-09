/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSet, NSMutableDictionary;



@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    id _dataForOptimization;
    id *_optimizationHints;
    id _localizationPolicy;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_configurations;
    NSMutableDictionary *_fetchRequestTemplates;
    NSSet *_versionIdentifiers;
    struct __managedObjectModelFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isOptimizedForEncoding : 1; 
        unsigned int _reservedEntityDescription : 29; 
    } _managedObjectModelFlags;
}

+ (id)mergedModelFromBundles:(id)arg1;
+ (id)modelByMergingModels:(id)arg1;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2;
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (void)initialize;

- (id)initWithContentsOfURL:(id)arg1;
- (void)setEntities:(id)arg1;
- (id)configurations;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (id)fetchRequestTemplatesByName;
- (id)fetchRequestTemplateForName:(id)arg1;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
- (id)localizationDictionary;
- (void)setLocalizationDictionary:(id)arg1;
- (id)versionIdentifiers;
- (void)setVersionIdentifiers:(id)arg1;
- (id)entityVersionHashesByName;
- (BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
- (id)initWithContentsOfOptimizedURL:(id)arg1;
- (id)_optimizedEncoding:(id*)arg1;
- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;
- (id)_modelForVersionHashes:(id)arg1;
- (id)_initWithEntities:(id)arg1;
- (BOOL)_hasPrecomputedKeyOrder;
- (id)_precomputedKeysForEntity:(id)arg1;
- (void)_setIsEditable:(BOOL)arg1 optimizationStyle:(NSUInteger)arg2;
- (void)_removeEntityNamed:(id)arg1;
- (id)_configurationsByName;
- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (void)_setLocalizationPolicy:(id)arg1;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (void)_addVersionIdentifiers:(id)arg1;
- (id)_entitiesByVersionHash;
- (id)_versionIdentifiersAsArray;
- (id)_localizationPolicy;
- (id)_entityForName:(id)arg1;
- (void)_removeEntity:(id)arg1;
- (void)_addEntity:(id)arg1;
- (BOOL)_isOptimizedForEncoding;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_flattenProperties;
- (void)_stripForMigration;
- (void)_restoreValidation;
- (void)_throwIfNotEditable;
- (void)_createCachesAndOptimizeState;
- (id)entitiesForConfiguration:(id)arg1;
- (id)entitiesByName;
- (id)versionHash;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEditable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)entities;

@end
