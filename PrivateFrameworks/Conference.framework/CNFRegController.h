/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSTimer, NSMutableArray, IMAccount;



@interface CNFRegController : NSObject 
{
    IMAccount *_account;
    NSMutableArray *_aliases;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _accountRegistrationBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _displayNameChangedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _accountAddedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _accountRemovedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _aliasStatusChangedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _aliasRemovedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _aliasAddedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _profileChangedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _profileStatusChangedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _accountAuthorizationChangedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resetBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    NSTimer *_idlePulseTimer;
    NSTimer *_wifiAlertWatchTimer;
    NSInteger _requiredWifiCount;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    BOOL _originalUsesBackgroundNetwork;
    struct { 
        unsigned int listeningForAccountChanges : 1; 
        unsigned int listeningForAccountActivation : 1; 
        unsigned int preventingIdleSleep : 1; 
        unsigned int showedWifiFirstRunAlert : 1; 
    } _controllerFlags;
}

@property(retain,readonly) NSArray *aliases;
@property(getter=isFaceTimeEnabled) BOOL faceTimeEnabled;
@property(retain,readonly) IMServiceImpl *service;
@property(copy) ? *accountAuthorizationChangedBlock;
@property(copy) ? *profileStatusChangedBlock;
@property(copy) ? *profileChangedBlock;
@property(copy) ? *alertHandler;
@property(copy) ? *resetBlock;
@property(copy) ? *aliasRemovedBlock;
@property(copy) ? *aliasAddedBlock;
@property(copy) ? *aliasStatusChangedBlock;
@property(copy) ? *displayNameChangedBlock;
@property(copy) ? *accountRemovedBlock;
@property(copy) ? *accountAddedBlock;
@property(copy) ? *accountRegistrationBlock;
@property(retain) IMAccount *account;
@property(retain,readonly) NSMutableArray *mutableAliases;

+ (BOOL)deviceSupportsRegistrationInterface;
+ (id)sharedInstance;

- (BOOL)isConnected;
- (void)setAccount:(id)arg1;
- (id)account;
- (BOOL)signOutAccount:(id)arg1;
- (BOOL)signOutCurrentAccount;
- (void)clearAllCaches;
- (void)reloadAliases;
- (id)_rawAccountLogin;
- (id)mutableAliases;
- (id)useableAliases;
- (NSInteger)profileValidationStatus;
- (id)profileRegionID;
- (id)profileBasePhoneNumber;
- (BOOL)hasValidatedLocale;
- (void)startListeningForAccountChanges;
- (void)stopListeningForAccountChanges;
- (void)accountAdded:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountRegistrationChanged:(id)arg1;
- (void)accountDisplayNameChanged:(id)arg1;
- (void)profileChanged:(id)arg1;
- (void)profileValidationStateChanged:(id)arg1;
- (void)authorizationCredentialsChanged:(id)arg1;
- (void)handleAliasStatusChanged:(id)arg1 withError:(id)arg2;
- (void)aliasStatusChanged:(id)arg1;
- (void)handleAliasAdded:(id)arg1;
- (void)handleAliasRemoved:(id)arg1;
- (void)aliasesChanged:(id)arg1;
- (void)setFaceTimeEnabled:(BOOL)arg1;
- (BOOL)isFaceTimeEnabled;
- (void)daemonDisconnected:(id)arg1;
- (void)daemonConnected:(id)arg1;
- (void)_wifiAlertWatchTimerFired:(id)arg1;
- (void)_startWiFiAlertWatchTimer;
- (void)_stopWiFiAlertWatchTimer;
- (void)_pulseIdleTimer:(id)arg1;
- (void)startPreventingSleepAndDimming;
- (void)stopPreventingSleepAndDimming;
- (BOOL)deviceHasSaneNetworkConnection;
- (BOOL)deviceHasWifiTurnedOn;
- (BOOL)deviceCanTakeNetworkAction;
- (void)showWiFiFirstRunAlert;
- (void)resetWifiFirstRunAlert;
- (void)showWiFiAlertIfNecessary;
- (void)showWiFiAlert;
- (id)accountAuthorizationChangedBlock;
- (id)profileStatusChangedBlock;
- (void)setProfileStatusChangedBlock:(id)arg1;
- (id)profileChangedBlock;
- (void)setProfileChangedBlock:(id)arg1;
- (id)resetBlock;
- (void)setResetBlock:(id)arg1;
- (id)aliasRemovedBlock;
- (void)setAliasRemovedBlock:(id)arg1;
- (id)aliasAddedBlock;
- (void)setAliasAddedBlock:(id)arg1;
- (id)aliasStatusChangedBlock;
- (id)displayNameChangedBlock;
- (void)setDisplayNameChangedBlock:(id)arg1;
- (id)accountRemovedBlock;
- (void)setAccountRemovedBlock:(id)arg1;
- (id)accountAddedBlock;
- (void)setAccountAddedBlock:(id)arg1;
- (id)accountRegistrationBlock;
- (void)removeAllHandlers;
- (BOOL)refreshAuthorizationCredentials;
- (id)authorizationID;
- (id)authorizationToken;
- (void)setAccountAuthorizationChangedBlock:(id)arg1;
- (BOOL)hasFailedLogin;
- (id)guessedAccountName;
- (id)accountLogin;
- (BOOL)createAccountWithLogin:(id)arg1 password:(id)arg2;
- (BOOL)hasRegisteredAccount;
- (BOOL)hasValidatedAlias;
- (void)setAccountRegistrationBlock:(id)arg1;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (id)alertHandler;
- (void)setAlertHandler:(id)arg1;
- (BOOL)removeAlias:(id)arg1;
- (BOOL)hasAlias:(id)arg1;
- (BOOL)addAlias:(id)arg1;
- (BOOL)validateAlias:(id)arg1;
- (id)guessedAlias;
- (NSUInteger)accountState;
- (void)setAliasStatusChangedBlock:(id)arg1;
- (BOOL)activateAccount:(id)arg1;
- (id)aliases;
- (NSInteger)validationStatusForAlias:(id)arg1;
- (BOOL)isConnecting;
- (void)connect:(BOOL)arg1;
- (id)service;
- (void)connect;
- (id)init;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)dealloc;

@end
