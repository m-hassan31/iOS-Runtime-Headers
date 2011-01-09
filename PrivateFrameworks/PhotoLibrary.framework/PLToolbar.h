/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar;



@interface PLToolbar : UIToolbar 
{
    unsigned int _backgroundHidden : 1;
    unsigned int _backgroundAlwaysVisible : 1;
    UIToolbar *_persistentToolbar;
}

@property(getter=isBackgroundHidden) BOOL backgroundHidden;
@property(getter=isBackgroundAlwaysVisible) BOOL backgroundAlwaysVisible;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)backgroundHidden;
- (void)setBackgroundHidden:(BOOL)arg1;
- (BOOL)backgroundAlwaysVisible;
- (void)setBackgroundAlwaysVisible:(BOOL)arg1;

@end
