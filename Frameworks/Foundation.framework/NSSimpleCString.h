/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSSimpleCString : NSString 
{
    char *bytes;
    NSInteger numBytes;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (NSUInteger)cStringLength;
- (id)_newSubstringWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (NSUInteger)fastestEncoding;
- (NSUInteger)smallestEncoding;
- (id)initWithCStringNoCopy:(char *)arg1 length:(NSUInteger)arg2;
- (BOOL)canBeConvertedToEncoding:(NSUInteger)arg1;
- (BOOL)getBytes:(void*)arg1 maxLength:(NSUInteger)arg2 usedLength:(NSUInteger*)arg3 encoding:(NSUInteger)arg4 options:(NSUInteger)arg5 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg6 remainingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg7;
- (void)finalize;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (BOOL)hasPrefix:(id)arg1;
- (BOOL)hasSuffix:(id)arg1;
- (NSInteger)compare:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)stringByAppendingString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (NSUInteger)length;
- (BOOL)isEqualToString:(id)arg1;
- (void)dealloc;

@end
