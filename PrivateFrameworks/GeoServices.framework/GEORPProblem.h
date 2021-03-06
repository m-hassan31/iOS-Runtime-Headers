/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPProblemContext, GEORPProblemCorrections;

@interface GEORPProblem : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int problemType : 1; 
        unsigned int protocolVersion : 1; 
    } _has;
    GEORPProblemContext *_problemContext;
    GEORPProblemCorrections *_problemCorrections;
    int _problemType;
    unsigned int _protocolVersion;
    } _userPaths;
}

@property(readonly) BOOL hasProblemContext;
@property(readonly) BOOL hasProblemCorrections;
@property BOOL hasProblemType;
@property BOOL hasProtocolVersion;
@property(retain) GEORPProblemContext * problemContext;
@property(retain) GEORPProblemCorrections * problemCorrections;
@property int problemType;
@property unsigned int protocolVersion;
@property(readonly) int* userPaths;
@property(readonly) unsigned int userPathsCount;

- (void)addUserPath:(int)arg1;
- (void)clearUserPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProblemContext;
- (BOOL)hasProblemCorrections;
- (BOOL)hasProblemType;
- (BOOL)hasProtocolVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)problemContext;
- (id)problemCorrections;
- (int)problemType;
- (unsigned int)protocolVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setHasProblemType:(BOOL)arg1;
- (void)setHasProtocolVersion:(BOOL)arg1;
- (void)setProblemContext:(id)arg1;
- (void)setProblemCorrections:(id)arg1;
- (void)setProblemType:(int)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setUserPaths:(int*)arg1 count:(unsigned int)arg2;
- (int)userPathAtIndex:(unsigned int)arg1;
- (int*)userPaths;
- (unsigned int)userPathsCount;
- (void)writeTo:(id)arg1;

@end
