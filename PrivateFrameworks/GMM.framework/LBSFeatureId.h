/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface LBSFeatureId : PBCodable 
{
    unsigned long long _cell_id;
    unsigned long long _fprint;
}

@property unsigned long long fprint;
@property unsigned long long cell_id;


- (unsigned long long)fprint;
- (void)setFprint:(unsigned long long)arg1;
- (unsigned long long)cell_id;
- (void)setCell_id:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;

@end
