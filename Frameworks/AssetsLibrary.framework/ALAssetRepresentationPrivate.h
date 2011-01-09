/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAssetsLibrary, NSString, MLPhoto;



@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset>
{
    MLPhoto *_photo;
    NSString *_extension;
    ALAssetsLibrary *_library;
    BOOL _isValid;
}

@property BOOL isValid;
@property ALAssetsLibrary *library;
@property(copy) NSString *extension;
@property(retain) MLPhoto *photo;

+ (void)_setupFileDescriptorQueue;
+ (void)_clearFileDescriptorQueue;
+ (NSInteger)_fileDescriptorForPersistentURL:(id)arg1;
+ (void)_setFileDescriptor:(NSInteger)arg1 forPersistentURL:(id)arg2;

- (void)setExtension:(id)arg1;
- (void)libraryWillDisappear;
- (void)libraryDidChange;
- (void)setIsValid:(BOOL)arg1;
- (id)extension;
- (BOOL)_isImage;
- (BOOL)_isVideo;
- (id)initWithMLPhoto:(id)arg1 extension:(id)arg2 library:(id)arg3;
- (BOOL)isValid;
- (void)dealloc;
- (void)setLibrary:(id)arg1;
- (id)library;
- (void)setPhoto:(id)arg1;
- (id)photo;

@end
