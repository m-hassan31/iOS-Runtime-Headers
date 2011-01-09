/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMClientCapabilities : PBCodable 
{
    NSInteger _maxImageWidth;
    BOOL _hasMaxImageWidth;
    NSInteger _maxImageHeight;
    BOOL _hasMaxImageHeight;
    NSInteger _availableImageMemory;
    BOOL _hasAvailableImageMemory;
    NSMutableArray *_preferredImageFormats;
    BOOL _htmlBodyOnly;
    BOOL _hasHtmlBodyOnly;
    BOOL _embedImages;
    BOOL _hasEmbedImages;
}

@property(readonly) NSInteger preferredImageFormatsCount;
@property(readonly) BOOL hasEmbedImages;
@property BOOL embedImages;
@property(readonly) BOOL hasHtmlBodyOnly;
@property BOOL htmlBodyOnly;
@property(retain) NSMutableArray *preferredImageFormats;
@property(readonly) BOOL hasAvailableImageMemory;
@property NSInteger availableImageMemory;
@property(readonly) BOOL hasMaxImageHeight;
@property NSInteger maxImageHeight;
@property(readonly) BOOL hasMaxImageWidth;
@property NSInteger maxImageWidth;

+ (id)standardCapabilities;
+ (id)searchCapabilities;

- (void)setMaxImageWidth:(NSInteger)arg1;
- (void)setMaxImageHeight:(NSInteger)arg1;
- (void)setAvailableImageMemory:(NSInteger)arg1;
- (NSInteger)preferredImageFormatsCount;
- (void)setPreferredImageFormat:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)preferredImageFormatAtIndex:(NSUInteger)arg1;
- (void)addPreferredImageFormat:(NSInteger)arg1;
- (void)setHtmlBodyOnly:(BOOL)arg1;
- (void)setEmbedImages:(BOOL)arg1;
- (BOOL)hasEmbedImages;
- (BOOL)embedImages;
- (BOOL)hasHtmlBodyOnly;
- (BOOL)htmlBodyOnly;
- (id)preferredImageFormats;
- (void)setPreferredImageFormats:(id)arg1;
- (BOOL)hasAvailableImageMemory;
- (NSInteger)availableImageMemory;
- (BOOL)hasMaxImageHeight;
- (NSInteger)maxImageHeight;
- (BOOL)hasMaxImageWidth;
- (NSInteger)maxImageWidth;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)dealloc;

@end
