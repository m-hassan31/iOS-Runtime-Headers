/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKCache, MKAddressBookAddress, MKSearchResult, NSMutableArray, MKDirectionsRouteInfo, MKDirectionsResponse, NSString, GMMMapInfo, GMMRequester;



@interface MKDirectionsManager : NSObject <PBRequesterDelegate>
{
    GMMRequester *_requester;
    MKDirectionsRouteInfo *_routeInfo;
    MKCache *_routeInfoCache;
    NSMutableArray *_observers;
    MKSearchResult *_startSearchResult;
    MKSearchResult *_endSearchResult;
    MKAddressBookAddress *_startAddress;
    MKAddressBookAddress *_endAddress;
    NSString *_startAddressString;
    NSString *_endAddressString;
    GMMMapInfo *_mapInfo;
    NSInteger _mode;
    NSInteger _defaultMode;
    BOOL _needsSave;
    BOOL _isDisplayed;
    BOOL _isUpdatingCurrentLocation;
    BOOL _isLoadingTransitOnly;
    BOOL _appendingNewTransitResponses;
    NSInteger _transitResultPageOffset;
    BOOL _enableRouteCache;
    MKDirectionsResponse *_previousTransitResponse;
}

@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) BOOL hasStart;
@property(readonly) BOOL hasEnd;
@property(readonly) BOOL startAndEndAreEqual;
@property(readonly) NSTimeZone *departureTimeZone;
@property(readonly) NSTimeZone *arrivalTimeZone;
@property(readonly) BOOL isLoading;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isTransitEnabled;
@property(readonly) NSUInteger availableModes;
@property(readonly) BOOL hasReceivedResponse;
@property(readonly) NSArray *routes;
@property(retain) MKRoute *route;
@property(readonly) NSArray *steps;
@property(retain) MKRouteStep *step;
@property NSUInteger stepIndex;
@property(readonly) MKRouteStep *previousStep;
@property(readonly) NSUInteger previousStepIndex;
@property(readonly) NSArray *receivedResponses;
@property(readonly) NSUInteger receivedResponseCount;
@property(readonly) BOOL isUpdatingCurrentLocation;
@property BOOL enableRouteCache;
@property(retain) GMMRequester *requester;
@property NSInteger mode;
@property(retain) GMMMapInfo *mapInfo;
@property NSInteger defaultMode;
@property BOOL isDisplayed;
@property(readonly) BOOL needsSave;
@property(retain) NSString *endAddressString;
@property(retain) NSString *startAddressString;
@property(retain) MKAddressBookAddress *endAddress;
@property(retain) MKAddressBookAddress *startAddress;
@property(retain) MKSearchResult *endSearchResult;
@property(retain) MKSearchResult *startSearchResult;
@property(retain) MKDirectionsRouteInfo *routeInfo;
@property(retain) MKSearchResult *routeEndSearchResult;
@property(retain) MKSearchResult *routeStartSearchResult;

+ (NSInteger)_modeForGMMMode:(NSInteger)arg1;
+ (NSInteger)_GMMModeForMode:(NSInteger)arg1;
+ (NSUInteger)_responseIndexForMode:(NSInteger)arg1;
+ (id)sharedDirectionsManager;

