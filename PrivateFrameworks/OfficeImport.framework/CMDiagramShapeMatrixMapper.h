/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper 
{
    NSInteger mColumnCount;
    NSInteger mRowCount;
    float mRectWidth;
    float mRectHeight;
    BOOL mHasArrows;
    BOOL mIsSnake;
    BOOL mIsHorizontal;
    BOOL mIsLinear;
}


- (void)setColumnsAndRowsCount;
- (struct CGSize { float x1; float x2; })gapSize;
- (double)gapRatio;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })circumscribedBounds;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (NSInteger)columnCount;

@end
