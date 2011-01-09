/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;



@interface GMMLink : PBCodable 
{
    NSInteger _roadArgb;
    BOOL _hasRoadArgb;
    NSString *_linkText;
    NSString *_linkStreetRange;
    NSString *_panoId;
    NSInteger _yawDegreeE6;
    BOOL _hasYawDegreeE6;
}

@property(readonly) BOOL hasLinkText;
@property(readonly) BOOL hasLinkStreetRange;
@property(readonly) BOOL hasYawDegreeE6;
@property NSInteger yawDegreeE6;
@property(retain) NSString *panoId;
@property(retain) NSString *linkStreetRange;
@property(retain) NSString *linkText;
@property(readonly) BOOL hasRoadArgb;
@property NSInteger roadArgb;


- (void)setRoadArgb:(NSInteger)arg1;
- (BOOL)hasLinkText;
- (BOOL)hasLinkStreetRange;
- (void)setYawDegreeE6:(NSInteger)arg1;
- (BOOL)hasYawDegreeE6;
- (NSInteger)yawDegreeE6;
- (id)linkStreetRange;
- (void)setLinkStreetRange:(id)arg1;
- (id)linkText;
- (void)setLinkText:(id)arg1;
- (BOOL)hasRoadArgb;
- (NSInteger)roadArgb;
- (id)panoId;
- (void)setPanoId:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;

@end
