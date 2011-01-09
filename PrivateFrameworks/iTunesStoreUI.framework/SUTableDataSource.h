/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUVariableCellConfigurationCache;



@interface SUTableDataSource : NSObject 
{
    id _cellReuseSource;
    NSInteger _columnCount;
    SUVariableCellConfigurationCache *_configurationCache;
    NSInteger _preferringUserInteractionCount;
}

@property(readonly) SUImageCache *imageCache;
@property(readonly) ISURLOperationPool *imagePool;
@property(readonly) NSInteger tableViewStyle;
@property(readonly) NSInteger numberOfSections;
@property(readonly) NSArray *sectionIndexTitles;
@property(getter=isPreferringUserInteraction,readonly) BOOL preferringUserInteraction;
@property NSInteger columnCount;
@property id cellReuseSource;


- (id)cachedConfigurationForClass:(Class)arg1 index:(NSInteger)arg2;
- (id)cellContextForConfigurationClass:(Class)arg1;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (id)imageCache;
- (BOOL)isPreferringUserInteraction;
- (NSInteger)numberOfColumnsInSection:(NSInteger)arg1;
- (id)cellReuseSource;
- (void)reloadCellContexts;
- (void)setCellReuseSource:(id)arg1;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)resetCaches;
- (void)resetLayoutCaches;
- (void)endPreferringUserInteraction;
- (void)beginPreferringUserInteraction;
- (id)placeholderCellForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (NSInteger)sectionIndexForIndexTitle:(id)arg1 atIndex:(NSInteger)arg2;
- (id)titleForHeaderInSection:(NSInteger)arg1;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (id)headerViewForSection:(NSInteger)arg1;
- (float)heightForPlaceholderCells;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)imagePool;
- (NSInteger)columnCount;
- (void)setColumnCount:(NSInteger)arg1;
- (id)sectionIndexTitles;
- (NSInteger)tableViewStyle;
- (NSInteger)numberOfSections;
- (NSInteger)numberOfRowsInSection:(NSInteger)arg1;
- (id)init;
- (void)dealloc;
- (void)reloadData;

@end
