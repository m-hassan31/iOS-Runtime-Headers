/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSSet, NSMutableSet;



@interface _MPMediaQueryCriteria : NSObject <NSCopying>
{
    NSMutableSet *_filterPredicates;
    NSInteger _entityOrder;
    NSInteger _groupingType;
    NSSet *_itemPropertiesToFetch;
    NSSet *_collectionPropertiesToFetch;
}

@property(readonly) BOOL specifiesPlaylistItems;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)dealloc;
- (BOOL)specifiesPlaylistItems;

@end
