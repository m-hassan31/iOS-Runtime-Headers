/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableMetadataItemInternal;



@interface AVMutableMetadataItem : AVMetadataItem 
{
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property(copy) <NSObject><NSCopying> *key;
@property(copy) NSString *keySpace;
@property(copy) NSLocale *locale;
@property ? time;
@property ? duration;
@property(copy) <NSObject><NSCopying> *value;
@property(copy) NSDictionary *extraAttributes;

+ (id)metadataItem;

- (void)setKeySpace:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (id)keySpace;
- (id)extraAttributes;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })time;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })duration;

@end
