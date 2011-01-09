/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoChapterCellContentView;



@interface MPVideoChapterCell : UITableViewCell 
{
    MPVideoChapterCellContentView *_chapterContentView;
}

@property(getter=isCurrent) BOOL current;
@property NSUInteger index;
@property BOOL showThumbnailColumn;
@property float timeColumnWidth;
@property(retain) MPTimeMarker *timeMarker;

+ (void)_initializeSafeCategory;

- (void)setIndex:(NSUInteger)arg1;
- (NSUInteger)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (BOOL)isCurrent;
- (BOOL)showThumbnailColumn;
- (id)timeMarker;
- (float)timeColumnWidth;
- (void)setTimeMarker:(id)arg1;
- (void)setCurrent:(BOOL)arg1;
- (void)setTimeColumnWidth:(float)arg1;
- (void)setShowThumbnailColumn:(BOOL)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;

@end
