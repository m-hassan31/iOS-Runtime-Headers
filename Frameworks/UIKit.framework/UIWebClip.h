/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIImage, NSMutableData, NSURLConnection, NSURL;



@interface UIWebClip : NSObject 
{
    NSString *identifier;
    NSURL *pageURL;
    NSArray *icons;
    NSUInteger currentIconIndex;
    NSURL *startupImageURL;
    NSURL *startupLandscapeImageURL;
    NSString *title;
    float scale;
    struct CGPoint { 
        float x; 
        float y; 
    } scrollPoint;
    BOOL fullScreen;
    BOOL classicMode;
    BOOL removalDisallowed;
    BOOL iconIsScreenShotBased;
    BOOL iconIsPrecomposed;
    BOOL iconIsPrerendered;
    NSInteger statusBarStyle;
    UIImage *iconImage;
    UIImage *startupImage;
    UIImage *startupLandscapeImage;
    id delegate;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
}

@property(readonly) NSString *iconImagePath;
@property(retain) UIImage *iconImage;
@property id delegate;
@property(retain) UIImage *startupLandscapeImage;
@property(retain) UIImage *startupImage;
@property NSInteger statusBarStyle;
@property(readonly) BOOL iconIsPrerendered;
@property(readonly) BOOL iconIsPrecomposed;
@property(readonly) BOOL iconIsScreenShotBased;
@property BOOL removalDisallowed;
@property BOOL classicMode;
@property BOOL fullScreen;
@property CGPoint scrollPoint;
@property float scale;
@property(copy) NSString *title;
@property(retain) NSURL *startupLandscapeImageURL;
@property(retain) NSURL *startupImageURL;
@property(retain) NSArray *icons;
@property(retain) NSURL *pageURL;
@property(copy) NSString *identifier;

+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (NSInteger)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (id)webClipsDirectoryPath;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;

- (void)_readPropertiesFromBundle:(struct __CFBundle { }*)arg1;
- (void)_reloadProperties;
- (BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (BOOL)updateOnDisk;
- (BOOL)createOnDisk;
- (BOOL)removeFromDisk;
- (id)_initWithIdentifier:(id)arg1;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_bundleImageWithName:(id)arg1;
- (id)iconImagePath;
- (id)generateIconImageForFormat:(NSInteger)arg1 scale:(float)arg2;
- (void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3;
- (void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2;
- (void)setIconImageFromScreenshot:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)_displayIdentifierString;
- (void)requestIconUpdateInSpringBoard;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (BOOL)tryLoadingNextCustomIcon;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestCustomIconUpdateWithDelegate:(id)arg1;
- (void)requestCustomStartupImageUpdateWithDelegate:(id)arg1;
- (void)requestCustomStartupPortraitImageUpdateWithDelegate:(id)arg1;
- (void)requestCustomStartupLandscapeImageUpdateWithDelegate:(id)arg1;
- (id)getStartupImage:(NSInteger)arg1;
- (id)getStartupImage;
- (void)setStartupLandscapeImage:(id)arg1;
- (void)setStartupImage:(id)arg1;
- (void)setRemovalDisallowed:(BOOL)arg1;
- (void)setClassicMode:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStartupLandscapeImageURL:(id)arg1;
- (void)setStartupImageURL:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setPageURL:(id)arg1;
- (id)startupLandscapeImage;
- (id)startupImage;
- (id)iconImage;
- (BOOL)iconIsPrerendered;
- (BOOL)iconIsPrecomposed;
- (BOOL)iconIsScreenShotBased;
- (BOOL)removalDisallowed;
- (BOOL)classicMode;
- (BOOL)fullScreen;
- (struct CGPoint { float x1; float x2; })scrollPoint;
- (id)startupLandscapeImageURL;
- (id)startupImageURL;
- (id)icons;
- (id)pageURL;
- (id)_info;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)title;
- (void)setScale:(float)arg1;
- (float)scale;
- (void)setStatusBarStyle:(NSInteger)arg1;
- (NSInteger)statusBarStyle;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
