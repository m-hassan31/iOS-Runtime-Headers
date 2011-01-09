/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADOrientedBounds : NSObject 
{
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    float mRotation;
    unsigned int mFlipX : 1;
    unsigned int mFlipY : 1;
}

+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (BOOL)isEqualToOrientedBounds:(id)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
- (BOOL)flipX;
- (void)setOrientedBounds:(id)arg1;
- (BOOL)flipY;
- (void)setFlipX:(BOOL)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFlipY:(BOOL)arg1;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
