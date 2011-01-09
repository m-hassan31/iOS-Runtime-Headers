/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface EDOneCellAnchor : EDAnchor 
{
    struct EDCellAnchorMarker { 
        NSInteger columnIndex; 
        float columnAdjustment; 
        NSInteger rowIndex; 
        float rowAdjustment; 
    } mFrom;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    BOOL mIsRelative;
}


- (void)setFrom:(struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })arg1;
- (void)setRelative:(BOOL)arg1;
- (struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })from;
- (BOOL)isRelative;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (id).cxx_construct;

@end
