/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDTableProperties;



@interface WDTable : WDBlock 
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}


- (void)clearRows;
- (NSInteger)nestingLevel;
- (id)rowIterator;
- (id)newRowIterator;
- (id)cellIterator;
- (id)newCellIterator;
- (id)runIterator;
- (id)newRunIterator;
- (void)clearProperties;
- (id)addRow;
- (NSInteger)rowCount;
- (id)rowAt:(NSInteger)arg1;
- (NSInteger)blockType;
- (id)properties;
- (id)initWithText:(id)arg1;
- (void)dealloc;

@end