- (void)addObserver:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)mapInfo;
- (void)setMapInfo:(id)arg1;
- (id)routes;
- (id)steps;
- (void)_reachabilityChanged:(id)arg1;
- (void)reset;
- (id)dictionaryRepresentation;
- (NSUInteger)availableModes;
- (BOOL)isLoading;
- (BOOL)isActive;
- (void)setMode:(NSInteger)arg1;
- (NSInteger)mode;
- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_setResponsesUpdated;
- (void)_setResponses:(id)arg1;
- (id)_responseForIndex:(NSUInteger)arg1;
- (id)_responseForMode:(NSInteger)arg1;
- (BOOL)_routeAvailableForMode:(NSInteger)arg1;
- (void)_setRouteUnavailableForMode:(NSInteger)arg1;
- (void)_resetResponses;
- (void)_resetResponseForMode:(NSInteger)arg1;
- (BOOL)isTransitEnabled;
- (BOOL)transitRequestDateIsDeparture;
- (id)firstRouteForTransitResponse;
- (id)departureTimeZone;
- (id)arrivalTimeZone;
- (id)transitRequestDate;
- (void)_createIconsForResponse:(id)arg1 cache:(BOOL)arg2;
- (void)_loadResponseFromDictionaryRepresentation:(id)arg1;
- (void)loadFromDictionaryRepresentation:(id)arg1 restoreSearchResults:(id)arg2;
- (void)_restoreSearchResults:(id)arg1;
- (id)receivedResponses;
- (NSUInteger)receivedResponseCount;
- (BOOL)hasReceivedResponse;
- (void)clearStart;
- (void)clearEnd;
- (void)setRouteStartSearchResult:(id)arg1;
- (void)setRouteEndSearchResult:(id)arg1;
- (void)setUserStartSearchResult:(id)arg1;
- (void)setUserEndSearchResult:(id)arg1;
- (void)setStartAddress:(id)arg1;
- (void)setEndAddress:(id)arg1;
- (void)setStartAddressString:(id)arg1;
- (void)setEndAddressString:(id)arg1;
- (BOOL)hasStart;
- (BOOL)hasEnd;
- (void)_updateStartAndEndSearchResults;
- (void)useStartAndEndSearchResultsFromRoute;
- (id)_startLocation;
- (id)_endLocation;
- (BOOL)startAndEndAreEqual;
- (void)swapStartAndEnd;
- (void)logRequestForMode:(NSInteger)arg1;
- (id)_requestWithMode:(NSInteger)arg1;
- (void)_startLoad:(BOOL)arg1;
- (void)_setUpdatingCurrentLocation:(BOOL)arg1;
- (void)startLoad;
- (void)_startTransitLoadWithRequest:(id)arg1;
- (void)startTransitLoadForNextResultPage;
- (void)startTransitLoadWithDate:(id)arg1 isDeparture:(BOOL)arg2;
- (void)_loadEnded;
- (void)cancelLoad;
- (void)_reportErrorCode:(NSInteger)arg1;
- (id)_createRouteSearchResultWithLocation:(id)arg1 isStart:(BOOL)arg2;
- (void)setMode:(NSInteger)arg1 shouldLoad:(BOOL)arg2;
- (void)setRoute:(id)arg1;
- (void)setStepIndex:(NSUInteger)arg1;
- (void)stepForward;
- (void)stepBack;
- (id)searchResultMatchingSearchResult:(id)arg1;
- (id)transitAgencyForRouteStep:(id)arg1;
- (void)_saveRouteToCache;
- (void)clearRouteCacheForSearchResult:(id)arg1;
- (BOOL)_restoreRouteFromCacheForMode:(NSInteger)arg1;
- (BOOL)isUpdatingCurrentLocation;
- (BOOL)enableRouteCache;
- (void)setEnableRouteCache:(BOOL)arg1;
- (NSInteger)defaultMode;
- (void)setDefaultMode:(NSInteger)arg1;
- (BOOL)needsSave;
- (id)endAddressString;
- (id)startAddressString;
- (id)endAddress;
- (id)startAddress;
- (void)setEndSearchResult:(id)arg1;
- (void)setStartSearchResult:(id)arg1;
- (id)routeInfo;
- (void)setRouteInfo:(id)arg1;
- (void)setRequester:(id)arg1;
- (id)requester;
- (BOOL)isDisplayed;
- (void)clearRouteCache;
- (id)previousStep;
- (id)routeStartSearchResult;
- (id)startSearchResult;
- (id)routeEndSearchResult;
- (id)endSearchResult;
- (void)setIsDisplayed:(BOOL)arg1;
- (NSUInteger)previousStepIndex;
- (NSUInteger)stepIndex;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (id)route;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (id)_response;
- (id)step;
- (void)setStep:(id)arg1;

@end
