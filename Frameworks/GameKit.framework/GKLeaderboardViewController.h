/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKLeaderboardCategoryViewController, GKLeaderboardViewControllerPrivate;



@interface GKLeaderboardViewController : UINavigationController 
{
    GKLeaderboardCategoryViewController *_categoryController;
    GKLeaderboardViewControllerPrivate *_privateViewController;
}

@property NSInteger timeScope;
@property(retain) NSString *category;
@property <GKLeaderboardViewControllerDelegate> *leaderboardDelegate;
@property(retain) GKLeaderboardViewControllerPrivate *privateViewController;
@property(retain) GKLeaderboardCategoryViewController *categoryController;


- (void)setCategory:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (void)dealloc;
- (id)privateViewController;
- (void)setPrivateViewController:(id)arg1;
- (id)categoryController;
- (void)setCategoryController:(id)arg1;
- (void)authenticatedStatusChanged;
- (id)leaderboardDelegate;
- (void)setLeaderboardDelegate:(id)arg1;
- (id)game;
- (void)setGame:(id)arg1;
- (id)category;
- (NSInteger)timeScope;
- (void)setTimeScope:(NSInteger)arg1;

@end
