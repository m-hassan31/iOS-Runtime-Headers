/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */



@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter 
{
    void *_store;
    BOOL _recordIsGroup;
    BOOL _importingToExistingGroup;
}

+ (struct __CFDictionary { }*)_personToGroupPropertyMap;
+ (NSInteger)groupPropertyForPersonProperty:(NSInteger)arg1;

- (void)setRecordIsGroup:(BOOL)arg1;
- (void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(NSUInteger*)arg2;
- (void)_drainExistingProperties;
- (id)initWithPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)setImageData:(id)arg1;
- (BOOL)setValue:(void*)arg1 forProperty:(NSUInteger)arg2;

@end
