/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet;



@interface IMParentalControls : NSObject 
{
    NSMutableSet *_aimWhitelist;
    NSMutableSet *_subnetWhitelist;
    NSMutableSet *_jabberWhitelist;
    unsigned int _active : 1;
    unsigned int _disableAV : 1;
    unsigned int _disableAimService : 1;
    unsigned int _forceAimWhitelist : 1;
    unsigned int _disableSubnetService : 1;
    unsigned int _forceSubnetWhitelist : 1;
    unsigned int _disableJabberService : 1;
    unsigned int _forceJabberWhitelist : 1;
    unsigned int _forceChatLogging : 1;
    unsigned int _shouldPostNotifications : 1;
}

@property(readonly) BOOL active;
@property(readonly) BOOL disableAV;
@property(readonly) BOOL disableAimService;
@property(readonly) BOOL forceAimWhitelist;
@property(readonly) NSSet *aimWhitelist;
@property(readonly) BOOL disableSubnetService;
@property(readonly) BOOL forceSubnetWhitelist;
@property(readonly) NSSet *subnetWhitelist;
@property(readonly) BOOL disableJabberService;
@property(readonly) BOOL forceJabberWhitelist;
@property(readonly) NSSet *jabberWhitelist;
@property(readonly) BOOL forceChatLogging;

+ (id)objectForKey:(id)arg1;
+ (id)standardControls;

- (BOOL)active;
- (NSUInteger)retainCount;
- (id)init;
- (oneway void)release;
- (id)autorelease;
- (void)dealloc;
- (void)_updateParentalSettings;
- (void)_managedPrefsNotification:(id)arg1;
- (BOOL)accountIsEnabled:(id)arg1;
- (BOOL)accountHasWhitelist:(id)arg1;
- (BOOL)disableAV;
- (BOOL)forceChatLogging;
- (BOOL)disableAimService;
- (BOOL)forceAimWhitelist;
- (id)aimWhitelist;
- (BOOL)disableSubnetService;
- (BOOL)forceSubnetWhitelist;
- (id)subnetWhitelist;
- (BOOL)disableJabberService;
- (BOOL)forceJabberWhitelist;
- (id)jabberWhitelist;
- (void)setShouldPostNotifications:(BOOL)arg1;
- (BOOL)okToConnectAccount:(id)arg1;

@end
