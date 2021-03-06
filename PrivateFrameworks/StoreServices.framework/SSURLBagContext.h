/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
    int _allowedRetryCount;
    BOOL _allowsBootstrapCellularData;
    BOOL _allowsExpiredBags;
    int _bagType;
    NSMutableDictionary *_httpHeaders;
    BOOL _ignoresCaches;
    NSNumber *_userIdentifier;
    BOOL _usesCachedBagsOnly;
}

@property(copy) NSDictionary * allHTTPHeaders;
@property int allowedRetryCount;
@property BOOL allowsBootstrapCellularData;
@property BOOL allowsExpiredBags;
@property int bagType;
@property(readonly) NSString * cacheKey;
@property BOOL ignoresCaches;
@property(retain) NSNumber * userIdentifier;
@property BOOL usesCachedBagsOnly;

+ (id)contextWithBagType:(int)arg1;

- (id)allHTTPHeaders;
- (int)allowedRetryCount;
- (BOOL)allowsBootstrapCellularData;
- (BOOL)allowsExpiredBags;
- (int)bagType;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)ignoresCaches;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (void)setAllowedRetryCount:(int)arg1;
- (void)setAllowsBootstrapCellularData:(BOOL)arg1;
- (void)setAllowsExpiredBags:(BOOL)arg1;
- (void)setBagType:(int)arg1;
- (void)setIgnoresCaches:(BOOL)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsesCachedBagsOnly:(BOOL)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)userIdentifier;
- (BOOL)usesCachedBagsOnly;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
