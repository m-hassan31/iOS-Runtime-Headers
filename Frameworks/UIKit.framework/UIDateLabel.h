/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIDateLabel : UILabel 
{
    double _date;
    NSInteger _dateKey;
    BOOL _boldForAllLocales;
}

@property BOOL boldForAllLocales;

+ (id)defaultFont;
+ (void)_initializeSafeCategory;

- (void)_invalidateDateKey;
- (void)setFontWithoutInvalidation:(id)arg1;
- (void)_updateDateStrings;
- (id)timeDesignator;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;
- (id)timeDesignatorFont;
- (id)_dateLabelCache;
- (BOOL)boldForAllLocales;
- (void)setBoldForAllLocales:(BOOL)arg1;
- (NSInteger)_dateKey;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)sizeToFit;
- (id)font;
- (void)setFont:(id)arg1;
- (id)text;
- (void)setDate:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
