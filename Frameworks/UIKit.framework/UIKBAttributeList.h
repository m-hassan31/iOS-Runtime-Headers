/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableDictionary;



@interface UIKBAttributeList : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    NSMutableDictionary *m_dict;
    BOOL m_explicit;
}

@property(readonly) NSArray *names;
@property(readonly) NSUInteger count;
@property BOOL explicit;
@property(readonly) NSDictionary *dict;
@property(copy) NSString *name;


- (id)names;
- (void)setBoolValueForName:(BOOL)arg1 forName:(id)arg2;
- (void)setIntValueForName:(NSInteger)arg1 forName:(id)arg2;
- (void)mergeAttributes:(id)arg1;
- (id)valueForName:(id)arg1;
- (NSInteger)intValueForName:(id)arg1;
- (id)arrayValueForName:(id)arg1;
- (BOOL)explicit;
- (id)dict;
- (BOOL)boolValueForName:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
- (void)setExplicit:(BOOL)arg1;
- (id)stringValueForName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (NSUInteger)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
