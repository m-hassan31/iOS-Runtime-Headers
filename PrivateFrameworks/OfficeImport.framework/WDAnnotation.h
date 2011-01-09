/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterRun, WDAnnotation, NSString, WDText, NSDate;



@interface WDAnnotation : WDRun 
{
    NSInteger mType;
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    NSDate *mDate;
    NSString *mOwner;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}


- (id)initWithParagraph:(id)arg1 type:(NSInteger)arg2;
- (BOOL)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (NSInteger)annotationType;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (id)reference;
- (NSInteger)runType;
- (id)text;
- (id)date;
- (void)setDate:(id)arg1;
- (void)dealloc;

@end
