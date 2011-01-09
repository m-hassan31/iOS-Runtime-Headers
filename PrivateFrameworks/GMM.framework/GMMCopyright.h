/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMCopyright : PBCodable 
{
    NSMutableArray *_map_data_copyrights;
    NSMutableArray *_imagery_copyrights;
    NSInteger _copyrightYear;
    BOOL _hasCopyrightYear;
}

@property(readonly) NSInteger map_data_copyrightsCount;
@property(readonly) NSInteger imagery_copyrightsCount;
@property(readonly) BOOL hasCopyrightYear;
@property NSInteger copyrightYear;
@property(retain) NSMutableArray *imagery_copyrights;
@property(retain) NSMutableArray *map_data_copyrights;


- (NSInteger)map_data_copyrightsCount;
- (void)setMap_data_copyright:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)map_data_copyrightAtIndex:(NSUInteger)arg1;
- (void)addMap_data_copyright:(id)arg1;
- (NSInteger)imagery_copyrightsCount;
- (void)setImagery_copyright:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)imagery_copyrightAtIndex:(NSUInteger)arg1;
- (void)addImagery_copyright:(id)arg1;
- (void)setCopyrightYear:(NSInteger)arg1;
- (BOOL)hasCopyrightYear;
- (NSInteger)copyrightYear;
- (id)imagery_copyrights;
- (void)setImagery_copyrights:(id)arg1;
- (id)map_data_copyrights;
- (void)setMap_data_copyrights:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;

@end
