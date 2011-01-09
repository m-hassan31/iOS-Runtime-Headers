/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, MKPanoramaPlaceholderGeometry, MKStreetViewMinimapGeometry, NSTimer, MKStreetView, MKPanoramaAnnotationGeometry, MKPanorama, NSMutableDictionary, MKSearchResult, MKPanoramaSphereGeometry, MKStreetViewTileDecoder, EAGLContext, CADisplayLink, MKStreetViewTexture, MKStreetViewLabelCache, MKPanoramaTextures, MKStreetViewGeometry, GMMStreetViewReportRequest, UIImageView, MKPanoramaLoader;



@interface MKStreetViewInternal : NSObject 
{
    MKStreetView *view;
    MKSearchResult *searchResult;
    MKPanorama *panorama;
    MKPanorama *previousPanorama;
    MKPanoramaLoader *panoramaLoader;
    GMMStreetViewReportRequest *gmmReport;
    NSString *copyright;
    BOOL enablePrefetching;
    BOOL enableUserImmersiveInteraction;
    BOOL showsCopyright;
    BOOL showsPegman;
    BOOL showsAnnotations;
    UIImageView *pegmanView;
    NSUInteger maxZoomLevel;
    float maxZoomScaleFactor;
    double yaw;
    double pitch;
    id delegate;
    float screenWidth;
    float screenHeight;
    NSMutableDictionary *anchorTouches;
    BOOL hasTouched;
    BOOL dragging;
    BOOL pitchLocked;
    BOOL zooming;
    BOOL canTap;
    struct CGPoint { 
        float x; 
        float y; 
    } tapPoint;
    NSUInteger nextValidTapCount;
    float anchorTheta;
    float anchorPhi;
    float anchorFov;
    float anchorNearH;
    float anchorNearV;
    float anchorAngle;
    float yawVelocity;
    float pitchVelocity;
    float previousYawVelocity;
    float previousPitchVelocity;
    float yawTolerance;
    double lastTouchTime;
    BOOL pipPressed;
    CADisplayLink *displayLink;
    NSTimer *tapTimer;
    BOOL pendingFade;
    NSInteger transitionType;
    double transitionStartTime;
    double transitionDuration;
    BOOL reverseMapTransition;
    float transitionDirectionX;
    float transitionDirectionY;
    float transitionDirectionZ;
    float transitionYawAdjust;
    BOOL smoothScrolling;
    double lastScrollTime;
    double bounceStartTime;
    float bounceCenter;
    float bounceInitialOffset;
    float bounceInitialVelocity;
    BOOL rotating;
    double rotationStartTime;
    double rotationDuration;
    float panoRotationStartAngle;
    float panoRotationEndAngle;
    float panoRotationStartPipX;
    float panoRotationEndPipX;
    float panoRotationStartPipY;
    float panoRotationEndPipY;
    float zoomStartFov;
    float zoomEndFov;
    EAGLContext *context;
    NSUInteger renderbuffer;
    NSUInteger framebuffer;
    NSInteger bufferWidth;
    NSInteger bufferHeight;
    NSInteger mapOrientation;
    NSInteger streetViewOrientation;
    NSInteger renderOrientation;
    float fov;
    float hfov;
    float vfov;
    float near;
    float nearV;
    float nearH;
    float far;
    float sizeV;
    float sizeH;
    MKPanoramaPlaceholderGeometry *placeholder;
    MKPanoramaSphereGeometry *sphere;
    MKPanoramaSphereGeometry *previousSphere;
    MKPanoramaAnnotationGeometry *annotationGeometry;
    MKPanoramaAnnotationGeometry *previousAnnotationGeometry;
    MKPanoramaTextures *textures;
    MKPanoramaTextures *previousTextures;
    MKStreetViewTileDecoder *tileDecoder;
    MKStreetViewLabelCache *labelCache;
    MKStreetViewGeometry *googleQuad;
    MKStreetViewTexture *googleTexture;
    MKStreetViewMinimapGeometry *minimap;
    BOOL showsMinimap;
    MKStreetViewTexture *minimapRingTexture;
    MKStreetViewTexture *minimapPinTexture;
    MKStreetViewTexture *minimapRotatorTexture;
    MKStreetViewTexture *minimapTexture;
    struct CGPoint { 
        float x; 
        float y; 
    } minimapPinLocation;
    MKStreetViewGeometry *introSurfaceQuad;
    void *introSurfaceBufferRef;
    NSUInteger introSurfaceTarget;
    BOOL introSurfaceForce2D;
    NSUInteger introSurfaceTexture;
    struct CGPoint { 
        float x; 
        float y; 
    } introZoomPoint;
    struct $_905 { 
        unsigned int panoramaWillChange : 1; 
        unsigned int panoramaDidChange : 1; 
        unsigned int streetViewWillClose : 1; 
        unsigned int streetViewDidClose : 1; 
        unsigned int didFailWithError : 1; 
        unsigned int didUpdatePanoramaMetadata : 1; 
        unsigned int userDidTap : 1; 
        unsigned int streetViewWillChangeOrientation : 1; 
        unsigned int streetViewDidChangeOrientation : 1; 
    } delegateImplements;
}

@property(retain) GMMStreetViewReportRequest *gmmReport;
@property(retain) MKSearchResult *searchResult;
@property(retain) NSString *copyright;
@property(retain) MKStreetViewLabelCache *labelCache;
@property(retain) MKStreetViewTileDecoder *tileDecoder;
@property(retain) MKPanoramaTextures *previousTextures;
@property(retain) MKPanoramaTextures *textures;
@property(retain) MKPanoramaAnnotationGeometry *previousAnnotationGeometry;
@property(retain) MKPanoramaAnnotationGeometry *annotationGeometry;
@property(retain) MKPanoramaSphereGeometry *previousSphere;
@property(retain) MKPanoramaSphereGeometry *sphere;
@property(retain) MKPanorama *previousPanorama;
@property(retain) MKPanorama *panorama;


- (void)setCopyright:(id)arg1;
- (void)runAnimations;
- (void)setGmmReport:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setLabelCache:(id)arg1;
- (void)setTileDecoder:(id)arg1;
- (void)setPreviousTextures:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setPreviousAnnotationGeometry:(id)arg1;
- (void)setAnnotationGeometry:(id)arg1;
- (void)setPreviousSphere:(id)arg1;
- (void)setSphere:(id)arg1;
- (void)setPreviousPanorama:(id)arg1;
- (void)setPanorama:(id)arg1;
- (id)labelCache;
- (id)tileDecoder;
- (id)previousTextures;
- (id)textures;
- (id)previousAnnotationGeometry;
- (id)annotationGeometry;
- (id)previousSphere;
- (id)sphere;
- (id)gmmReport;
- (id)previousPanorama;
- (id)panorama;
- (id)searchResult;
- (id)copyright;

@end
