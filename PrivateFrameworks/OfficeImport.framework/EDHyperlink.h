/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference, EDString;



@interface EDHyperlink : NSObject 
{
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    NSInteger mType;
}

+ (id)hyperlink;

- (id)dosPath;
- (void)setDosPath:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)textMark;
- (void)setTextMark:(id)arg1;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)reference;
- (void)setReference:(id)arg1;
- (void)setPath:(id)arg1;
- (NSInteger)type;
- (id)path;
- (void)setType:(NSInteger)arg1;
- (void)dealloc;

@end
