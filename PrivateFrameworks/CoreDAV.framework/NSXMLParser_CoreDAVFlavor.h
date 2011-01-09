/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */



@interface NSXMLParser_CoreDAVFlavor : NSObject 
{
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
}


- (BOOL)shouldAutoreleaseReportedObjects;
- (id)initForIterativeParsing;
- (void)setShouldAutoreleaseReportedObjects:(BOOL)arg1;
- (void)finishIterativeParsing;
- (BOOL)parseData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (void)setShouldProcessNamespaces:(BOOL)arg1;
- (void)setShouldReportNamespacePrefixes:(BOOL)arg1;
- (void)setShouldResolveExternalEntities:(BOOL)arg1;
- (BOOL)shouldProcessNamespaces;
- (BOOL)shouldReportNamespacePrefixes;
- (BOOL)shouldResolveExternalEntities;
- (void)setShouldContinueAfterFatalError:(BOOL)arg1;
- (BOOL)shouldContinueAfterFatalError;
- (BOOL)parse;
- (void)abortParsing;
- (id)parserError;
- (id)publicID;
- (id)systemID;
- (void)_setParserError:(NSInteger)arg1;
- (struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; NSInteger x4; NSInteger x5; char *x6; char *x7; NSInteger x8; NSInteger x9; struct _xmlParserInput {} *x10; NSInteger x11; NSInteger x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; NSInteger x15; NSInteger x16; struct _xmlNode {} **x17; NSInteger x18; struct _xmlParserNodeInfoSeq { unsigned long x_19_1_1; unsigned long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; NSInteger x20; NSInteger x21; NSInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; NSInteger x_26_1_5; NSInteger x_26_1_6; struct _xmlNode {} **x_26_1_7; NSUInteger x_26_1_8; struct _xmlDoc {} *x_26_1_9; NSInteger x_26_1_10; struct _xmlValidState {} *x_26_1_11; NSInteger x_26_1_12; NSInteger x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; NSInteger x27; NSInteger x28; char *x29; char *x30; NSInteger x31; NSInteger x32; char **x33; long x34; long x35; NSInteger x36; NSInteger x37; NSInteger x38; char *x39; char *x40; char *x41; NSInteger *x42; NSInteger x43; NSInteger x44; NSInteger *x45; NSInteger x46; struct _xmlParserInput {} *x47; NSInteger x48; NSInteger x49; NSInteger x50; NSInteger x51; void *x52; NSInteger x53; NSInteger x54; void *x55; NSInteger x56; NSInteger x57; struct _xmlDict {} *x58; char **x59; NSInteger x60; NSInteger x61; char *x62; char *x63; char *x64; NSInteger x65; NSInteger x66; NSInteger x67; char **x68; NSInteger *x69; void **x70; struct _xmlHashTable {} *x71; struct _xmlHashTable {} *x72; NSInteger x73; NSInteger x74; NSInteger x75; NSInteger x76; struct _xmlNode {} *x77; NSInteger x78; struct _xmlAttr {} *x79; struct _xmlError { NSInteger x_80_1_1; NSInteger x_80_1_2; char *x_80_1_3; NSInteger x_80_1_4; char *x_80_1_5; NSInteger x_80_1_6; char *x_80_1_7; char *x_80_1_8; char *x_80_1_9; NSInteger x_80_1_10; NSInteger x_80_1_11; void *x_80_1_12; void *x_80_1_13; } x80; NSInteger x81; unsigned long x82; unsigned long x83; }*)_parserContext;
- (void)_pushNamespaces:(id)arg1;
- (void)_popNamespaces;
- (void)_initializeSAX2Callbacks;
- (NSInteger)columnNumber;
- (NSInteger)lineNumber;
- (void)finalize;
- (id)_info;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
