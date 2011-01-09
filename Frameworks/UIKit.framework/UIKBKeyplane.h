/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKBIdentifierList, UIKBAttributeList, NSMutableArray;



@interface UIKBKeyplane : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    NSMutableArray *m_keylayouts;
    UIKBAttributeList *m_attributes;
    UIKBIdentifierList *m_supportedTypes;
    NSArray *m_keys;
}

@property(readonly) NSArray *keys;
@property(readonly) NSArray *keysOrderedByPosition;
@property(copy) UIKBIdentifierList *supportedTypes;
@property(copy) UIKBAttributeList *attributes;
@property(retain) NSArray *keylayouts;
@property(retain) NSString *name;

+ (id)keyplane;

- (id)initWithName:(id)arg1 keylayouts:(id)arg2 attributes:(id)arg3 supportedTypes:(id)arg4;
- (id)keylayoutWithName:(id)arg1;
- (BOOL)usesAdaptiveKeys;
- (id)supportedTypes;
- (void)setSupportedTypes:(id)arg1;
- (void)setKeylayouts:(id)arg1;
- (BOOL)looksLike:(id)arg1;
- (id)keys;
- (id)keylayouts;
- (void)layoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)looksLikeShiftAlternate;
- (id)shiftAlternateKeyplaneName;
- (BOOL)supportsType:(NSInteger)arg1;
- (BOOL)isShiftKeyplane;
- (BOOL)usesKeyCharging;
- (id)keysByKeyName:(id)arg1;
- (id)keysOrderedByPosition;
- (id)alternateKeyplaneName;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (BOOL)usesAutoShift;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)shouldSkipCandidateSelection;
- (void)setName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
