/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;



@interface GKLeaderboardCategory : NSObject 
{
    NSString *_categoryID;
    NSString *_localizedTitle;
    NSInteger _overallRank;
    NSInteger _overallRankCount;
    NSInteger _rankAmongFriends;
    NSInteger _friendCount;
}

@property NSInteger friendCount;
@property NSInteger rankAmongFriends;
@property NSInteger overallRankCount;
@property NSInteger overallRank;
@property(retain) NSString *localizedTitle;
@property(retain) NSString *categoryID;

+ (id)categoryWithDictionary:(id)arg1;

- (id)description;
- (void)dealloc;
- (NSInteger)friendCount;
- (void)setFriendCount:(NSInteger)arg1;
- (NSInteger)rankAmongFriends;
- (void)setRankAmongFriends:(NSInteger)arg1;
- (NSInteger)overallRankCount;
- (void)setOverallRankCount:(NSInteger)arg1;
- (NSInteger)overallRank;
- (void)setOverallRank:(NSInteger)arg1;
- (id)localizedTitle;
- (void)setLocalizedTitle:(id)arg1;
- (id)categoryID;
- (void)setCategoryID:(id)arg1;

@end
