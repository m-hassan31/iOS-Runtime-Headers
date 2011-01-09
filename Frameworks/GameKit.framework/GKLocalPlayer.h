/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKAddressBook, UIAlertView, NSMutableArray, NSString, NSInvocation, GKInvite, NSArray;



@interface GKLocalPlayer : GKPlayer 
{
    BOOL _authenticated;
    BOOL _authenticating;
    NSArray *_friends;
    BOOL _underage;
    NSMutableArray *_emails;
    BOOL _findable;
    NSString *_accountName;
    BOOL _updating;
    GKInvite *_acceptedInvite;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authenticationCompletionHandler;

    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSString *_lastUsernameAttempted;
    NSInvocation *_currentFriendRequestInvocation;
    GKAddressBook *_addressBook;
    BOOL _didAuthenticate;
    BOOL _gameCenterAuthenticating;
    BOOL _authenticatingCurrentAccount;
    BOOL _authenticateWasCancelled;
    BOOL _enteringForeground;
    BOOL _authenticatedOnForeground;
    NSString *_previousPlayerID;
    NSUInteger _failedLogins;
}

@property(getter=isAuthenticated) BOOL authenticated;
@property(getter=isAuthenticating) BOOL authenticating;
@property(retain) NSMutableArray *emails;
@property(retain) NSString *accountName;
@property(retain) GKInvite *acceptedInvite;
@property(getter=isFindable) BOOL findable;
@property(retain) GKAddressBook *addressBook;
@property(retain) NSString *lastUsernameAttempted;
@property NSUInteger failedLogins;
@property(retain) NSString *previousPlayerID;
@property BOOL authenticatedOnForeground;
@property BOOL enteringForeground;
@property BOOL authenticateWasCancelled;
@property BOOL authenticatingCurrentAccount;
@property BOOL gameCenterAuthenticating;
@property BOOL didAuthenticate;
@property(retain) GKAddressBook *addressBook;
@property(retain) NSInvocation *currentFriendRequestInvocation;
@property(retain) NSString *lastUsernameAttempted;
@property UIAlertView *currentAlert;
@property(retain) UIAlertView *loginAlertView;
@property(copy) ? *authenticationCompletionHandler;
@property(retain) GKInvite *acceptedInvite;
@property BOOL updating;
@property(retain) NSString *accountName;
@property(getter=isFindable) BOOL findable;
@property(retain) NSMutableArray *emails;
@property(getter=isUnderage) BOOL underage;
@property(retain) NSArray *friends;
@property(getter=isAuthenticating) BOOL authenticating;
@property(getter=isAuthenticated) BOOL authenticated;

+ (id)accountName;
+ (BOOL)hasAuthenticatedAccount;
+ (void)filteredEmailsByCommunityMembership:(id)arg1 block:(id)arg2;
+ (id)localPlayer;

- (id)addressBook;
- (void)setAccountName:(id)arg1;
- (BOOL)isAuthenticated;
- (id)accountName;
- (void)setStatus:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)init;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)dealloc;
- (void)setAddressBook:(id)arg1;
- (BOOL)isAuthenticating;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1 postNotification:(BOOL)arg2;
- (void)setAuthenticated:(BOOL)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)showAccountWindowForMode:(NSInteger)arg1 withEmail:(id)arg2;
- (void)removeAccountWindow;
- (void)accountWindowDidDismiss;
- (void)accountViewControllerDidFinish:(id)arg1 accountCreated:(BOOL)arg2;
- (void)loginFailedForUsername:(id)arg1;
- (void)showAlertWithDictionary:(id)arg1;
- (void)showAlertForTag:(NSUInteger)arg1;
- (void)authenticateRequest:(id)arg1 completedWithError:(id)arg2;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)abortAuthenticationWithError:(id)arg1;
- (void)cancelAuthentication;
- (void)userCancelledAuthentication;
- (NSUInteger)failedLogins;
- (void)setFailedLogins:(NSUInteger)arg1;
- (id)previousPlayerID;
- (void)setPreviousPlayerID:(id)arg1;
- (BOOL)authenticatedOnForeground;
- (void)setAuthenticatedOnForeground:(BOOL)arg1;
- (BOOL)enteringForeground;
- (void)setEnteringForeground:(BOOL)arg1;
- (BOOL)authenticateWasCancelled;
- (void)setAuthenticateWasCancelled:(BOOL)arg1;
- (BOOL)authenticatingCurrentAccount;
- (void)setAuthenticatingCurrentAccount:(BOOL)arg1;
- (BOOL)gameCenterAuthenticating;
- (void)setGameCenterAuthenticating:(BOOL)arg1;
- (BOOL)didAuthenticate;
- (void)setDidAuthenticate:(BOOL)arg1;
- (id)currentFriendRequestInvocation;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (id)lastUsernameAttempted;
- (void)setLastUsernameAttempted:(id)arg1;
- (id)currentAlert;
- (void)setCurrentAlert:(id)arg1;
- (id)loginAlertView;
- (void)setLoginAlertView:(id)arg1;
- (id)authenticationCompletionHandler;
- (void)setAuthenticationCompletionHandler:(id)arg1;
- (id)acceptedInvite;
- (BOOL)isFindable;
- (void)setFindable:(BOOL)arg1;
- (id)emails;
- (void)setEmails:(id)arg1;
- (BOOL)isUnderage;
- (void)setUnderage:(BOOL)arg1;
- (id)friends;
- (void)setFriends:(id)arg1;
- (void)setAuthenticating:(BOOL)arg1;
- (void)authenticateWithoutLoginWithCompletionHandler:(id)arg1;
- (void)authenticateExistingAccountWithCompletionHandler:(id)arg1;
- (void)authenticateCurrentAccountWithCompletionHandler:(id)arg1;
- (void)authenticateExistingAccount:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)authorizeExistingAccountWithCompletionHandler:(id)arg1;
- (void)changePasswordForExistingAccountWithCompletionHandler:(id)arg1;
- (void)createAccountViewControllerWithEmail:(id)arg1 completionHandler:(id)arg2;
- (void)editAccountViewControllerWithCompletionHandler:(id)arg1;
- (void)signOutWithCompletionHandler:(id)arg1;
- (void)loadFriendIDsWithCompletionHandler:(id)arg1;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id)arg1;
- (id)iTunesAccountName;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)sendFriendRequestToEmail:(id)arg1 message:(id)arg2 withCompletionHandler:(id)arg3;
- (void)sendFriendRequestToAlias:(id)arg1 message:(id)arg2 withCompletionHandler:(id)arg3;
- (void)addEmail:(id)arg1 verified:(BOOL)arg2;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setAvatar:(id)arg1 withDescription:(id)arg2 color:(id)arg3 block:(id)arg4;
- (void)loadFriendRequests:(id)arg1;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toEmailAddresses:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 block:(id)arg5;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)reset:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)invalidatedCache:(id)arg1;
- (BOOL)matchesABRecord:(void*)arg1;
- (BOOL)updating;
- (void)setUpdating:(BOOL)arg1;
- (void)sendFriendRequest:(id)arg1 toPlayers:(id)arg2 block:(id)arg3;
- (void)sendFriendRequestToPlayer:(id)arg1 withMessage:(id)arg2 withCompletionHandler:(id)arg3;
- (BOOL)populateWithDictionary:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)clearDetails;
- (void)setAcceptedInvite:(id)arg1;

@end
