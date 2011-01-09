/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKMapSnashotRequest : NSObject 
{
    id _requester;
    id _context;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    NSUInteger _zoomLevel;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property CGSize size;
@property NSUInteger zoomLevel;
@property ? coordinate;
@property(retain) id requester;
@property(retain) id context;


- (void)dealloc;
- (struct CGSize { float x1; float x2; })size;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (NSUInteger)zoomLevel;
- (void)setZoomLevel:(NSUInteger)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)requester;
- (void)setRequester:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;

@end