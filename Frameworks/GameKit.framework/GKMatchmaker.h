/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKMatchPlayersDataRequest;



@interface GKMatchmaker : NSObject 
{
    GKMatchPlayersDataRequest *_matchPlayersDataRequest;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _inviteHandler;

}

@property(copy) ? *inviteHandler;
@property(retain) GKMatchPlayersDataRequest *matchPlayersDataRequest;

+ (id)sharedMatchmaker;

- (void)cancel;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)loadConnectivitySettingsWithCompletionHandler:(id)arg1;
- (void)setConnectivitySettings:(id)arg1;
- (void)lookForInvite;
- (void)setInviteHandler:(id)arg1;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 currentPlayerIDs:(id)arg3 combo:(BOOL)arg4 serverHosted:(BOOL)arg5 completionHandler:(id)arg6;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (BOOL)isMatchingPlayers;
- (void)addPlayersToInviteWithMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerIDs:(id)arg2 completionHandler:(id)arg3;
- (void)queryPlayerGroupActivity:(NSUInteger)arg1 withCompletionHandler:(id)arg2;
- (void)queryActivityWithCompletionHandler:(id)arg1;
- (id)inviteHandler;
- (id)matchPlayersDataRequest;
- (void)setMatchPlayersDataRequest:(id)arg1;

@end
