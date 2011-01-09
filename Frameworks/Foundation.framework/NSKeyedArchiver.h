/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSKeyedArchiver : NSCoder 
{
    void *_stream;
    NSUInteger _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    NSUInteger _genericKey;
    void *_cache;
    NSUInteger _cacheSize;
    NSUInteger _estimatedCount;
    void *_reserved2;
    id _visited;
    void *_reserved0;
}

+ (void)setClassName:(id)arg1 forClass:(Class)arg2;
+ (id)classNameForClass:(Class)arg1;
+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (void)initialize;

- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (void)_setBlobForCurrentObject:(id)arg1;
- (id)_initWithOutput:(id)arg1;
- (void)setOutputFormat:(NSUInteger)arg1;
- (NSUInteger)outputFormat;
- (void)setClassName:(id)arg1 forClass:(Class)arg2;
- (id)classNameForClass:(Class)arg1;
- (id)_blobForCurrentObject;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (NSInteger)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (NSUInteger)systemVersion;
- (void)encodeInt:(NSInteger)arg1 forKey:(id)arg2;
- (void)finalize;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (void)encodeBytes:(const char *)arg1 length:(NSUInteger)arg2 forKey:(id)arg3;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)encodeObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeInt32:(NSInteger)arg1 forKey:(id)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(NSUInteger)arg2 at:(const void*)arg3;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)finishEncoding;

@end
