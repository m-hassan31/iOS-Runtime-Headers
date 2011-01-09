/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSMutableArray, UIView;



@interface UISegmentedControl : UIControl <NSCoding>
{
    NSMutableArray *_segments;
    NSInteger _selectedSegment;
    NSInteger _highlightedSegment;
    UIView *_removedSegment;
    id _delegate;
    UIColor *_tintColor;
    NSInteger _barStyle;
    void *_appearance;
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int showsDisclosure : 1; 
        unsigned int delegateSelectedSegmentChanged : 1; 
        unsigned int delegateDisclosureButtonClicked : 1; 
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks : 1; 
        unsigned int momentaryClick : 1; 
        unsigned int dontAlwaysToggleForTwoSegments : 1; 
        unsigned int tracking : 1; 
        unsigned int mouseInside : 1; 
        unsigned int autosizeToFitSegments : 1; 
        unsigned int isSizingToFit : 1; 
        unsigned int autosizeText : 1; 
        unsigned int transparentBackground : 1; 
    } _segmentedControlFlags;
}

@property(retain) UISegment *removedSegment;
@property NSInteger selectedSegmentIndex;
@property(getter=isMomentary) BOOL momentary;
@property(readonly) NSUInteger numberOfSegments;
@property NSInteger segmentedControlStyle;
@property(retain) UIColor *tintColor;

+ (float)defaultHeightForStyle:(NSInteger)arg1 size:(NSInteger)arg2;
+ (float)defaultHeightForStyle:(NSInteger)arg1;
+ (float)defaultHeight;
+ (void)_initializeSafeCategory;

- (void)setRemovedSegment:(id)arg1;
- (id)removedSegment;
- (void)_commonSegmentedControlInit;
- (id)initWithItems:(id)arg1;
- (void)_resetForAppearanceChange;
- (void)_setSegmentedControlAppearance:(struct { id x1; float x2; float x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_4_1_6; } x4; struct { id x_5_1_1; id x_5_1_2; id x_5_1_3; id x_5_1_4; id x_5_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_5_1_6; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_6_1_6; } x6; struct { id x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; id x_7_1_5; struct CGSize { float x_6_2_1; float x_6_2_2; } x_7_1_6; } x7; BOOL x8; }*)arg1;
- (NSInteger)segmentedControlStyle;
- (void)setSegmentedControlStyle:(NSInteger)arg1;
- (NSInteger)segmentControlStyle;
- (void)setSegmentControlStyle:(NSInteger)arg1;
- (BOOL)isMomentary;
- (void)setMomentary:(BOOL)arg1;
- (void)setAlwaysToggleForTwoSegments:(BOOL)arg1;
- (void)_setAutosizeText:(BOOL)arg1;
- (void)setTransparentBackground:(BOOL)arg1;
- (BOOL)transparentBackground;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)removeSegmentAtIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)removeAllSegments;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (id)titleForSegmentAtIndex:(NSUInteger)arg1;
- (void)setImage:(id)arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (id)imageForSegmentAtIndex:(NSUInteger)arg1;
- (void)setWidth:(float)arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (float)widthForSegmentAtIndex:(NSUInteger)arg1;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (struct CGSize { float x1; float x2; })contentOffsetForSegmentAtIndex:(NSUInteger)arg1;
- (void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(NSUInteger)arg2;
- (BOOL)isEnabledForSegmentAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfSegments;
- (NSInteger)selectedSegmentIndex;
- (void)setSelectedSegmentIndex:(NSInteger)arg1;
- (void)highlightSegment:(NSInteger)arg1;
- (void)_createSegmentAtIndex:(NSInteger)arg1 position:(NSUInteger)arg2 withInfo:(id)arg3;
- (void)_insertSegment:(NSInteger)arg1 withInfo:(id)arg2 animated:(BOOL)arg3;
- (void)_clearSelectedSegment;
- (void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)infoViewForSegment:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(NSInteger)arg2 withItems:(id)arg3;
- (void)setShowsDisclosure:(BOOL)arg1;
- (void)setMomentaryClick:(BOOL)arg1;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1;
- (void)setImagePadding:(struct CGSize { float x1; float x2; })arg1 forSegment:(NSUInteger)arg2;
- (void)selectSegment:(NSInteger)arg1;
- (void)addSegmentWithTitle:(id)arg1;
- (void)insertSegment:(NSUInteger)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(NSUInteger)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)removeSegment:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setTitle:(id)arg1 forSegment:(NSUInteger)arg2;
- (id)titleForSegment:(NSUInteger)arg1;
- (void)setImage:(id)arg1 forSegment:(NSUInteger)arg2;
- (id)imageForSegment:(NSUInteger)arg1;
- (void)setWidth:(float)arg1 forSegment:(NSUInteger)arg2;
- (float)widthForSegment:(NSUInteger)arg1;
- (void)setContentOffset:(struct CGSize { float x1; float x2; })arg1 forSegment:(NSUInteger)arg2;
- (struct CGSize { float x1; float x2; })contentOffsetForSegment:(NSUInteger)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(NSUInteger)arg2;
- (BOOL)isEnabledForSegment:(NSUInteger)arg1;
- (void)setSelectedSegment:(NSInteger)arg1;
- (NSInteger)selectedSegment;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)shouldTrack;
- (void)updateForMiniBarState:(BOOL)arg1;
- (void)setControlSize:(NSInteger)arg1;
- (NSInteger)controlSize;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (NSInteger)barStyle;
- (void)sizeToFit;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (BOOL)useBlockyMagnificationInClassic;
- (id)scriptingInfoWithChildren;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityTreeHidden;
- (void)_gkApplyTheme:(id)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;

@end
