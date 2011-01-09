/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIActivityIndicatorView, UILabel;



@interface SULoadingView : UIView 
{
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    NSUInteger _style;
}

@property NSInteger activityIndicatorStyle;
@property UIColor *textColor;
@property UIColor *textShadowColor;


- (id)createTextLabel;
- (id)newProgressIndicator;
- (void)_updateLabel:(id)arg1;
- (void)setActivityIndicatorStyle:(NSInteger)arg1;
- (void)setTextShadowColor:(id)arg1;
- (NSInteger)activityIndicatorStyle;
- (id)textShadowColor;
- (id)textColor;
- (void)setStyle:(NSUInteger)arg1;
- (id)init;
- (void)setTextColor:(id)arg1;
- (void)dealloc;

@end
