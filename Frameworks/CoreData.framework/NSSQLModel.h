/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSString, NSKnownKeysDictionary, NSMutableArray, NSManagedObjectModel;



@interface NSSQLModel : NSStoreMapping 
{
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    NSUInteger _brokenHashVersion;
    NSMutableDictionary *_cachedFabricatedEntities;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
}


- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(NSUInteger)arg4;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (void)_generateModel:(id)arg1;
- (id)_entityMapping;
- (unsigned long)entityIDForName:(id)arg1;
- (BOOL)_retainHashHack;
- (BOOL)_modelHasPrecomputedKeyOrder;
- (BOOL)_useLeopardStyleHashing;
- (BOOL)_useSnowLeopardStyleHashing;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (void)_addIndexedEntity:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(NSUInteger)arg3;
- (id)entityForID:(unsigned long)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3;
- (id)entityNamed:(id)arg1;
- (id)configurationName;
- (id)managedObjectModel;
- (id)entitiesByName;
- (void)dealloc;
- (id)entities;

@end
