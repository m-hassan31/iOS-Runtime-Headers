/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EDPageSetup : NSObject 
{
    NSInteger mOrientation;
    NSInteger mPageOrder;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mCustomFirstPageNumber;

    NSUInteger mFirstPageNumber;
    NSUInteger mCopies;
    NSUInteger mFitToHeight;
    NSUInteger mFitToWidth;
    NSUInteger mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (NSInteger)order;
- (void)setOrder:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)customFirstPageNumber;
     /* Encoded args for previous method: B8@0:4 */

- (void)setCustomFirstPageNumber:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSUInteger)firstPageNumber;
- (void)setFirstPageNumber:(NSUInteger)arg1;
- (NSUInteger)fitToHeight;
- (void)setFitToHeight:(NSUInteger)arg1;
- (NSUInteger)fitToWidth;
- (void)setFitToWidth:(NSUInteger)arg1;
- (void)setHeaderMargin:(float)arg1;
- (float)footerMargin;
- (void)setFooterMargin:(float)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (float)rightMargin;
- (float)topMargin;
- (float)headerMargin;
- (float)bottomMargin;
- (void)setOrientation:(NSInteger)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setScale:(NSUInteger)arg1;
- (NSUInteger)scale;
- (id)init;
- (NSInteger)orientation;

@end
