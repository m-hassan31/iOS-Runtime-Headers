/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */



@interface EKDayTimeView : UIView 
{
    unsigned int _leftBorder : 1;
}

@property BOOL showsLeftBorder;

+ (float)defaultHeight;
+ (float)designatorSize;
+ (float)hourSize;
+ (float)verticalPadding;
+ (float)timeInset;
+ (float)timeWidth;
+ (float)hourHeight;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (float)timeInset;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (BOOL)showsLeftBorder;
- (void)_localeChanged;

@end
