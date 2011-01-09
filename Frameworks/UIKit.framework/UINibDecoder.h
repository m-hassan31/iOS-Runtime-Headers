/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UINibStringIDTable;



@interface UINibDecoder : NSCoder 
{
    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    Class *classes;
    NSString **missingClasses;
    struct UINibDecoderObjectEntry { NSUInteger x1; NSUInteger x2; } *objects;
    struct UINibDecoderValue { NSUInteger x1; NSUInteger x2; } *values;
    char *valueTypes;
    void *valueData;
    NSUInteger valueDataSize;
    struct UINibDecoderHeader { 
        unsigned char type[10]; 
        NSUInteger formatVersion; 
        NSUInteger coderVersion; 
        struct UINibArchiveTableInfo { 
            NSUInteger count; 
            NSUInteger offset; 
        } objects; 
        struct UINibArchiveTableInfo { 
            NSUInteger count; 
            NSUInteger offset; 
        } keys; 
        struct UINibArchiveTableInfo { 
            NSUInteger count; 
            NSUInteger offset; 
        } values; 
        struct UINibArchiveTableInfo { 
            NSUInteger count; 
            NSUInteger offset; 
        } classes; 
    } header;
    id *objectsByObjectID;
    NSUInteger *longObjectClassIDs;
    char *shortObjectClassIDs;
    NSUInteger *keyMasks;
    NSInteger inlinedValueKey;
    struct UINibDecoderRecursiveState { 
        NSInteger objectID; 
        NSInteger nextGenericKey; 
        NSUInteger nextValueSearchIndex; 
        BOOL replaced; 
    } recursiveState;
    UINibStringIDTable *keyIDTable;
    id delegate;
    struct UIKeyToKeyIDCache { 
        NSString *previousKey[64]; 
        void *previousKeyID[64]; 
        BOOL previousKeyExists[64]; 
        NSInteger hashHits; 
        NSInteger hashHotMisses; 
        NSInteger hashColdMisses; 
    } keyIDCache;
    struct UIKeyAndScopeToValueCache { 
        NSUInteger previousScope; 
        NSUInteger previousKey; 
        struct UINibDecoderValue {} *previousValue; 
    } valueCache;
    NSInteger lookupRounds;
    NSInteger maxPossibleLookupRounds;
    NSInteger failedByKeyMask;
    NSInteger savedByKeyMask;
}

@property id delegate;

+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;

- (BOOL)validateAndIndexData:(id)arg1 error:(id*)arg2;
- (BOOL)validateAndIndexClasses:(const void*)arg1 length:(unsigned long)arg2;
- (BOOL)validateAndIndexObjects:(const void*)arg1 length:(unsigned long)arg2;
- (BOOL)validateAndIndexValues:(const void*)arg1 length:(unsigned long)arg2;
- (BOOL)validateAndIndexKeys:(const void*)arg1 length:(unsigned long)arg2;
- (id)nextGenericKey;
- (long long)decodeInt64ForKey:(id)arg1;
- (NSInteger)decodeInt32ForKey:(id)arg1;
- (BOOL)decodeArrayOfFloats:(float*)arg1 count:(NSInteger)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfDoubles:(double*)arg1 count:(NSInteger)arg2 forKey:(id)arg3;
- (BOOL)decodeArrayOfCGFloats:(float*)arg1 count:(NSInteger)arg2 forKey:(id)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeNXObject;
- (id)decodeDataObject;
- (id)decodeObject;
- (id)decodePropertyList;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(NSUInteger)arg2 at:(void*)arg3;
- (void*)decodeBytesWithReturnedLength:(NSUInteger*)arg1;
- (NSInteger)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)initForReadingWithData:(id)arg1 error:(id*)arg2;
- (id)initForReadingWithData:(id)arg1;
- (void)finishDecoding;
- (NSUInteger)systemVersion;
- (NSInteger)decodeIntForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { float x1; float x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (NSInteger)decodeIntegerForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(NSUInteger*)arg2;
- (float)decodeFloatForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
