/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface __NSCFAttributedString : __NSCFType 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)attributesAtIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2;
- (id)attribute:(id)arg1 atIndex:(NSUInteger)arg2 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3;
- (id)attributedSubstringFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)attributesAtIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(NSUInteger)arg2 longestEffectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withAttributedString:(id)arg2;
- (void)insertAttributedString:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)appendAttributedString:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (void)finalize;
- (void)replaceCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withString:(id)arg2;
- (id)string;
- (void)deleteCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)retainCount;
- (NSUInteger)length;
- (oneway void)release;
- (id)retain;

@end
