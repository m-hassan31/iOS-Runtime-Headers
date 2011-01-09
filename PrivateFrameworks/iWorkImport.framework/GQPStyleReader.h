/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStylesheet, GQDSStyle;



@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler>
{
    NSInteger mStyleType;
    struct __CFArray { } *mEntries;
    GQDSStylesheet *mStylesheet;
    NSInteger mCurrentProperty;
    BOOL mStyleIsIdentified;
    BOOL mStyleIdentiferEqualsParentIdentifier;
    char *mIdentifier;
    char *mUid;
    char *mParentIdentifier;
    GQDSStyle *mStyle;
}

+ (void)initialize;

- (id)initWithStyleType:(NSInteger)arg1;
- (NSInteger)beginReadingFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (NSInteger)doneReading:(id)arg1;
- (void)handleObject:(id)arg1;
- (id)createStyle;
- (BOOL)beginProperty:(const char *)arg1;
- (void)doneProperty;
- (void)handleBoolValue:(BOOL)arg1;
- (void)handleIntValue:(NSInteger)arg1;
- (void)handleFloatValue:(float)arg1;
- (void)handleDoubleValue:(double)arg1;
- (void)dealloc;

@end
