/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface __NSCFString : __NSCFType 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)isNSString__;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (const unsigned short*)_fastCharacterContents;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (NSUInteger)cStringLength;
- (id)_newSubstringWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (NSUInteger)fastestEncoding;
- (NSUInteger)smallestEncoding;
- (BOOL)_isCString;
- (void)insertString:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)appendCharacters:(const unsigned short*)arg1 length:(NSUInteger)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getLineStart:(NSUInteger*)arg1 end:(NSUInteger*)arg2 contentsEnd:(NSUInteger*)arg3 forRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4;
- (id)substringWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (Class)classForCoder;
- (void)finalize;
- (void)replaceCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withString:(id)arg2;
- (BOOL)getCString:(char *)arg1 maxLength:(NSUInteger)arg2 encoding:(NSUInteger)arg3;
- (NSUInteger)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(NSUInteger)arg3 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (const char *)cString;
- (BOOL)hasPrefix:(id)arg1;
- (BOOL)hasSuffix:(id)arg1;
- (void)setString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)appendFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)retainCount;
- (NSUInteger)length;
- (const char *)UTF8String;
- (void)appendString:(id)arg1;
- (const char *)cStringUsingEncoding:(NSUInteger)arg1;
- (oneway void)release;
- (id)retain;
- (BOOL)isEqualToString:(id)arg1;

@end
