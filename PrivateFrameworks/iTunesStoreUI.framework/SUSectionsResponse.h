/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDictionary, NSArray;



@interface SUSectionsResponse : NSObject 
{
    BOOL _cacheable;
    NSInteger _responseType;
    NSArray *_sections;
    NSDictionary *_sectionsDictionary;
    BOOL _shouldResetUserOrdering;
}

@property(readonly) NSString *moreListTitle;
@property(readonly) NSString *versionString;
@property BOOL shouldResetUserOrdering;
@property(readonly) NSDictionary *sectionsDictionary;
@property(readonly) NSArray *sections;
@property(readonly) NSInteger responseType;
@property(getter=isCacheable) BOOL cacheable;


- (id)_newSectionsFromDictionary:(id)arg1;
- (NSInteger)responseType;
- (void)setCacheable:(BOOL)arg1;
- (id)initWithSectionsDictionary:(id)arg1 responseType:(NSInteger)arg2;
- (id)versionString;
- (void)setShouldResetUserOrdering:(BOOL)arg1;
- (BOOL)shouldResetUserOrdering;
- (BOOL)isCacheable;
- (id)sectionsDictionary;
- (id)moreListTitle;
- (id)sections;
- (id)init;
- (void)dealloc;

@end
