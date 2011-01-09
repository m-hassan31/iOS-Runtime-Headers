/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;



@interface SUScriptMediaLibrary : SUScriptObject 
{
    struct sqlite3_stmt { } *_containsAdamIdStatement;
    struct sqlite3 { } *_database;
    NSMutableArray *_musicPlayers;
}

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)containsAdamID:(id)arg1;
- (id)makeCollectionWithItems:(id)arg1;
- (id)makePickerWithMediaTypes:(id)arg1;
- (id)makeQueryWithPreset:(id)arg1;
- (id)musicPlayerForType:(id)arg1;
- (id)_copyQueryWithPreset:(id)arg1;
- (BOOL)_isRestricted;
- (void)_loadNativeObject;
- (id)_className;
- (id)init;
- (void)dealloc;

@end
