/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImageView;



@interface MKTransitCalloutView : MKAnnotationView <MKOrientable>
{
    UIImageView *_iconView;
    NSInteger _orientation;
}

@property(readonly) MKRouteStep *step;
@property(retain) UIImage *icon;
@property NSInteger _orientation;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleFrameForType:(NSInteger)arg1;
+ (id)_imageForType:(NSInteger)arg1;

- (void)setIcon:(id)arg1;
- (id)icon;
- (void)dealloc;
- (NSInteger)_orientation;
- (void)_updateCalloutOffset;
- (void)_layoutIcon;
- (void)_updateAnchorPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (NSInteger)_annotationViewType;
- (id)rightCalloutAccessoryView;
- (NSUInteger)_orientationCount;
- (void)set_orientation:(NSInteger)arg1;
- (id)initWithStep:(id)arg1;
- (id)step;

@end
