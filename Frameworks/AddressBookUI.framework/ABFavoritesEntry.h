/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;



@interface ABFavoritesEntry : NSObject 
{
    NSInteger _abUid;
    NSInteger _abIdentifier;
    NSString *_value;
    NSInteger _property;
    NSInteger _type;
    unsigned int _dirty : 1;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
    void *_addressBook;
}

+ (void)_runLookup;

- (id)initWithPerson:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3;
- (id)initWithPerson:(void*)arg1 property:(NSInteger)arg2 identifier:(NSInteger)arg3 type:(NSInteger)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2;
- (void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2;
- (void*)ABPerson;
- (void)recheckAddressBook;
- (NSInteger)_abUid;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (void)_postEntryChanged;
- (void)_lookupNotFound;
- (void)_lookupChanged:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)displayName;
- (id)dictionaryRepresentation;
- (NSInteger)type;
- (id)label;
- (id)value;
- (NSInteger)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (NSInteger)property;

@end
