/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WDAContent, WDText, WDDocument;



@interface WDATextBox : NSObject 
{
    WDText *mText;
    NSUInteger mNextTextBoxId;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mOle;

    WDDocument *mDocument;
    WDAContent *mParent;
}


- (BOOL)isOle;
- (void)setNextTextBoxId:(unsigned long)arg1;
- (void)setDocument:(id)arg1;
- (void)setOle:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (unsigned long)nextTextBoxId;
- (id)init;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;
- (id)document;

@end
