/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUItemDataSource : NSObject 
{
}

+ (void)setSharedDataSource:(id)arg1;
+ (id)sharedDataSource;

- (long long)estimatedDiskSpaceNeededForItem:(id)arg1 storeOffer:(id)arg2;
- (NSInteger)itemTypeForItem:(id)arg1;
- (NSInteger)itemTypeForTypeString:(id)arg1;
- (id)newDisplayItemValidationTestsForItem:(id)arg1;
- (id)typeStringForItemType:(NSInteger)arg1;
- (id)_accountForPurchaseOfItem:(id)arg1;
- (id)_newDownloadAssetsForDocumentItem:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadAssetsForPodcastEpisode:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadMetadataForDocumentItem:(id)arg1 storeOffer:(id)arg2;
- (id)_newDownloadMetadataForPodcastEpisode:(id)arg1 storeOffer:(id)arg2;
- (id)_newRingtonePurchaseWithPurchase:(id)arg1;
- (id)_thumbnailImageForItem:(id)arg1;
- (id)newExternalDownloadWithItem:(id)arg1 storeOffer:(id)arg2;
- (id)newPurchaseWithItem:(id)arg1 storeOffer:(id)arg2;
- (id)newItemWithItemDictionary:(id)arg1;

@end
