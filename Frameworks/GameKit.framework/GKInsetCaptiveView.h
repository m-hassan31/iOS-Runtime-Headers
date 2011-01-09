/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIView;



@interface GKInsetCaptiveView : UIView 
{
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    UIView *_captiveSubview;
}

@property(retain) UIView *captiveSubview;
@property UIEdgeInsets contentInsets;


- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setCaptiveSubview:(id)arg1;
- (id)captiveSubview;

@end
