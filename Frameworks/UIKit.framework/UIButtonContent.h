/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIImage;



@interface UIButtonContent : NSObject <NSCoding, NSCopying>
{
    NSString *title;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *shadowColor;
}

@property(readonly) BOOL isEmpty;
@property(retain) UIColor *shadowColor; /* unknown property attribute: VshadowColor */
@property(retain) UIColor *titleColor; /* unknown property attribute: VtitleColor */
@property(retain) UIImage *background; /* unknown property attribute: Vbackground */
@property(retain) UIImage *image; /* unknown property attribute: Vimage */
@property(retain) NSString *title; /* unknown property attribute: Vtitle */


- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)background;
- (void)setBackground:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;

@end