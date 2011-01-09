/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, SSURLConnectionRequest, NSDate, NSDictionary, NSMutableArray;



@interface SSItem : NSObject 
{
    NSDate *_expirationDate;
    NSArray *_offers;
    NSDictionary *_properties;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSMutableArray *_tellAFriendHandlers;
    SSURLConnectionRequest *_tellAFriendRequest;
    NSString *_tellAFriendSubject;
}

@property(readonly) NSNumber *ITunesStoreIdentifier;
@property(readonly) NSArray *allItemOffers;
@property(readonly) SSItemOffer *defaultItemOffer;
@property(readonly) NSString *artistName;
@property(readonly) NSString *itemTitle;
@property(readonly) NSString *itemKind;
@property(getter=isRestricted,readonly) BOOL restricted;
@property(getter=isGameCenterEnabled,readonly) BOOL gameCenterEnabled;
@property(readonly) NSURL *viewItemURL;
@property(readonly) float averageUserRating;
@property(readonly) NSInteger numberOfUserRatings;
@property(readonly) SSItemImageCollection *imageCollection;
@property(readonly) NSArray *thumbnailImages;
@property(readonly) NSDate *expirationDate;


- (BOOL)isGameCenterEnabled;
- (id)collectionName;
- (id)buyParameters;
- (id)artistName;
- (id)initWithItemDictionary:(id)arg1;
- (id)playableMedia;
- (id)mediaKind;
- (NSInteger)numberOfUserRatings;
- (id)priceDisplay;
- (id)bundleVersion;
- (float)averageUserRating;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (BOOL)isRestricted;
- (id)allItemOffers;
- (id)imageCollection;
- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (id)tellAFriendBodyMIMEType;
- (id)thumbnailImages;
- (id)viewItemURL;
- (id)sendGiftURL;
- (id)viewReviewsURL;
- (void)_finishTellAFriendLoadWithError:(id)arg1;
- (id)_tellAFriendDictionary;
- (id)_offers;
- (void)_setExpirationDate:(id)arg1;
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)itemOfferForIdentifier:(id)arg1;
- (id)rawItemDictionary;
- (id)defaultItemOffer;
- (id)ITunesStoreIdentifier;
- (id)itemKind;
- (id)valueForProperty:(id)arg1;
- (id)itemTitle;
- (id)description;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)releaseDate;
- (id)expirationDate;
- (id)tellAFriendSubject;
- (id)tellAFriendBody;

@end
