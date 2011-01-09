/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;



@interface SUItemOfferButton : UIButton 
{
    NSInteger _animationHorizontalAlignment;
    NSString *_buttonStyle;
    NSString *_confirmationTitle;
    BOOL _isShowingConfirmation;
    NSString *_offerTitle;
}

@property(getter=isShowingConfirmation) BOOL showingConfirmation;
@property(copy) NSString *offerTitle;
@property(copy) NSString *itemOfferButtonStyle;
@property(copy) NSString *confirmationTitle;
@property NSInteger animationHorizontalAlignment;

+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;
+ (double)defaultAnimationDuration;
+ (void)_initializeSafeCategory;

- (void)setConfirmationTitle:(id)arg1;
- (void)setItemOfferButtonStyle:(id)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setShowingConfirmation:(BOOL)arg1;
- (void)_applyConfiguration:(struct { id x1; NSInteger x2; NSInteger x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; id x5; id x6; })arg1;
- (struct { id x1; NSInteger x2; NSInteger x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; id x5; id x6; })_configurationForStyle:(id)arg1;
- (void)_reloadButton;
- (id)offerTitle;
- (id)itemOfferButtonStyle;
- (id)confirmationTitle;
- (NSInteger)animationHorizontalAlignment;
- (BOOL)isShowingConfirmation;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2;
- (BOOL)configureForItem:(id)arg1 offer:(id)arg2;
- (void)setAnimationHorizontalAlignment:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)accessibilityHint;

@end
