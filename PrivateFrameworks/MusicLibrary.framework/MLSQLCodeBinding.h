/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSData;



@interface MLSQLCodeBinding : NSObject 
{
    NSUInteger _valueType;
    union { 
        NSString *stringValue; 
        NSData *dataValue; 
        NSUInteger uint32Value; 
        unsigned long long uint64Value; 
        long long int64Value; 
        long long rowidValue; 
    } _value;
}

+ (id)placeholder;
+ (id)bindingWithUInt32:(NSUInteger)arg1;
+ (id)bindingWithUInt64:(unsigned long long)arg1;
+ (id)bindingWithSInt64:(long long)arg1;
+ (id)bindingWithStringValue:(id)arg1;
+ (id)bindingWithDataValue:(id)arg1 noCopy:(BOOL)arg2;
+ (id)bindingWithCPRecordID:(NSInteger)arg1 store:(struct CPRecordStore { }*)arg2;

- (id)description;
- (void)dealloc;
- (id)bindableStringValue;
- (BOOL)isPlaceholder;
- (void)bindToSQLStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 bindingIndex:(NSUInteger)arg2;

@end
