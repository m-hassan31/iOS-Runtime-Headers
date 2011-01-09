/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface WBParagraph : NSObject 
{
}

+ (void)readFrom:(id)arg1 textRun:(struct WrdParagraphTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdParagraphProperties {} *x5; struct WrdParagraphProperties {} *x6; struct WrdTableProperties {} *x7; struct WrdTableProperties {} *x8; }*)arg2 paragraph:(id)arg3;
+ (void)readRunsFor:(id)arg1 from:(id)arg2 textRun:(struct WrdParagraphTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdParagraphProperties {} *x5; struct WrdParagraphProperties {} *x6; struct WrdTableProperties {} *x7; struct WrdTableProperties {} *x8; }*)arg3;
+ (void)readCharacterRunsFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)checkForNoteFrom:(id)arg1 footnote:(BOOL)arg2 runEnd:(NSInteger*)arg3 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg4;
+ (void)checkForAnnotationFrom:(id)arg1 runEnd:(NSInteger*)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isCPAnnotationRangeEnd:(long)arg1 bookmarkTable:(struct WrdBookmarkTable { int (**x1)(); NSInteger x2; struct ChVector<WrdBookmark*> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; NSUInteger x_3_1_5; } x3; }*)arg2;
     /* Encoded args for previous method: B16@0:4l8^{WrdBookmarkTable=^^?i{ChVector<WrdBookmark*>=^^{WrdBookmark}^^{WrdBookmark}III}}12 */

+ (void)check:(id)arg1 forFieldMarkerFrom:(id)arg2 runEnd:(NSInteger*)arg3 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg4;
+ (void)checkForBookmarkFrom:(id)arg1 runEnd:(NSInteger*)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)checkForAnnotationBookmarkFrom:(id)arg1 runEnd:(NSInteger*)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)readSpecialCharactersFor:(id)arg1 from:(id)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3;
+ (void)readOfficeArtFor:(id)arg1 from:(id)arg2 at:(long)arg3 textRun:(struct WrdCharacterTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg4;
+ (void)readPictureFor:(id)arg1 from:(id)arg2 at:(long)arg3 textRun:(struct WrdCharacterTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg4;
+ (void)readSpecialCharacterFor:(id)arg1 from:(id)arg2 at:(long)arg3 textRun:(struct WrdCharacterTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg4;
+ (void)readSymbolsFor:(id)arg1 from:(id)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); NSInteger x2; NSUInteger x3; NSUInteger x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3;
+ (void)readNoteFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)readAnnotationFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)readFieldMarkerFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)readBookmarkFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (void)readAnnotationBookmarkFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { NSInteger x1; NSInteger x2; NSInteger x3; struct WrdFieldPosition {} *x4; NSInteger x5; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_6_1_1; } x6; NSInteger x7; NSInteger x8; struct vector<long unsigned int,std::allocator<long unsigned int> > { struct _Vector_impl { unsigned long *x_1_2_1; unsigned long *x_1_2_2; unsigned long *x_1_2_3; } x_9_1_1; } x9; }*)arg3;
+ (NSInteger)blockType;


@end
