/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSRegularExpressionCheckingResult : NSTextCheckingResult 
{
}

@property(readonly) NSRegularExpression *regularExpression;
@property(readonly) NSArray *rangeArray;


- (id)initWithRanges:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 count:(NSUInteger)arg2 regularExpression:(id)arg3;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)regularExpression;
- (id)rangeArray;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)resultType;

@end
