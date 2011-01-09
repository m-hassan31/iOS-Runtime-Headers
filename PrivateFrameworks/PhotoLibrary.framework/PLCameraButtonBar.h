/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraButton;



@interface PLCameraButtonBar : UIToolbar 
{
    PLCameraButton *_cameraButton;
}

@property(retain) PLCameraButton *cameraButton;

+ (float)defaultHeight;
+ (id)backgroundImage;

- (id)initInView:(id)arg1 withItems:(struct { NSInteger x1; NSInteger x2; id x3; id x4; float x5; NSInteger x6; SEL x7; id x8; }*)arg2 withCount:(NSInteger)arg3;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)cameraButton;
- (void)setCameraButton:(id)arg1;

@end
