/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableTimedMetadataGroupInternal;



@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup 
{
    AVMutableTimedMetadataGroupInternal *_mutablePriv;
}

@property ? timeRange;
@property(copy) NSArray *items;


- (void)setTimeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)setItems:(id)arg1;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
