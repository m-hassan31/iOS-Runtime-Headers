/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MPMediaItemCollection, <PLSlideshowSettingsViewControllerDelegate>, UITableView, NSMutableArray, MPMediaPickerController, UIView, MLAlbum, NSMutableDictionary, UITableViewCell;



@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate>
{
    MLAlbum *_album;
    NSMutableDictionary *_settings;
    UIView *_containerView;
    UITableView *_table;
    UITableViewCell *_playMusicSwitchCell;
    UITableViewCell *_selectedMusicCell;
    UITableViewCell *_playSlideshowCell;
    NSMutableArray *_transitionTitles;
    NSMutableArray *_transitionValues;
    NSMutableArray *_transitionCells;
    MPMediaPickerController *_mediaPicker;
    MPMediaItemCollection *_selectedMusicCollection;
    <PLSlideshowSettingsViewControllerDelegate> *_delegate;
    NSInteger _mode;
}

@property(readonly) NSInteger slideshowTransition;
@property(readonly) BOOL slideshowShouldPlayMusic;
@property(readonly) MPMediaItemCollection *slideshowMusicCollection;
@property NSInteger mode;
@property <PLSlideshowSettingsViewControllerDelegate> *delegate;


- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)setMode:(NSInteger)arg1;
- (NSInteger)mode;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_addTransition:(id)arg1;
- (void)_setSlideshowMusicCollection:(id)arg1;
- (id)_selectedMusic;
- (void)_saveSettings;
- (id)_selectedTransition;
- (void)_setShouldPlayMusic:(BOOL)arg1;
- (void)_playMusicSwitchValueDidChange:(id)arg1;
- (void)_playButtonWasPressed:(id)arg1;
- (void)_preheatMediaPicker;
- (BOOL)_shouldPlayMusic;
- (id)initWithAlbum:(id)arg1;
- (NSInteger)slideshowTransition;
- (BOOL)slideshowShouldPlayMusic;
- (id)slideshowMusicCollection;

@end
