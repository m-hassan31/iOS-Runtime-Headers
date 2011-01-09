/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMFPlayer;



@interface WMFReader : NSObject <MFReader>
{
    NSInteger m_recordsRead;
    WMFPlayer *m_player;
    NSUInteger m_length;
    char *m_pBuffer;
    NSUInteger m_cursor;
}


- (NSInteger)playHeaders;
- (NSInteger)playRecord;
- (NSInteger)checkBytesAvailable:(NSUInteger)arg1;
- (NSInteger)moveDataCursor:(NSUInteger)arg1;
- (id)initWithWMFPlayer:(id)arg1;
- (NSInteger)play:(id)arg1;
- (oneway void)release;
- (void)dealloc;

@end
