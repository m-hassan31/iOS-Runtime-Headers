/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;



@interface GMMPanoramaVisited : PBCodable 
{
    GMMMapPoint *_latLon;
    NSString *_panoId;
}

@property(retain) NSString *panoId;
@property(retain) GMMMapPoint *latLon;


- (id)panoId;
- (void)setPanoId:(id)arg1;
- (id)latLon;
- (void)setLatLon:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;

@end
