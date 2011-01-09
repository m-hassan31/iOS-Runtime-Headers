/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDictionary;



@interface SUMediaObject : NSObject 
{
    struct dispatch_queue_s { } *_dispatchQueue;
    NSUInteger _imagePickerQualityType;
    NSDictionary *_pickerInfo;
}

@property(readonly) NSDictionary *imagePickerInfo;
@property NSUInteger imagePickerQualityType;
@property(readonly) NSString *inputSourceMIMEType;
@property(readonly) NSString *mediaType;
@property(readonly) NSURL *mediaURL;
@property(readonly) NSURL *referenceURL;

+ (id)newMediaObjectWithImagePickerInfo:(id)arg1;

- (id)initWithImagePickerInfo:(id)arg1;
- (id)referenceURL;
- (id)copyPreparationOperations;
- (id)inputSourceMIMEType;
- (id)newInputSource;
- (NSUInteger)imagePickerQualityType;
- (id)mediaURL;
- (id)newThumbnailImageWithMaximumSize:(float)arg1;
- (id)imagePickerInfo;
- (void)setImagePickerQualityType:(NSUInteger)arg1;
- (id)init;
- (void)dealloc;
- (id)mediaType;

@end
