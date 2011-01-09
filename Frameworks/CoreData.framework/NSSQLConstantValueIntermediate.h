/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface NSSQLConstantValueIntermediate : NSSQLIntermediate 
{
    NSUInteger _type;
    id _constantValue;
}


- (id)initWithConstantValue:(id)arg1 ofType:(NSUInteger)arg2 inScope:(id)arg3;
- (id)initWithConstantValue:(id)arg1 inScope:(id)arg2;
- (BOOL)_addBindVarForConstId:(id)arg1 ofType:(NSUInteger)arg2 inContext:(id)arg3;
- (id)propertyAtEndOfKeyPathExpression:(id)arg1;
- (NSUInteger)sqlTypeForProperty:(id)arg1;
- (BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end
