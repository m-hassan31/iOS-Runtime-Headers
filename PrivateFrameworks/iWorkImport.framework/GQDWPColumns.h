/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDWPColumns : NSObject <GQDNameMappable>
{
    struct __CFArray { } *mColumns;
    BOOL mEqualColumns;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct __CFArray { }*)columns;
- (BOOL)equalColumns;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)dealloc;

@end
