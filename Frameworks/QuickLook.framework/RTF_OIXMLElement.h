/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */



@interface RTF_OIXMLElement : RTF_OIXMLNode 
{
    id _attributes;
    id _children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
}

+ (void)_initEmptyHTMLNames;
+ (BOOL)isEmptyHTMLElement:(id)arg1;

- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (NSInteger)attributeCount;
- (id)contentString;
- (void)insertChild:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (NSInteger)childrenCount;
- (id)openingTagString;
- (id)closingTagString;
- (void)addAttribute:(id)arg1;
- (void)addChild:(id)arg1;
- (id)stringValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1;

@end
