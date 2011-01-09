/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoView, UIView, UINavigationBar;



@interface MPVideoTransferTransitionController : MPTransitionController 
{
    MPVideoView *_inflightVideoView;
    UINavigationBar *_portraitNavigationBar;
    UIView *_topmostView;
    UIView *_transitionBehindView;
}

@property(retain) UIView *topmostView;
@property(retain) UIView *transitionBehindView;
@property(retain) UINavigationBar *portraitNavigationBar;


- (id)init;
- (void)dealloc;
- (id)_topmostViewWindow;
- (void)_prepareViews;
- (void)_transformView:(id)arg1 forOrientation:(NSInteger)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_updateStatusBar;
- (id)topmostView;
- (id)transitionBehindView;
- (void)setTransitionBehindView:(id)arg1;
- (id)portraitNavigationBar;
- (void)_animationDidStop;
- (void)setPortraitNavigationBar:(id)arg1;
- (void)setTopmostView:(id)arg1;
- (void)transition:(NSUInteger)arg1;
- (id)_topmostView;

@end
