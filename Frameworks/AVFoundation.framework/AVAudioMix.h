/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAudioMixInternal;



@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInternal *_audioMix;
}

@property(copy,readonly) NSArray *inputParameters;


- (void)setInputParameters:(id)arg1;
- (id)inputParameters;
- (id)_audioVolumeCurveForTrackID:(NSInteger)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
