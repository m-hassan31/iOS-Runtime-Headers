/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;



@interface GKLeaderboardCellBackgroundView : GKCellBackgroundView 
{
    float _rankAvailableWidth;
    NSArray *_leaderboardCellStyles;
}

@property(retain) NSArray *leaderboardCellStyles;
@property float rankAvailableWidth;

+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;
+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;

- (void)setSectionLocation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawScaledFillImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLeaderboardStyle:(NSInteger)arg2 cellIndex:(NSInteger)arg3;
- (id)leaderboardCellStyles;
- (void)setRankAvailableWidth:(float)arg1;
- (float)rankAvailableWidth;
- (void)setLeaderboardCellStyles:(id)arg1;

@end
