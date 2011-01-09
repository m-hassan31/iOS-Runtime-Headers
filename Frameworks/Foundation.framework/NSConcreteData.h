/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSConcreteData : NSData 
{
    unsigned int _isInline : 1;
    unsigned int _shouldFree : 1;
    unsigned int _hasVM : 1;
    unsigned int _retainCount : 29;
    NSUInteger _length;
    NSUInteger _capacity;
    void *_bytes;
    unsigned char _space[12];
}


- (id)initWithBytes:(void*)arg1 length:(NSUInteger)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (BOOL)_bytesAreVM;
- (void)getBytes:(void*)arg1;
- (void)finalize;
- (void)getBytes:(void*)arg1 length:(NSUInteger)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)length;
- (const void*)bytes;
- (id)init;
- (void)dealloc;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;

@end
