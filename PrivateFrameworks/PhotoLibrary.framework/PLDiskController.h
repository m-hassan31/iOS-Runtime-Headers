/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */



@interface PLDiskController : NSObject 
{
    double _lastFSCheck;
    unsigned long _bytesRequiredForPhoto;
    struct { 
        unsigned int needToCheckDiskSpace : 1; 
        unsigned int probablyLowOnDiskSpace : 1; 
        unsigned int isPhotosApp : 1; 
        unsigned int extra : 28; 
    } _flags;
}

+ (id)sharedInstance;
+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForUse;

- (id)init;
- (void)dealloc;
- (void)_diskSpaceDidBecomeLow;
- (void)_actuallyUpdateCookie;
- (void)_updateCookie;
- (void)updateAvailableDiskSpace;
- (BOOL)hasEnoughDiskToTakePicture;

@end
