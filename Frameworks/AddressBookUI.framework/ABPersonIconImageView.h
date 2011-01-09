/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImage, UIView;



@interface ABPersonIconImageView : UIView 
{
    UIView *_imageView;
    NSInteger _imageType;
    struct CGSize { 
        float width; 
        float height; 
    } _iconSize;
    UIImage *_maskImage;
    UIImage *_overlayImage;
    id _styleHelper;
}

@property BOOL shouldPickBestImage;
@property(retain) UIImage *overlayImage;
@property(retain) UIImage *maskImage;
@property(readonly) NSInteger imageType;

+ (id)rightBorderOverlayImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)leftRightBorderOverlayImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)genericBlankPlaceholderImageOfSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)_placeholderPersonImageForType:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)_placeholderCompanyImageForType:(NSInteger)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlayForType:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })optimalIconSize;
+ (id)newImageViewWithIconSize:(struct CGSize { float x1; float x2; })arg1 imageType:(NSInteger)arg2;

- (id)initWithIconSize:(struct CGSize { float x1; float x2; })arg1 imageType:(NSInteger)arg2;
- (void)setNeedsRecompositing;
- (void)setOverlayImage:(id)arg1;
- (id)_maskImageOrNSNull;
- (id)_overlayImageOrNSNull;
- (id)overlayImage;
- (BOOL)_cardPlaceholderImageShouldApplyMaskAndOverlay;
- (id)_placeholderPersonImage;
- (id)_placeholderCompanyImage;
- (NSInteger)imageType;
- (id)personImageView;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2;
- (void*)displayedPerson;
- (BOOL)hasImageToDisplay;
- (void)setNeedsReload;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setBackgroundLoadingQueue:(id)arg1 addressBook:(void*)arg2 cache:(id)arg3;
- (BOOL)shouldPickBestImage;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (void)_updateImages;
- (id)init;
- (void)dealloc;
- (void)setMaskImage:(id)arg1;
- (id)maskImage;

@end
