/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTheme, OADTextListStyle;



@interface PDNotesMaster : PDSlideBase 
{
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
}


- (id)notesTextStyle;
- (id)placeholderWithType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextBodyPropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)parentTextStyleForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (id)masterGraphicForPlaceholderType:(NSInteger)arg1 placeholderTypeIndex:(NSInteger)arg2;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)colorMap;
- (id)theme;
- (id)colorScheme;
- (id)styleMatrix;
- (id)init;
- (void)dealloc;

@end
