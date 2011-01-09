/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType;



@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation>
{
    AVMediaFileType *_fileType;
}

@property(readonly) AVMediaFileType *fileType;

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;
+ (void)initialize;

- (id)initWithFileType:(id)arg1;
- (BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2;
- (BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2;
- (id)fileType;
- (id)init;
- (void)dealloc;

@end
