/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPMediaItemCollection : MPMediaEntity 
{
    void *_internal;
}

@property(readonly) NSArray *items;
@property(readonly) MPMediaItem *representativeItem;
@property(readonly) NSUInteger count;
@property(readonly) NSInteger mediaTypes;

+ (id)collectionWithItems:(id)arg1;
+ (id)representativePersistentIDPropertyForGroupingType:(NSInteger)arg1;
+ (id)titlePropertyForGroupingType:(NSInteger)arg1;

- (id)representativeItem;
- (NSInteger)mediaTypes;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)_init;
- (id)init;
- (NSUInteger)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)itemsQuery;

@end
