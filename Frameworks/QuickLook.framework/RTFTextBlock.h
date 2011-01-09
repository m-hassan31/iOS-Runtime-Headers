/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */



@interface RTFTextBlock : NSObject <NSCopying>
{
    void *_propVals;
    NSUInteger _propMask;
    NSUInteger _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}


- (void)setVerticalAlignment:(NSUInteger)arg1;
- (NSUInteger)verticalAlignment;
- (float)contentWidth;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (void)_setValue:(float)arg1 type:(NSUInteger)arg2 forParameter:(NSUInteger)arg3;
- (float)_valueForParameter:(NSUInteger)arg1;
- (NSUInteger)_valueTypeForParameter:(NSUInteger)arg1;
- (void)setContentWidth:(float)arg1 type:(NSUInteger)arg2;
- (void)setWidth:(float)arg1 type:(NSUInteger)arg2 forLayer:(NSInteger)arg3;
- (id)_attributeDescription;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (void)setBorderColor:(id)arg1 forEdge:(NSUInteger)arg2;
- (void)setValue:(float)arg1 type:(NSUInteger)arg2 forDimension:(NSUInteger)arg3;
- (void)setWidth:(float)arg1 type:(NSUInteger)arg2 forLayer:(NSInteger)arg3 edge:(NSUInteger)arg4;
- (NSUInteger)contentWidthValueType;
- (float)valueForDimension:(NSUInteger)arg1;
- (NSUInteger)valueTypeForDimension:(NSUInteger)arg1;
- (float)widthForLayer:(NSInteger)arg1 edge:(NSUInteger)arg2;
- (NSUInteger)widthValueTypeForLayer:(NSInteger)arg1 edge:(NSUInteger)arg2;
- (id)borderColorForEdge:(NSUInteger)arg1;
- (void)setBorderColor:(id)arg1;

@end
