/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, FigCoreTextSubtitleTextRenderer;



@interface AVSubtitleLayerInternal : NSObject 
{
    AVPlayer *player;
    FigCoreTextSubtitleTextRenderer *renderer;
    struct __CFAttributedString { } *currentSubtitleSample;
    id boundaryTimeObserver;
    BOOL currentSubtitleSampleIsForced;
    BOOL nonForcedSubtitleDisplayEnabled;
}



@end
