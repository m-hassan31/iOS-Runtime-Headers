/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPinAnnotationViewInternal;



@interface MKPinAnnotationView : MKAnnotationView 
{
    MKPinAnnotationViewInternal *_pinInternal;
}

@property NSUInteger pinColor;
@property BOOL animatesDrop;

+ (id)_shadowImage;
+ (Class)layerClass;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_desiredBounds;
+ (id)_shadowDropAnimation;
+ (id)_dropAnimation;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (id)_pinsWithType:(NSInteger)arg1;
+ (struct CGPoint { float x1; float x2; })_perceivedAnchorPoint;
+ (struct CGPoint { float x1; float x2; })_shadowAnchorPoint;
+ (struct CGPoint { float x1; float x2; })_calloutOffset;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })_perceivedSize;
+ (id)_reuseIdentifier;
+ (void)_initializeSafeCategory;

- (void)_setDelegate:(id)arg1;
- (id)_delegate;
- (void)setAnnotation:(id)arg1;
- (void)_reset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (id)description;
- (void)dealloc;
- (void)setPinColor:(NSUInteger)arg1;
- (NSUInteger)pinColor;
- (id)_pins;
- (id)_highlightedImage;
- (id)_floatingImage;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (void)_setPinType:(NSInteger)arg1;
- (NSInteger)_pinType;
- (void)_removeAllAnimations;
- (void)_cleanupAfterPinDropAnimation;
- (id)_bounceAnimation:(BOOL)arg1 withBeginTime:(double)arg2 addToLayer:(BOOL)arg3;
- (void)_liftForDraggingAnimated:(BOOL)arg1;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_liftDidEnd:(id)arg1;
- (NSInteger)_state;
- (id)_image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (void)_setMapType:(NSUInteger)arg1;
- (NSInteger)_annotationViewType;
- (void)setDragState:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setDragState:(NSUInteger)arg1;
- (void)setAnimatesDrop:(BOOL)arg1;
- (id)_initWithSearchResult:(id)arg1;
- (void)_updatePinType;
- (void)_dropInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDelay:(double)arg2;
- (BOOL)animatesDrop;
- (void)_stopDrop;
- (void)_stopDropAnimationAndDropToPosition;
- (BOOL)isDraggable;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
