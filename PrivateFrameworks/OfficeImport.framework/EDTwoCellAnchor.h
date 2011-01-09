/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface EDTwoCellAnchor : EDAnchor 
{
    struct EDCellAnchorMarker { 
        NSInteger columnIndex; 
        float columnAdjustment; 
        NSInteger rowIndex; 
        float rowAdjustment; 
    } mFrom;
    struct EDCellAnchorMarker { 
        NSInteger columnIndex; 
        float columnAdjustment; 
        NSInteger rowIndex; 
        float rowAdjustment; 
    } mTo;
    BOOL mIsRelative;
}


- (void)setFrom:(struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })arg1;
- (void)setTo:(struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })arg1;
- (void)setRelative:(BOOL)arg1;
- (struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })from;
- (BOOL)isRelative;
- (struct EDCellAnchorMarker { NSInteger x1; float x2; NSInteger x3; float x4; })to;
- (id).cxx_construct;

@end
