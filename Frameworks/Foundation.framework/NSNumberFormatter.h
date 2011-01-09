/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;



@interface NSNumberFormatter : NSFormatter 
{
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter { } *_formatter;
    NSUInteger _counter;
    void *_reserved[12];
}

+ (NSUInteger)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(NSUInteger)arg1;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(NSUInteger)arg2;
+ (void)initialize;
+ (id)mf_formatUnsignedInteger:(NSUInteger)arg1 withGrouping:(BOOL)arg2;
+ (id)mf_formatInteger:(NSInteger)arg1 withGrouping:(BOOL)arg2;
+ (id)gkRankFormatter;
+ (id)gk_formatInteger:(NSInteger)arg1 withGrouping:(BOOL)arg2;
+ (id)gk_formatUnsignedInteger:(NSUInteger)arg1 withGrouping:(BOOL)arg2;

- (NSUInteger)numberStyle;
- (id)numberFromString:(id)arg1;
- (void)setNumberStyle:(NSUInteger)arg1;
- (id)stringFromNumber:(id)arg1;
- (void)_regenerateFormatter;
- (void*)__Keynote_NOOP;
- (BOOL)generatesDecimalNumbers;
- (void)setGeneratesDecimalNumbers:(BOOL)arg1;
- (NSUInteger)formatterBehavior;
- (void)setFormatterBehavior:(NSUInteger)arg1;
- (id)negativeFormat;
- (void)setNegativeFormat:(id)arg1;
- (id)textAttributesForNegativeValues;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (id)positiveFormat;
- (void)setPositiveFormat:(id)arg1;
- (id)textAttributesForPositiveValues;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (BOOL)allowsFloats;
- (void)setAllowsFloats:(BOOL)arg1;
- (id)decimalSeparator;
- (void)setDecimalSeparator:(id)arg1;
- (BOOL)alwaysShowsDecimalSeparator;
- (void)setAlwaysShowsDecimalSeparator:(BOOL)arg1;
- (id)currencyDecimalSeparator;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (BOOL)usesGroupingSeparator;
- (id)groupingSeparator;
- (void)setGroupingSeparator:(id)arg1;
- (id)zeroSymbol;
- (void)setZeroSymbol:(id)arg1;
- (id)textAttributesForZero;
- (void)setTextAttributesForZero:(id)arg1;
- (id)nilSymbol;
- (void)setNilSymbol:(id)arg1;
- (id)textAttributesForNil;
- (void)setTextAttributesForNil:(id)arg1;
- (id)notANumberSymbol;
- (void)setNotANumberSymbol:(id)arg1;
- (id)textAttributesForNotANumber;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (id)positiveInfinitySymbol;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (id)textAttributesForPositiveInfinity;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (id)negativeInfinitySymbol;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (id)positivePrefix;
- (void)setPositivePrefix:(id)arg1;
- (id)positiveSuffix;
- (void)setPositiveSuffix:(id)arg1;
- (id)negativePrefix;
- (void)setNegativePrefix:(id)arg1;
- (id)negativeSuffix;
- (void)setNegativeSuffix:(id)arg1;
- (id)currencyCode;
- (void)setCurrencyCode:(id)arg1;
- (id)currencySymbol;
- (void)setCurrencySymbol:(id)arg1;
- (id)internationalCurrencySymbol;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (id)percentSymbol;
- (void)setPercentSymbol:(id)arg1;
- (id)perMillSymbol;
- (void)setPerMillSymbol:(id)arg1;
- (id)minusSign;
- (void)setMinusSign:(id)arg1;
- (id)plusSign;
- (void)setPlusSign:(id)arg1;
- (id)exponentSymbol;
- (void)setExponentSymbol:(id)arg1;
- (NSUInteger)groupingSize;
- (NSUInteger)secondaryGroupingSize;
- (void)setSecondaryGroupingSize:(NSUInteger)arg1;
- (NSUInteger)formatWidth;
- (void)setFormatWidth:(NSUInteger)arg1;
- (id)multiplier;
- (void)setMultiplier:(id)arg1;
- (id)paddingCharacter;
- (void)setPaddingCharacter:(id)arg1;
- (NSUInteger)paddingPosition;
- (void)setPaddingPosition:(NSUInteger)arg1;
- (void)setRoundingMode:(NSUInteger)arg1;
- (id)roundingIncrement;
- (void)setRoundingIncrement:(id)arg1;
- (NSUInteger)minimumIntegerDigits;
- (void)setMinimumIntegerDigits:(NSUInteger)arg1;
- (NSUInteger)maximumIntegerDigits;
- (void)setMaximumIntegerDigits:(NSUInteger)arg1;
- (NSUInteger)minimumFractionDigits;
- (void)setMinimumFractionDigits:(NSUInteger)arg1;
- (NSUInteger)maximumFractionDigits;
- (void)setMaximumFractionDigits:(NSUInteger)arg1;
- (id)minimum;
- (void)setMinimum:(id)arg1;
- (id)maximum;
- (void)setMaximum:(id)arg1;
- (id)currencyGroupingSeparator;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (BOOL)isLenient;
- (void)setLenient:(BOOL)arg1;
- (BOOL)usesSignificantDigits;
- (void)setUsesSignificantDigits:(BOOL)arg1;
- (NSUInteger)minimumSignificantDigits;
- (void)setMinimumSignificantDigits:(NSUInteger)arg1;
- (NSUInteger)maximumSignificantDigits;
- (void)setMaximumSignificantDigits:(NSUInteger)arg1;
- (BOOL)isPartialStringValidationEnabled;
- (void)setPartialStringValidationEnabled:(BOOL)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3 error:(out id*)arg4;
- (NSUInteger)roundingMode;
- (void)_reset;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setUsesGroupingSeparator:(BOOL)arg1;
- (void)setGroupingSize:(NSUInteger)arg1;

@end
