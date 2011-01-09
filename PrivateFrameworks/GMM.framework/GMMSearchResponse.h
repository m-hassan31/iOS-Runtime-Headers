/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapInfo, NSString, NSMutableArray;



@interface GMMSearchResponse : PBCodable 
{
    NSInteger _status;
    NSString *_errorMessage;
    NSString *_originalQuery;
    NSString *_refinementQuery;
    BOOL _autoSpellingCorrected;
    BOOL _hasAutoSpellingCorrected;
    NSString *_spellingSuggestion;
    GMMMapInfo *_mapInfo;
    NSMutableArray *_searchResults;
    NSMutableArray *_documentInfos;
    NSMutableArray *_categorys;
    NSInteger _resultOffset;
    BOOL _hasResultOffset;
    NSInteger _payloadType;
    BOOL _hasPayloadType;
    NSInteger _totalResults;
    BOOL _hasTotalResults;
    NSString *_splitQuerySearchPart;
    NSString *_splitQueryLocationPart;
}

@property(readonly) BOOL hasErrorMessage;
@property(readonly) BOOL hasOriginalQuery;
@property(readonly) BOOL hasRefinementQuery;
@property(readonly) BOOL hasSpellingSuggestion;
@property(readonly) BOOL hasMapInfo;
@property(readonly) NSInteger searchResultsCount;
@property(readonly) NSInteger documentInfosCount;
@property(readonly) NSInteger categorysCount;
@property(readonly) BOOL hasSplitQuerySearchPart;
@property(readonly) BOOL hasSplitQueryLocationPart;
@property(retain) NSString *splitQueryLocationPart;
@property(retain) NSString *splitQuerySearchPart;
@property(readonly) BOOL hasTotalResults;
@property NSInteger totalResults;
@property(readonly) BOOL hasPayloadType;
@property NSInteger payloadType;
@property(readonly) BOOL hasResultOffset;
@property NSInteger resultOffset;
@property(retain) NSMutableArray *categorys;
@property(retain) NSMutableArray *documentInfos;
@property(retain) NSMutableArray *searchResults;
@property(retain) GMMMapInfo *mapInfo;
@property(retain) NSString *spellingSuggestion;
@property(readonly) BOOL hasAutoSpellingCorrected;
@property BOOL autoSpellingCorrected;
@property(retain) NSString *refinementQuery;
@property(retain) NSString *originalQuery;
@property(retain) NSString *errorMessage;
@property NSInteger status;


- (id)searchResults;
- (NSInteger)status;
- (void)setStatus:(NSInteger)arg1;
- (BOOL)hasErrorMessage;
- (BOOL)hasOriginalQuery;
- (BOOL)hasRefinementQuery;
- (void)setAutoSpellingCorrected:(BOOL)arg1;
- (BOOL)hasSpellingSuggestion;
- (NSInteger)searchResultsCount;
- (void)setSearchResult:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)searchResultAtIndex:(NSUInteger)arg1;
- (void)addSearchResult:(id)arg1;
- (NSInteger)documentInfosCount;
- (void)setDocumentInfo:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)documentInfoAtIndex:(NSUInteger)arg1;
- (void)addDocumentInfo:(id)arg1;
- (NSInteger)categorysCount;
- (void)setCategory:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)categoryAtIndex:(NSUInteger)arg1;
- (void)addCategory:(id)arg1;
- (void)setTotalResults:(NSInteger)arg1;
- (BOOL)hasSplitQuerySearchPart;
- (BOOL)hasSplitQueryLocationPart;
- (id)splitQueryLocationPart;
- (void)setSplitQueryLocationPart:(id)arg1;
- (id)splitQuerySearchPart;
- (void)setSplitQuerySearchPart:(id)arg1;
- (BOOL)hasTotalResults;
- (NSInteger)totalResults;
- (id)categorys;
- (void)setCategorys:(id)arg1;
- (id)documentInfos;
- (void)setDocumentInfos:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)spellingSuggestion;
- (void)setSpellingSuggestion:(id)arg1;
- (BOOL)hasAutoSpellingCorrected;
- (BOOL)autoSpellingCorrected;
- (id)refinementQuery;
- (void)setRefinementQuery:(id)arg1;
- (id)originalQuery;
- (void)setOriginalQuery:(id)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (BOOL)hasMapInfo;
- (void)setResultOffset:(NSInteger)arg1;
- (void)setPayloadType:(NSInteger)arg1;
- (BOOL)hasPayloadType;
- (NSInteger)payloadType;
- (BOOL)hasResultOffset;
- (NSInteger)resultOffset;
- (id)mapInfo;
- (void)setMapInfo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
