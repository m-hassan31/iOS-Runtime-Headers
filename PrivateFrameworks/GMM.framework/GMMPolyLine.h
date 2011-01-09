/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;



@interface GMMPolyLine : PBCodable 
{
    NSInteger _lineWidth;
    BOOL _hasLineWidth;
    NSInteger _lineColor;
    BOOL _hasLineColor;
    NSData *_line;
}

@property(readonly) BOOL hasLine;
@property(retain) NSData *line;
@property(readonly) BOOL hasLineColor;
@property NSInteger lineColor;
@property(readonly) BOOL hasLineWidth;
@property NSInteger lineWidth;


- (void)setLineColor:(NSInteger)arg1;
- (BOOL)hasLine;
- (id)line;
- (void)setLine:(id)arg1;
- (BOOL)hasLineColor;
- (NSInteger)lineColor;
- (BOOL)hasLineWidth;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (NSInteger)lineWidth;
- (void)setLineWidth:(NSInteger)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
