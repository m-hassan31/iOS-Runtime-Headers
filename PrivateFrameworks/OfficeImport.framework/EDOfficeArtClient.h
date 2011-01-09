/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDComment, NSMutableDictionary, EDAnchor, EDSheet, EDTextBox;



@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient>
{
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsBoundsSet;

}


- (id)clientState;
- (void)setClientState:(id)arg1;
- (id)tableModels;
- (void)setTableModels:(id)arg1;
- (void)setTextBox:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setSheet:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)areBoundsSet;
     /* Encoded args for previous method: B8@0:4 */

- (BOOL)hasBounds;
- (id)comment;
- (id)textBox;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (BOOL)hasText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)sheet;

@end
