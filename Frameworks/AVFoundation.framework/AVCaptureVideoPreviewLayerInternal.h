/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, CALayer, NSMutableArray, AVCaptureSession;



@interface AVCaptureVideoPreviewLayerInternal : NSObject 
{
    AVCaptureSession *session;
    NSMutableArray *connections;
    CALayer *sublayer;
    struct CGSize { 
        float width; 
        float height; 
    } previewSize;
    NSString *gravity;
    BOOL disableActions;
    NSInteger orientation;
    BOOL automaticallyAdjustsMirroring;
    BOOL mirrored;
    BOOL isPresentationLayer;
    BOOL visible;
    BOOL isPaused;
}



@end
