/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EBAlignmentInfo : NSObject 
{
}

+ (id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign { NSInteger x1; NSInteger x2; short x3; short x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; NSInteger x7; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{XlDXfAlign=iissBBi}8 */

+ (void)writeAlignmentInfo:(id)arg1 toXlXf:(struct XlXf { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; NSInteger x6; NSInteger x7; unsigned char x8; unsigned char x9; NSInteger x10; NSInteger x11; NSInteger x12; NSInteger x13; NSInteger x14; NSInteger x15; NSInteger x16; NSInteger x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; }*)arg2;
     /* Encoded args for previous method: v16@0:4@8^{XlXf=^^?{XlHeader=IsC}sssiiCCiiiiiiiiCCCCCCCBBBBBBBBBBBBBBB}12 */

+ (struct XlDXfAlign { NSInteger x1; NSInteger x2; short x3; short x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; void*x6; NSInteger x7; }*)xlDXfAlignFromEDAlignmentInfo:(id)arg1;
     /* Encoded args for previous method: ^{XlDXfAlign=iissBBi}12@0:4@8 */

+ (void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(struct XlGraphicsInfo { int (**x1)(); NSInteger x2; short x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; void*x6; void*x7; struct ChVector<XlGraphicsInfo::XlObjData*> { struct XlObjData {} **x_8_1_1; struct XlObjData {} **x_8_1_2; NSUInteger x_8_1_3; NSUInteger x_8_1_4; NSUInteger x_8_1_5; } x8; void*x9; NSInteger x10; struct XlString {} *x11; NSInteger x12; NSInteger x13; NSInteger x14; void*x15; unsigned short x16; unsigned short x17; unsigned short x18; char *x19; NSUInteger x20; NSUInteger x21; void*x22; NSUInteger x23; NSUInteger x24; NSInteger x25; NSInteger x26; void*x27; struct XlString {} *x28; }*)arg2;
     /* Encoded args for previous method: v16@0:4@8^{XlGraphicsInfo=^^?isBBBB{ChVector<XlGraphicsInfo::XlObjData*>=^^{XlObjData}^^{XlObjData}III}Bi^{XlString}iiiBSSS*IIBIIiiB^{XlString}}12 */

+ (NSInteger)convertXlHorizAlignEnumToED:(NSInteger)arg1;
+ (NSInteger)convertXlVertAlignEnumToED:(NSInteger)arg1;
+ (NSInteger)convertEDHorizontalAlignmentEnumToXl:(NSInteger)arg1;
+ (NSInteger)convertEDVerticalAlignmentEnumToXl:(NSInteger)arg1;
+ (id)edAlignmentInfoFromXlXf:(struct XlXf { int (**x1)(); struct XlHeader { NSUInteger x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; short x3; short x4; short x5; NSInteger x6; NSInteger x7; unsigned char x8; unsigned char x9; NSInteger x10; NSInteger x11; NSInteger x12; NSInteger x13; NSInteger x14; NSInteger x15; NSInteger x16; NSInteger x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{XlXf=^^?{XlHeader=IsC}sssiiCCiiiiiiiiCCCCCCCBBBBBBBBBBBBBBB}8 */

+ (id)edAlignmentInfoFromXlGraphicsInfo:(struct XlGraphicsInfo { int (**x1)(); NSInteger x2; short x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; void*x6; void*x7; struct ChVector<XlGraphicsInfo::XlObjData*> { struct XlObjData {} **x_8_1_1; struct XlObjData {} **x_8_1_2; NSUInteger x_8_1_3; NSUInteger x_8_1_4; NSUInteger x_8_1_5; } x8; void*x9; NSInteger x10; struct XlString {} *x11; NSInteger x12; NSInteger x13; NSInteger x14; void*x15; unsigned short x16; unsigned short x17; unsigned short x18; char *x19; NSUInteger x20; NSUInteger x21; void*x22; NSUInteger x23; NSUInteger x24; NSInteger x25; NSInteger x26; void*x27; struct XlString {} *x28; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{XlGraphicsInfo=^^?isBBBB{ChVector<XlGraphicsInfo::XlObjData*>=^^{XlObjData}^^{XlObjData}III}Bi^{XlString}iiiBSSS*IIBIIiiB^{XlString}}8 */



@end
