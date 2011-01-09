/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class CPLRUDictionary;



@interface SUImageCache : NSObject 
{
    CPLRUDictionary *_dictionary;
}


- (void)removeAllCachedImages;
- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;
- (id)initWithMaximumCapacity:(NSInteger)arg1;
- (id)init;
- (void)dealloc;

@end
