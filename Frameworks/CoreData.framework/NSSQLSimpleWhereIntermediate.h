/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSExpression;



@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate 
{
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}


- (BOOL)_isNilExpression:(id)arg1;
- (id)_sqlTokenForPredicateOperator:(NSUInteger)arg1 inContext:(id)arg2;
- (id)_generateSQLType1InContext:(id)arg1;
- (id)_generateSQLType2InContext:(id)arg1;
- (long)_cfStringOptionsFromPredicateOptions:(NSUInteger)arg1;
- (id)_generateSQLType3InContext:(id)arg1;
- (id)_generateSQLForMatchingOperator:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForWildSubStringForGlob:(id)arg1 wildStart:(BOOL)arg2 wildEnd:(BOOL)arg3;
- (id)_generateSQLForString:(id)arg1 expressionPath:(id)arg2 wildStart:(BOOL)arg3 wildEnd:(BOOL)arg4 allowToMany:(BOOL)arg5 inContext:(id)arg6;
- (id)_generateSQLSubstringWildStart:(BOOL)arg1 wildEnd:(BOOL)arg2 inContext:(id)arg3;
- (id)_upperBoundSearchStringForString:(id)arg1 context:(id)arg2;
- (id)_generateSQLBeginsWithStringInContext:(id)arg1;
- (id)_generateSQLEndsWithStringInContext:(id)arg1;
- (id)_generateSQLForConst:(id)arg1 inManyToMany:(id)arg2 expression:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForConst:(id)arg1 inToMany:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForConst:(id)arg1 inAttribute:(id)arg2 expression:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLContainmentStringInContext:(id)arg1;
- (id)_generateSQLBetweenStringInContext:(id)arg1;
- (id)_lastScopedItem;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end
