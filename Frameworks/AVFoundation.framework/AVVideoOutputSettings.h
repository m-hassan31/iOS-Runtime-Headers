/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVVideoOutputSettings : AVOutputSettings 
{
}

@property(readonly) NSDictionary *videoSettingsDictionary;

+ (id)registeredOutputSettingsClasses;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)defaultVideoOutputSettings;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (id)compatibleMediaTypes;
- (id)videoSettingsDictionary;
- (NSInteger)height;
- (NSInteger)width;

@end
