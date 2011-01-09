/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView, UILabel;



@interface SULockoutView : UIView 
{
    UILabel *_bodyLabel;
    UIImageView *_imageView;
    NSInteger _layoutPreset;
    UILabel *_titleLabel;
}

@property(retain) NSString *body;
@property(retain) UIImage *image;
@property(retain) NSString *title;
@property NSInteger layoutPreset;


- (void)_layoutForSlowNetwork;
- (NSInteger)layoutPreset;
- (id)_bodyLabel;
- (void)setLayoutPreset:(NSInteger)arg1;
- (id)_imageView;
- (id)_titleLabel;
- (id)body;
- (id)title;
- (id)image;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setBody:(id)arg1;

@end
