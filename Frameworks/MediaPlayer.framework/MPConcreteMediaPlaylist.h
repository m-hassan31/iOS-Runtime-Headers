/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibrary, NSArray, MPMediaQuery, NSMutableDictionary;



@interface MPConcreteMediaPlaylist : MPMediaPlaylist 
{
    NSMutableDictionary *_properties;
    MPMediaLibrary *_library;
    MPMediaQuery *_itemsQuery;
    NSArray *_items;
    void *_clusterPlaylist;
    BOOL _ignoreNextLibraryChange;
}


- (id)representativeItem;
- (void)removeAllItems;
- (NSInteger)mediaTypes;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)addItem:(id)arg1 completionBlock:(id)arg2;
- (void)insertItem:(id)arg1 atIndex:(NSUInteger)arg2 completionBlock:(id)arg3;
- (void)insertItems:(id)arg1 atIndex:(NSUInteger)arg2 completionBlock:(id)arg3;
- (void)removeItemAtIndex:(NSUInteger)arg1 completionBlock:(id)arg2;
- (void)moveItemFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 completionBlock:(id)arg3;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2;
- (id)geniusClusterItemsWithCount:(NSUInteger)arg1 error:(id*)arg2;
- (void)endGeneratingGeniusClusterItems;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(id)arg2;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 library:(id)arg3;
- (BOOL)existsInLibrary;

@end
