/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;



@interface MFBase64Decoder : MFBaseFilterDataConsumer 
{
    NSMutableData *_leftovers;
    NSUInteger _decodedBits;
    NSUInteger _validBytes;
    NSUInteger _equalCount;
    char *_table;
    BOOL _bound;
}

@property BOOL convertCommas;
@property BOOL isBound;
@property(readonly) NSUInteger unconverted;

+ (BOOL)isValidBase64:(id)arg1;

- (unsigned long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long)arg4 startingAt:(unsigned long)arg5 outEncodedOffset:(NSUInteger*)arg6;
- (BOOL)convertCommas;
- (BOOL)isBound;
- (id)initWithConsumers:(id)arg1;
- (void)setConvertCommas:(BOOL)arg1;
- (void)setIsBound:(BOOL)arg1;
- (unsigned long)unconverted;
- (NSInteger)appendData:(id)arg1;
- (void)done;
- (void)dealloc;

@end
