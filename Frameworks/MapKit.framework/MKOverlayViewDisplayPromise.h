/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKOverlayView;



@interface MKOverlayViewDisplayPromise : NSObject 
{
    MKOverlayView *overlayView;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } mapRect;
    float zoomScale;
    struct $_848 { 
        unsigned int disableDrawing : 1; 
        unsigned int flushOnDisplay : 1; 
        unsigned int needsDisplayOnCancel : 1; 
    } flags;
}


- (void)cancel;
- (void)dealloc;
- (id)initWithOverlayView:(id)arg1 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(float)arg3;
- (void)display;

@end
