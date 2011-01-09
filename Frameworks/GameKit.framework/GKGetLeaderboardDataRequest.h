/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, GKLeaderboard, GKGame, NSDictionary;



@interface GKGetLeaderboardDataRequest : GKDataRequest 
{
    GKGame *_game;
    GKLeaderboard *_leaderboard;
    NSArray *_scores;
    NSString *_scoreType;
    NSUInteger _maxRange;
    NSDictionary *_playerScore;
    NSString *_categoryTitle;
}

@property(readonly) NSString *categoryTitle;
@property(readonly) NSDictionary *playerScore;
@property(readonly) NSUInteger maxRange;
@property(readonly) NSString *scoreType;
@property(readonly) NSArray *scores;
@property(retain) GKLeaderboard *leaderboard;
@property(retain) GKGame *game;


- (id)key;
- (id)cacheKey;
- (id)request;
- (void)dealloc;
- (id)_timeScope:(NSInteger)arg1;
- (id)_playerScope:(NSInteger)arg1;
- (id)scoreType;
- (id)leaderboard;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (id)game;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (void)setGame:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (id)playerScore;
- (id)categoryTitle;
- (NSUInteger)maxRange;
- (id)scores;

@end
