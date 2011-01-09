/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKCellShortener>, TwoPartTextLabel;



@interface PreferencesTwoPartValueCell : UITableViewCell 
{
    TwoPartTextLabel *_twoPartLabel;
    NSUInteger _notifiedShort;
    <EKCellShortener> *_shortener;
}

@property(retain,readonly) TwoPartTextLabel *twoPartTextLabel;
@property(retain,readonly) UIColor *valueColor;
@property <EKCellShortener> *shortener;


- (id)valueColor;
- (void)layoutSubviews;
- (id)twoPartTextLabel;
- (void)shorten;
- (id)shortener;
- (void)setShortener:(id)arg1;
- (void)_layoutSubviewsCore;
- (void)checkValueWidths;
- (void)layoutText:(id)arg1 andValue:(id)arg2;

@end
