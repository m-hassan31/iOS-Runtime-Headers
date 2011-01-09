/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScalingFlipViewDelegate>, UIView;



@interface SUScalingFlipView : UIView 
{
    UIView *_backView;
    <SUScalingFlipViewDelegate> *_delegate;
    NSInteger _direction;
    double _duration;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fromFrame;
    UIView *_frontView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _toFrame;
}

@property double duration;
@property NSInteger direction;
@property <SUScalingFlipViewDelegate> *delegate;


- (id)initWithFrontView:(id)arg1 backView:(id)arg2;
- (void)performFlip;
- (id)_backLayerAnimation;
- (id)_fixedAnimationForAnimation:(id)arg1;
- (id)_frontLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)_transformAnimationWithStart:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1 middle:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 end:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg3;
- (NSInteger)direction;
- (void)setDirection:(NSInteger)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
