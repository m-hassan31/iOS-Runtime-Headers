/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSDate, NSString, NSMutableArray;



@interface MLPhotoLibrary : NSObject 
{
    NSString *_path;
    NSMutableArray *_albums;
    NSDate *_referenceDate;
    BOOL _cancelFileSystemGarbageCollection;
}

+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (BOOL)isApplicationWildcat;
+ (id)imageFormats;
+ (struct CGSize { float x1; float x2; })sizeForFormat:(NSInteger)arg1;
+ (BOOL)formatIsCropped:(NSInteger)arg1;
+ (BOOL)formatWasSynced:(NSInteger)arg1;
+ (BOOL)isAlbumVideoPath:(id)arg1;
+ (BOOL)needsToBeSyncedWithiTunes;
+ (BOOL)transformForImage:(struct CGImage { }*)arg1 captureOrientation:(NSInteger)arg2 format:(NSInteger)arg3 sizeInOut:(struct CGSize { float x1; float x2; }*)arg4 contextSizeOut:(struct CGSize { float x1; float x2; }*)arg5 transformOut:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg6;
+ (id)sharedPhotoLibrary;
+ (BOOL)formatHasJPEGFile:(NSInteger)arg1;

- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)_loadImageLibrary;
- (void)_flushImageLibrary;
- (struct ITImageInfo { struct DLinkElement { struct DLinkElement {} *x_1_1_1; struct DLinkElement {} *x_1_1_2; } x1; struct ITImageLibrary {} *x2; NSUInteger x3; unsigned long long x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; unsigned short x8; unsigned short x9; struct SLinkList { struct SLinkElement {} *x_10_1_1; } x10; NSUInteger x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; struct ITImageFaceInstance {} *x17; NSUInteger x18; NSUInteger x19; double x20; double x21; }*)_imageInfoForPhoto:(id)arg1;
- (id)databasePath;
- (id)videosPath;
- (id)dataForPhoto:(id)arg1 format:(NSInteger)arg2 width:(NSInteger*)arg3 height:(NSInteger*)arg4 bytesPerRow:(NSInteger*)arg5 dataWidth:(NSInteger*)arg6 dataHeight:(NSInteger*)arg7 imageDataOffset:(NSInteger*)arg8;
- (id)iTunesDataForPhoto:(id)arg1 format:(NSInteger)arg2 width:(NSInteger*)arg3 height:(NSInteger*)arg4 bytesPerRow:(NSInteger*)arg5 dataWidth:(NSInteger*)arg6 dataHeight:(NSInteger*)arg7 imageDataOffset:(NSInteger*)arg8;
- (id)dateForPhoto:(id)arg1;
- (void)_setAlbums:(id)arg1;
- (id)albumsWithKinds:(id)arg1;
- (id)eventAlbums;
- (id)faceAlbums;
- (id)placeAlbums;
- (id)userAlbums;
- (BOOL)iTunesLibraryFromIPhoto;
- (BOOL)iTunesLibraryFromAperture;
- (BOOL)supportsAllPhotos;
- (BOOL)supportsAlbums;
- (BOOL)supportsEvents;
- (BOOL)supportsFaces;
- (BOOL)supportsPlaces;
- (BOOL)containersAreSorted;
- (void)flushAlbums;
- (void)reloadAlbums;
- (id)imageWithITImageInfo:(struct ITImageInfo { struct DLinkElement { struct DLinkElement {} *x_1_1_1; struct DLinkElement {} *x_1_1_2; } x1; struct ITImageLibrary {} *x2; NSUInteger x3; unsigned long long x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; unsigned short x8; unsigned short x9; struct SLinkList { struct SLinkElement {} *x_10_1_1; } x10; NSUInteger x11; unsigned char x12; unsigned char x13; unsigned short x14; unsigned short x15; unsigned short x16; struct ITImageFaceInstance {} *x17; NSUInteger x18; NSUInteger x19; double x20; double x21; }*)arg1;
- (id)_imagesForAlbum:(id)arg1 firstImageOnly:(BOOL)arg2;
- (NSInteger)numberOfImagesInAlbum:(id)arg1;
- (NSInteger)numberOfVideosInAlbum:(id)arg1;
- (id)countOfAllPhotosAndVideos;
- (BOOL)_hasAtLeastOnePhoto:(BOOL)arg1;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (BOOL)isPosterPhoto:(id)arg1 forAlbum:(id)arg2;
- (void)updateHasAtLeastOnePhotoWithGPS;
- (id)firstImageForAlbum:(id)arg1;
- (id)_faceImageDataForRecordID:(NSInteger)arg1 faceIndex:(NSInteger)arg2 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)iTunesFaceForID:(NSInteger)arg1 faceIndex:(NSInteger)arg2 photoOut:(id*)arg3 rectOut:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)_albums;
- (id)albums;
- (id)slideshowSettingsPathForUuid:(id)arg1;
- (BOOL)sortITunesAlbumsByDate;
- (id)imagesForAlbum:(id)arg1;
- (id)iTunesFaceImageForRecordID:(NSInteger)arg1 faceIndex:(NSInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangles:(id)arg1 forPhoto:(id)arg2;
- (id)pathForPhotoJPEG:(id)arg1 format:(NSInteger)arg2;

@end
