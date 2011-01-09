/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, UIColor;



@interface MKPanoramaAnnotation : NSObject 
{
    NSInteger _type;
    NSString *_panoramaID;
    NSString *_text;
    NSString *_streetRange;
    double _yaw;
    UIColor *_roadOverlayColor;
}

@property(readonly) UIColor *roadOverlayColor;
@property(readonly) double yaw;
@property(readonly) NSString *streetRange;
@property(readonly) NSString *text;
@property(readonly) NSString *panoramaID;
@property NSInteger type;


- (id)streetRange;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)description;
- (id)text;
- (void)dealloc;
- (id)roadOverlayColor;
- (id)initWithLink:(id)arg1;
- (id)panoramaID;
- (double)yaw;

@end
