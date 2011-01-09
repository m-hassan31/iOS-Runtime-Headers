/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKPlayer, NSDictionary, NSNumber;



@interface GKGetGameInfoDataRequest : GKDataRequest 
{
    NSString *_bundleID;
    NSNumber *_adamID;
    NSString *_ctx;
    GKPlayer *_player;
    NSString *_storeURL;
    NSDictionary *_responses;
}

@property(retain) NSDictionary *responses;
@property(retain) NSString *storeURL;
@property(retain) GKPlayer *player;
@property(retain) NSString *ctx;
@property(retain) NSNumber *adamID;
@property(retain) NSString *bundleID;


- (id)adamID;
- (void)setAdamID:(id)arg1;
- (id)header;
- (id)key;
- (id)cacheKey;
- (id)request;
- (void)dealloc;
- (void)setResponses:(id)arg1;
- (id)storeURL;
- (void)setStoreURL:(id)arg1;
- (id)ctx;
- (id)bundleID;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (void)setBundleID:(id)arg1;
- (void)setCtx:(id)arg1;
- (id)responses;
- (id)player;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)setPlayer:(id)arg1;

@end
