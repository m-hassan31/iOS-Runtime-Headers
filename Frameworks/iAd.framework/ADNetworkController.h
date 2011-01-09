/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSTimer;



@interface ADNetworkController : NSObject 
{
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
    NSInteger _networkType;
}

+ (id)sharedNetworkController;

- (NSInteger)networkType;
- (void)start;
- (void)_scheduleCheckForNetwork;
- (void)_checkForNetwork;
- (void)_checkForNetworkAndNotify;

@end
