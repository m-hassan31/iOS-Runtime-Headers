/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUImageDataProvider, SUImageCache, UIImage, ISURLOperationPool;



@interface SUArtworkCellContext : SUCellConfigurationContext 
{
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    SUImageDataProvider *_imageProvider;
    UIImage *_placeholderImage;
}

@property(retain) UIImage *placeholderImage;
@property(retain) SUImageDataProvider *imageProvider;
@property(retain) ISURLOperationPool *imagePool;
@property(retain) SUImageCache *imageCache;


- (id)placeholderImage;
- (void)setPlaceholderImage:(id)arg1;
- (id)imageProvider;
- (void)setImageProvider:(id)arg1;
- (void)setImagePool:(id)arg1;
- (void)setImageCache:(id)arg1;
- (id)imageCache;
- (id)imagePool;
- (void)dealloc;

@end
