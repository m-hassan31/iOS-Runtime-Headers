/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface WMListLevelTextMapper : NSObject 
{
    NSMutableArray *m_tokens;
    NSInteger m_format;
    NSUInteger m_initNumber;
}


- (id)initWithText:(id)arg1 format:(NSInteger)arg2;
- (id)initWithText:(id)arg1 format:(NSInteger)arg2 initNumber:(NSInteger)arg3;
- (id)listLevelTextforOutline:(id)arg1;
- (NSUInteger)tokenCount;
- (id)token:(NSUInteger)arg1;
- (id)initWithText:(id)arg1;
- (void)dealloc;

@end
