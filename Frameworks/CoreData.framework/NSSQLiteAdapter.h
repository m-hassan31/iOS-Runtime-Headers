/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;



@interface NSSQLiteAdapter : NSSQLAdapter 
{
    NSString *_dbpath;
}


- (id)pathnameForDatabase;
- (id)sqliteVersion;
- (id)initWithSQLCore:(id)arg1;
- (id)createConnection;
- (Class)statementClass;
- (id)typeStringForColumn:(id)arg1;
- (BOOL)supportsCorrelatedSubqueries;
- (id)type;
- (void)dealloc;

@end
