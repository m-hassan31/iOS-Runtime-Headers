/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class PLPhotoLibrary, NSMutableArray;



@interface ALAssetsLibraryPrivate : NSObject 
{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_assets;
    BOOL _isValid;
}

@property BOOL isValid;
@property(retain) NSMutableArray *assets;
@property(retain) PLPhotoLibrary *photoLibrary;


- (void)setIsValid:(BOOL)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (BOOL)isValid;
- (id)init;
- (void)dealloc;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;

@end
