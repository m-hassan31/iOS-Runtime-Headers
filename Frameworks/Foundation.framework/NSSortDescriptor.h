/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;



@interface NSSortDescriptor : NSObject <NSCoding, NSCopying>
{
    NSUInteger _sortDescriptorFlags;
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
}

+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(id)arg3;
+ (id)_defaultSelectorName;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2;
+ (void)initialize;

- (void)_setKey:(id)arg1;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(id)arg3;
- (void)_setAscending:(BOOL)arg1;
- (id)comparator;
- (void)_setSelectorName:(id)arg1;
- (id)_selectorName;
- (id)reversedSortDescriptor;
- (BOOL)_isEqualToSortDescriptor:(id)arg1;
- (NSInteger)compareObject:(id)arg1 toObject:(id)arg2;
- (BOOL)ascending;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
- (id)key;
- (SEL)selector;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
