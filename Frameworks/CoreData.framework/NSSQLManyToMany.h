/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;



@interface NSSQLManyToMany : NSSQLRelationship 
{
    NSString *_correlationTableName;
    NSString *_columnName;
}


- (void)_setCorrelationTableName:(id)arg1;
- (BOOL)isTableSchemaEqual:(id)arg1;
- (void)_setInverseManyToMany:(id)arg1;
- (BOOL)isReflexive;
- (id)inverseManyToMany;
- (BOOL)isMaster;
- (void)_setColumnName:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)columnName;
- (id)correlationTableName;
- (id)inverseColumnName;
- (void)dealloc;

@end
