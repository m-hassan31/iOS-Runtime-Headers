/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDPane, EDColumnInfoCollection, EDRowBlocks, SFUPointerKeyDictionary, EDMergedCellCollection, EDReference, EDCollection, EDWarnings;



@interface EDWorksheet : EDSheet 
{
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    NSUInteger mMaxRowOutlineLevel;
    NSUInteger mMaxColumnOutlineLevel;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mFitToPage;

    EDReference *mMaxCellReferencedInFormulas;
    SFUPointerKeyDictionary *mMergedRows;
    SFUPointerKeyDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}


- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)fitToPage;
     /* Encoded args for previous method: B8@0:4 */

- (void)setFitToPage:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)conditionalFormattings;
- (id)hyperlinks;
- (id)pane;
- (void)setPane:(id)arg1;
- (id)worksheetWarnings;
- (NSUInteger)maxRowOutlineLevel;
- (void)setMaxRowOutlineLevel:(NSUInteger)arg1;
- (void)updateMaxRowOutlineLevelIfNeeded:(NSUInteger)arg1;
- (NSUInteger)maxColumnOutlineLevel;
- (void)setMaxColumnOutlineLevel:(NSUInteger)arg1;
- (BOOL)hasMergedRow;
- (BOOL)isRowMerged:(NSUInteger)arg1;
- (id)mergedRowRef:(NSUInteger)arg1;
- (BOOL)hasMergedCol;
- (BOOL)isColMerged:(NSUInteger)arg1;
- (id)mergedColRef:(NSUInteger)arg1;
- (id)maxCellReferencedInFormulas;
- (id)implicitCellArea;
- (void)setImplicitCellArea:(id)arg1;
- (void)reduceMemoryIfPossible;
- (void)setup;
- (void)updateMaxColumnOutlineLevelIfNeeded:(NSUInteger)arg1;
- (void)teardown;
- (id)tables;
- (id)pivotTables;
- (void)setMergedRowsRef:(id)arg1 from:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (void)setMergedColsRef:(id)arg1 from:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (id)columnInfos;
- (double)defaultColumnWidth;
- (unsigned short)defaultRowHeight;
- (id)rowBlocks;
- (id)mergedCells;

@end
