/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary_SQLiteDatabaseContext, NSString, NSDictionary;



@interface ML3MusicLibrary : NSObject 
{
    ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;
    ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;
    struct dispatch_queue_s { } *_backgroundQueue;
    NSString *_path;
    NSString *_notifyName;
    NSString *_nonContentsNotifyName;
    NSDictionary *_purchasedContentFolderMap;
    NSInteger _notifyToken;
    NSInteger _nonContentsNotifyToken;
    BOOL _enableWrites;
    id _revertToBackupObserver;
    id _mcSettingsObserver;
}

@property(copy,readonly) NSArray *localizedSectionIndexTitles;
@property(readonly) ML3Container *purchasedTracksPlaylist;
@property(readonly) NSArray *preferredAudioTracks;
@property(readonly) NSArray *preferredSubtitleTracks;
@property(readonly) ML3CacheGenerator *cacheGenerator;
@property(readonly) BOOL mediaRestrictionEnabled;
@property(readonly) BOOL requiresPostProcessing;
@property(copy,readonly) NSString *path;

+ (void)initialize;
+ (void)mediaFolderPathDidChangeNotification:(id)arg1;
+ (id)mainLibraryPath;
+ (void)attachAuxiliaryDatabases:(struct sqlite3 { }*)arg1;
+ (void)limitCacheSize:(struct sqlite3 { }*)arg1;
+ (void)ensureIndexExists:(id)arg1 onHandle:(struct sqlite3 { }*)arg2 entityClass:(Class)arg3 indexableSQL:(id)arg4;
+ (void)ensureIndexExists:(id)arg1 onHandle:(struct sqlite3 { }*)arg2 entityClass:(Class)arg3 properties:(id)arg4;
+ (void)ensureSectionAndListIndicesExist:(id)arg1 onHandle:(struct sqlite3 { }*)arg2 entityClass:(Class)arg3 filteredProperties:(id)arg4 sectionProperties:(id)arg5 orderingProperties:(id)arg6 representativeItemProperty:(id)arg7;
+ (void)enumerateSortMapTablesUsingBlock:(id)arg1;
+ (BOOL)updateSortMapOnHandle:(struct sqlite3 { }*)arg1;
+ (void)ensureIndicesExistOnHandle:(struct sqlite3 { }*)arg1;
+ (struct __CFDictionary { }*)threadLocalCFMutableDictionaryForKey:(id)arg1 withValueCallbacks:(const struct { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
+ (void)stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 { }*)arg2;
+ (void)registerFunctionsOnHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (void)registerCustomCallbacksOnHandle:(struct sqlite3 { }*)arg1;
+ (id)sharedLibrary;

- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1 enableWrites:(BOOL)arg2;
- (void)_debugLoggingOptionsDidChangeNotification:(id)arg1;
- (BOOL)canWriteToDatabase;
- (NSInteger)openDatabaseHandle:(struct sqlite3 {}**)arg1;
- (BOOL)executeSQL:(id)arg1;
- (void)updateSortMap;
- (long long)insertStringIntoSortMapNoTransaction:(id)arg1;
- (id)newDatabaseContext;
- (id)backgroundQueue_backgroundDatabaseContext;
- (void)reconnectToDatabase;
- (void)accessDatabaseContextUsingBlock:(id)arg1;
- (void)performOperationInBackground:(id)arg1;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionHeaderForSectionIndex:(NSUInteger)arg1;
- (NSUInteger)sectionIndexTitleIndexForSectionIndex:(NSUInteger)arg1;
- (id)purchasedTracksPlaylist;
- (id)cacheGenerator;
- (void)postChangeNotificationAndScheduleFlush;
- (void)postNonContentsChangeNotificationAndScheduleFlush;
- (BOOL)mediaRestrictionEnabled;
- (BOOL)_mustExecuteiTunesCommands;
- (BOOL)_mustProcessLanguageChange;
- (void)notifyContentsDidChange;
- (void)notifyNonContentsPropertyDidChange;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (id)preferredAudioTracks;
- (id)preferredSubtitleTracks;
- (void)purchasedContentFolder:(id)arg1 willProcessItemWithXMLFilenames:(id)arg2;
- (void)purchasedContentFolder:(id)arg1 didProcessItemWithXMLFilenames:(id)arg2;
- (id)insertItemFromPurchaseFolder:(id)arg1 withItemProperties:(id)arg2;
- (BOOL)purchasedContentFolder:(id)arg1 loadItemWithProperties:(id)arg2 propertiesToSave:(id*)arg3;
- (void)accessSortKeyBuilder:(id)arg1;
- (long long)addStringToSortMap:(id)arg1;
- (BOOL)reloadPurchasedContent;
- (void)savePlaylists;
- (void)saveTrackMetadata;
- (void)performTransactionWithBlock:(id)arg1;
- (BOOL)requiresPostProcessing;
- (id)entityForClass:(Class)arg1 persistentID:(long long)arg2;

@end
