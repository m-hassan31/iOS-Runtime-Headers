/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface PBTextBlock : NSObject 
{
}

+ (void)styledText:(struct __CFAttributedString { }*)arg1 textBlock:(id)arg2;
+ (void)styledPargraphs:(struct __CFArray { }*)arg1 styledText:(struct __CFAttributedString { }*)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString { }*)arg2 textType:(NSInteger)arg3 state:(id)arg4;
+ (void)applyTextRuler:(struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; struct ChVector<PptTab> { struct PptTab {} *x_7_1_1; struct PptTab {} *x_7_1_2; NSUInteger x_7_1_3; NSUInteger x_7_1_4; NSUInteger x_7_1_5; } x7; unsigned short x8[5]; unsigned short x9[5]; NSInteger x10; unsigned short x11; short x12; }*)arg1 toTextBlock:(id)arg2;
     /* Encoded args for previous method: v16@0:4^{PptTextRulerAtom=^^?S{EshHeader=iIsSC}^^?iB{ChVector<PptTab>=^{PptTab}^{PptTab}III}[5S][5S]iSs}8@12 */

+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;


@end
