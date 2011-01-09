/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, NSDictionary, AVOutputSettings;



@interface AVAssetWriterInputConfigurationState : NSObject 
{
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    NSDictionary *_sourcePixelBufferAttributes;
    BOOL _attachedToPixelBufferAdaptor;
    NSArray *_metadataItems;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
    BOOL _expectsMediaDataInRealTime;
}

@property BOOL expectsMediaDataInRealTime;
@property CGAffineTransform transform;
@property(copy) NSArray *metadataItems;
@property BOOL attachedToPixelBufferAdaptor;
@property(copy) NSDictionary *sourcePixelBufferAttributes;
@property(copy) AVOutputSettings *outputSettings;
@property(copy) NSString *mediaType;


- (void)setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (void)setOutputSettings:(id)arg1;
- (BOOL)attachedToPixelBufferAdaptor;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (BOOL)expectsMediaDataInRealTime;
- (id)metadataItems;
- (void)setMetadataItems:(id)arg1;
- (id)outputSettings;
- (void)setMediaType:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)dealloc;
- (id)mediaType;

@end
