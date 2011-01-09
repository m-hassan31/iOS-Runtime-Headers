/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface NSNumber : NSValue 
{
}

+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithInteger:(NSInteger)arg1;
+ (id)numberWithUnsignedInteger:(NSUInteger)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithInt:(NSInteger)arg1;
+ (id)numberWithUnsignedInt:(NSUInteger)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (BOOL)parseString:(id)arg1 intoSInt64:(long long*)arg2;
+ (BOOL)parseString:(id)arg1 intoNSInteger:(NSInteger*)arg2;
+ (BOOL)parseString:(id)arg1 intoNSUInteger:(NSUInteger*)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt64:(unsigned long long*)arg2;
+ (id)numberWithItemIdentifier:(unsigned long long)arg1;
+ (id)boolFromICSString:(id)arg1;

- (id)initWithFloat:(float)arg1;
- (id)initWithInteger:(NSInteger)arg1;
- (BOOL)isNSNumber__;
- (BOOL)isEqualToNumber:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)charValue;
- (unsigned char)unsignedCharValue;
- (short)shortValue;
- (unsigned short)unsignedShortValue;
- (long)longValue;
- (unsigned long long)unsignedLongLongValue;
- (long)_cfNumberType;
- (unsigned char)_getValue:(void*)arg1 forType:(long)arg2;
- (NSInteger)_reverseCompare:(id)arg1;
- (unsigned long)_cfTypeID;
- (id)initWithUnsignedInteger:(NSUInteger)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (id)initWithUnsignedInt:(NSUInteger)arg1;
- (id)initWithLong:(long)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithBool:(BOOL)arg1;
- (id)initWithInt:(NSInteger)arg1;
- (NSUInteger)unsignedIntegerValue;
- (NSInteger)compare:(id)arg1;
- (NSInteger)integerValue;
- (Class)classForCoder;
- (id)stringValue;
- (long long)longLongValue;
- (double)doubleValue;
- (float)floatValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (NSInteger)intValue;
- (BOOL)boolValue;
- (NSUInteger)unsignedIntValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (unsigned long)unsignedLongValue;
- (struct Object { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(NSInteger)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x10; }*)arg4;
     /* Encoded args for previous method: @24@0:4@8@12@16r^{ValueInterpolator=dddddddddB}20 */

- (float)CA_distanceToValue:(id)arg1;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifierValue;
- (double)timeIntervalValue;
- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (id)localizedString;

@end
