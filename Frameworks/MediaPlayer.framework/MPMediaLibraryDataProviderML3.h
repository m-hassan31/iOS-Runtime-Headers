/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class ML3MusicLibrary;



@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate>
{
    ML3MusicLibrary *_library;
}

@property(readonly) NSArray *preferredSubtitleLanguages;
@property(readonly) NSArray *preferredAudioLanguages;
@property(readonly) BOOL isGeniusEnabled;
@property(readonly) NSSet *propertiesToCache;
@property(readonly) BOOL requiresAuthentication;
@property(readonly) NSString *uniqueIdentifier;
@property(readonly) NSString *name;

+ (id)_adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;
+ (id)_localizedGeniusErrorForError:(id)arg1;

- (id)lastModifiedDate;
- (id)uniqueIdentifier;
- (id)name;
- (void)dealloc;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_loadEntitiesUsingFetchRequest:(id)arg1 entityQuery:(id)arg2 writeBlock:(id)arg3;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(id)arg4;
- (BOOL)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(NSUInteger)arg2 entityClass:(Class)arg3;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)arg1;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3;
- (void)loadBestArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestTimedArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestTimedArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadCoverFlowArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 insertedPhysicalOrderOut:(long long*)arg3 fullReorderOccurredOut:(BOOL*)arg4 completionBlock:(id)arg5;
- (void)insertItemsWithIdentifiers:(long long*)arg1 count:(NSUInteger)arg2 toPlaylistWithIdentifier:(long long)arg3 afterPhysicalOrder:(long long)arg4 insertedPhysicalOrdersOut:(long long*)arg5 fullReorderOccurredOut:(BOOL*)arg6 completionBlock:(id)arg7;
- (void)removeItemAtPhysicalOrder:(long long)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)moveItemFromPhysicalOrder:(long long)arg1 toAfterPhysicalOrder:(long long)arg2 inPlaylistWithIdentifier:(long long)arg3 insertedPhysicalOrderOut:(long long*)arg4 fullReorderOccurredOut:(BOOL*)arg5 completionBlock:(id)arg6;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(NSUInteger)arg2 error:(id*)arg3;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(NSUInteger*)arg2 error:(id*)arg3;
- (void)loadQuery:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (void)loadQuery:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadItemsUsingFetchRequest:(id)arg1;
- (void)loadCollectionsUsingFetchRequest:(id)arg1;
- (id)initWithLibrary:(id)arg1;
- (void)mediaLibraryDidChangeITunesIsSyncingToValue:(BOOL)arg1;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(NSUInteger)arg2;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)arg1 otherItemWithIdentifier:(long long)arg2 compareRepresentativeItemArtwork:(BOOL)arg3 missingAlwaysComparesEqual:(BOOL)arg4;
- (BOOL)hasMediaOfType:(NSInteger)arg1;
- (BOOL)isGeniusEnabled;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;

@end
