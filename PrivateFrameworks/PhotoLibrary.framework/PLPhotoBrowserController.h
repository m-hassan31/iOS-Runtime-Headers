/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLAssetContainer>, <PLAssetContainerList>, <PLPhotoBrowserControllerDelegate>, <PLRootLibraryNavigationController>, NSArray, NSDictionary, NSIndexPath, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumberFormatter, NSString, NSTimer, PLAirPlayBackgroundView, PLAirPlaySession, PLAssetContainerDataSource, PLDeletePhotosActionController, PLEditPhotoController, PLLibraryImageDataProvider, PLManagedAsset, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, PLProgressHUD, PLProgressView, PLVideoRemaker, PLVideoView, UIActionSheet, UIAlertView, UIImage, UILongPressGestureRecognizer, UINavigationBar, UINavigationController, UIPageController, UIScrollView, UITransitionView, UIView, UIViewController, UIWindow;

@interface PLPhotoBrowserController : UIViewController <PLAirPlaySessionDataSource, PLDeletePhotosActionControllerDelegate, PLPhotoScrubberSpeedDelegate, UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLPhotoScrubberDataSource, UIPopoverControllerDelegate, PLSlideshowPluginDelegate, AirPlayRemoteSlideshowDelegate, PLDismissableViewController, PLAssetContainerObserver, PLAssetContainerListChangeObserver, PLAssetChangeObserver> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _didDisplayComposeSheet : 1;
    unsigned int _didSlideImageDown : 1;
    unsigned int _isAnimatingSendToEmail : 1;
    unsigned int _videoEditingMode : 1;
    unsigned int _remaking : 1;
    unsigned int _isEditingPhoto : 1;
    unsigned int _clearingFullScreenView : 1;
    unsigned int _scrolling : 1;
    unsigned int _canShowCopyCallout : 1;
    unsigned int _viewIsDisappearing : 1;
    unsigned int _didRotate : 1;
    unsigned int _isAnimatingTrash : 1;
    unsigned int _isPlayingMusic : 1;
    unsigned int _didStartMusicPlayback : 1;
    unsigned int _rotationDisabledUnderCropOverlay : 1;
    unsigned int _didSetSimpleRemotePriority : 1;
    unsigned int _paging : 1;
    unsigned int _collapsing : 1;
    unsigned int _rotating : 1;
    unsigned int _reloadPhotoScrubber : 1;
    unsigned int _videoViewWillBeginEditing : 1;
    unsigned int _playVideoOnActivation : 1;
    unsigned int _remakingWasCancelled : 1;
    unsigned int _canUploadHDVideoOver3G : 1;
    unsigned int _didSetHDVideoUploadCapability : 1;
    unsigned int _didShowHDRPrompt : 1;
    unsigned int _imagesAreShuffled : 1;
    unsigned int _isEditingComment : 1;
    unsigned int _slideShowIsStreamed : 1;
    unsigned int _airTunesSlideShowIsEnding : 1;
    <PLPhotoBrowserControllerDelegate> *__delegate;
    SEL _actionAfterForcedRotation;
    UIActionSheet *_actionView;
    SEL _activityAction;
    id _activityTarget;
    PLAirPlayBackgroundView *_airTunesBackgroundView;
    PLAirPlaySession *_airplaySession;
    UIAlertView *_alertView;
    BOOL _animating;
    } _animationFrame;
    UIView *_animationView;
    unsigned int _appInteractionDisabled;
    PLAssetContainerDataSource *_assetContainerDataSource;
    id _attachmentIdentifier;
    int _autohideControlCount;
    NSArray *_availableAirTunesServices;
    unsigned int _bottomBarDisabled;
    UITransitionView *_cameraTransitionView;
    BOOL _canDelayImageLoading;
    UINavigationBar *_commentsEditBar;
    int _commentsInteractionMode;
    BOOL _commentsTableWasVisible;
    UIViewController *_composeSheetViewController;
    } _contentStartSize;
    int _currentAirTunesMode;
    NSString *_currentAirTunesTransition;
    NSArray *_currentAirplayRoutes;
    NSString *_currentAssetContainerUUID;
    NSManagedObjectID *_currentAssetObjectID;
    NSString *_currentAssetPublicGlobalUUID;
    NSIndexPath *_currentIndexPath;
    PLManagedAsset *_currentVideo;
    BOOL _delayImageLoading;
    PLDeletePhotosActionController *_deleteController;
    NSIndexPath *_deletedIndexPath;
    PLPhotoTileViewController *_deletedTile;
    BOOL _deletesDuplicatesWhenNecessary;
    PLEditPhotoController *_editController;
    float _endScale;
    UIView *_fadeToBlackView;
    BOOL _fadingToBlack;
    BOOL _ignoringInteractionEventsForVideoViewRemaking;
    PLLibraryImageDataProvider *_imageDataProvider;
    NSMutableSet *_imageRequests;
    BOOL _isCameraApp;
    NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath;
    NSIndexPath *_lastStreamedPhotoIndexPath;
    UIImage *_loadedImage;
    double _maximumTrimLength;
    UINavigationController *_mmsController;
    PLPhotoTileViewController *_mostRecentlyActiveTile;
    unsigned int _navigationBarDisabled;
    UIPageController *_pageController;
    NSMutableArray *_pendingAssetChangeNotifications;
    NSMutableArray *_pendingCollectionListChangeNotifications;
    PLManagedAsset *_pendingPhoto;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    SEL _photoAction;
    id _photoActionInvoker;
    PLPhotoScrubber *_photoScrubber;
    int _photoThumbnailFormat;
    BOOL _playingVideo;
    NSIndexPath *_priorIndexPath;
    PLProgressView *_progressView;
    UILongPressGestureRecognizer *_recognizer;
    PLVideoRemaker *_remaker;
    UIView *_remakerContainerView;
    int _remakerMode;
    unsigned int _rotationDisabled;
    PLProgressHUD *_savingPhotoHud;
    UIScrollView *_scroller;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    NSIndexPath *_scrubbedImageIndexPath;
    int _scrubberAssetContainerIndex;
    BOOL _shouldPlayVideoWhenViewAppears;
    BOOL _showingNextImage;
    BOOL _showsAirTunesOption;
    double _slideshowDelay;
    NSIndexPath *_slideshowEndIndexPath;
    BOOL _slideshowIsEnding;
    BOOL _slideshowIsLoading;
    BOOL _slideshowIsOrigami;
    unsigned int _slideshowItemsShown;
    unsigned int _slideshowItemsToShow;
    PLPictureFramePlugin *_slideshowPlugin;
    BOOL _slideshowStartedInFullScreen;
    int _slideshowStatus;
    NSTimer *_slideshowTimer;
    UITransitionView *_slideshowTransitionView;
    UIView *_slideshowView;
    float _startScale;
    unsigned int _statusBarIsLocked;
    NSMutableDictionary *_tileCache;
    BOOL _tvOutOn;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    NSMutableDictionary *_tvOutTileCache;
    UITransitionView *_tvOutTransitionView;
    UIWindow *_tvOutWindow;
    BOOL shouldShowOverlaysWhenViewAppears;
    BOOL shouldShowOverlaysWhenViewDisappears;
}

@property(setter=_setDeletedIndexPath:,retain) NSIndexPath * _deletedIndexPath;
@property(setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:,retain) NSIndexPath * _lastDisplayedRemoteSlideshowPhotoIndexPath;
@property(setter=_setPriorIndexPath:,retain) NSIndexPath * _priorIndexPath;
@property(setter=_setScrubbedImageIndexPath:,retain) NSIndexPath * _scrubbedImageIndexPath;
@property(setter=_setSlideshowEndIndexPath:,retain) NSIndexPath * _slideshowEndIndexPath;
@property(readonly) int albumFilter;
@property(readonly) unsigned int allAssetsCount;
@property(readonly) PLAssetContainerDataSource * assetContainerDataSource;
@property(readonly) <PLAssetContainerList> * assetContainerList;
@property BOOL canDelayImageLoading;
@property(readonly) BOOL canEditPhoto;
@property(readonly) BOOL canEditVideo;
@property BOOL canShowCopyCallout;
@property(readonly) UIView * commentsView;
@property PLManagedAsset * currentAsset;
@property(readonly) <PLAssetContainer> * currentAssetContainer;
@property(readonly) <PLAssetContainer> * currentAssetContainerForZoomTransition;
@property(readonly) PLManagedAsset * currentAssetForZoomTransition;
@property(retain) NSIndexPath * currentIndexPath;
@property(readonly) PLPhotoTileViewController * currentTile;
@property(readonly) PLPhotoTileViewController * currentTileForZoomTransition;
@property unsigned int currentTileIndex;
@property(readonly) PLVideoView * currentVideoView;
@property BOOL delayImageLoading;
@property <PLPhotoBrowserControllerDelegate> * delegate;
@property BOOL deletesDuplicatesWhenNecessary;
@property(readonly) PLLibraryImageDataProvider * imageDataProvider;
@property BOOL isCameraApp;
@property(readonly) BOOL isPlayingSlideshow;
@property(readonly) UIScrollView * mainScroller;
@property(retain) PLPhotoTileViewController * mostRecentlyActiveTile;
@property(readonly) UIPageController * pageController;
@property(retain) UIScrollView * pageControllerScrollView;
@property(readonly) UIView * pageControllerView;
@property(retain) PLPhotoScrubber * photoScrubber;
@property int photoThumbnailFormat;
@property(readonly) UIView * remakerContainerView;
@property(readonly) <PLRootLibraryNavigationController> * rootNavigationController;
@property BOOL shouldPlayVideoWhenViewAppears;
@property BOOL shouldShowOverlaysWhenViewAppears;
@property BOOL shouldShowOverlaysWhenViewDisappears;
@property(readonly) BOOL showsAirTunesOption;
@property(copy) NSDictionary * slideshowSettingsForCurrentAssetContainer;

+ (void)setPageControllerScrollViewClass:(Class)arg1;

- (id)_actionViewRootView;
- (void)_airTunesServiceDidDisconnect:(id)arg1;
- (void)_airTunesSlideShowTimerFired;
- (void)_airTunesSlideShowViewWasTapped;
- (id)_airplayRemoteSlideshow;
- (void)_airplayRouteWasPicked:(id)arg1;
- (id)_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned int)arg2;
- (void)_animateSendToEmail;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_animationDestinationRectForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_buttonItemViewWithTag:(int)arg1;
- (BOOL)_canTrimCurrentVideoInPlace;
- (BOOL)_canUploadHDVideo;
- (void)_cancelEditControllerIfEditedPhotoDeleted;
- (void)_cancelRemaking;
- (void)_cleanUpCurrentAirplaySession;
- (void)_clearFullScreenView;
- (void)_commonDidBeginRemaking;
- (void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(BOOL)arg3;
- (void)_commonDidFinishEmailAnimation:(BOOL)arg1;
- (void)_commonRemakingProgressDidChange:(float)arg1;
- (void)_composeSheetDidDisplay;
- (void)_configureEditNavigationController:(id)arg1;
- (void)_configureTVOutPageController;
- (void)_configureVideoViewInTile:(id)arg1;
- (id)_currentAirplayRoute;
- (BOOL)_currentItemIsVideo;
- (id)_currentTVOutTile;
- (id)_currentTVOutVideoView;
- (void)_delayedExitEditingMode;
- (id)_deletedIndexPath;
- (void)_dereferenceTile:(id)arg1;
- (void)_didDeleteCurrentAsset;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_didLoadImage:(id)arg1 forObjectID:(id)arg2;
- (BOOL)_didSetDataForCurrentItem;
- (void)_disableIdleTimer;
- (void)_disableStreamingSlideshow;
- (void)_discardPhotoScrubber;
- (void)_dismissEditControllerWithOldStatusBarStyle:(int)arg1;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_displayComposeSheet;
- (void)_displayLastImageForSlideshowPlugin:(id)arg1;
- (double)_durationForCurrentVideo;
- (void)_enableStreamingSlideshow;
- (void)_endSlideshow;
- (void)_enterVideoEditingMode;
- (void)_externalScreenConnected:(id)arg1;
- (void)_externalScreenDisconnected:(id)arg1;
- (void)_fadeIn;
- (void)_fadeOut;
- (void)_fadeToViewContents;
- (void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)_finishedSlidingImageDown:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2;
- (void)_flushTileCache;
- (void)_forceDismissActionSheet:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceDismissAlertView:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceDismissDeleteController:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceRemoveSavingPhotoHUD;
- (id)_fullScreenPreviewImageForPhoto:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)_hideCallout;
- (void)_hideCommentsTableIfNecessary:(float)arg1;
- (void)_invalidateAirplayCache;
- (BOOL)_isScrolling;
- (id)_lastDisplayedRemoteSlideshowPhotoIndexPath;
- (void)_loadImageForTile:(id)arg1 format:(int)arg2;
- (void)_loadSlideshowPlugin;
- (void)_longPressRecognized:(id)arg1;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (id)_mailComposeViewControllerWithPhoto:(id)arg1 attachmentIdentifier:(id*)arg2;
- (BOOL)_mainScrollerIsVisible;
- (void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_mediaControlClient;
- (id)_newSessionForRoute:(id)arg1;
- (id)_nextAirTunesSlideshowPhoto;
- (Class)_pageControllerScrollViewClass;
- (BOOL)_pauseSlideshow;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(BOOL)arg2;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1;
- (void)_performCATransition:(id)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_performSendViaEmail;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (BOOL)_playSlideshow;
- (id)_playbackVideoView;
- (id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2;
- (void)_prepareForDelete;
- (void)_prepareForTVOut;
- (void)_prepareToFade;
- (int)_presentEditPhotoController;
- (id)_priorIndexPath;
- (void)_processAssetContainerDidChange:(id)arg1 withCurrentContainer:(id)arg2;
- (void)_processAssetContainerListDidChangeNotification:(id)arg1;
- (void)_processAssetsDidChange:(id)arg1;
- (void)_reallySendViaEmail:(id)arg1;
- (void)_redisplayActionSheet:(id)arg1;
- (void)_redisplayDeleteController:(id)arg1;
- (void)_removeAirTunesSlideShowViewAndReset;
- (void)_removeProgressView;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_removeTVOutWindow;
- (void)_repositionPopoversIfNecessary;
- (id)_scrubbedImageIndexPath;
- (void)_scrubberDidBeginScrubbing:(id)arg1;
- (void)_scrubberDidEndScrubbing:(id)arg1;
- (void)_setComposeSheetViewController:(id)arg1;
- (void)_setCurrentIndexPath:(id)arg1;
- (void)_setDeletedIndexPath:(id)arg1;
- (void)_setIgnoreInteractionEventsForVideoViewRemaking:(BOOL)arg1;
- (void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1;
- (void)_setMusicIsPlaying:(BOOL)arg1 forPhoto:(id)arg2;
- (void)_setMusicIsPlaying:(BOOL)arg1;
- (void)_setPriorIndexPath:(id)arg1;
- (void)_setScrubbedImageIndexPath:(id)arg1;
- (void)_setSlideshowEndIndexPath:(id)arg1;
- (void)_setupPhotoScrubber:(BOOL)arg1;
- (BOOL)_shouldPauseOrStopVideo;
- (void)_showCommentTableIfNecessary:(float)arg1;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_showHDRPromptIfNeeded;
- (void)_showMMSComposeSheet;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showTileCache;
- (void)_showVideoTooLongAlert;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (id)_slideshowEndIndexPath;
- (BOOL)_slideshowNotRunning;
- (void)_slideshowPlayCurrentSlide;
- (void)_slideshowPlayTimerFired:(id)arg1;
- (void)_slideshowViewWasTapped:(id)arg1;
- (void)_slideshowWillBegin;
- (void)_slideshowWillEnd;
- (void)_startAirTunesSlideShow;
- (void)_startSlideshowTimer;
- (BOOL)_startingSlideshow;
- (void)_stopAirTunesSlideShow:(BOOL)arg1;
- (BOOL)_stopSlideshow;
- (void)_stopSlideshowTimer;
- (void)_stopStreamingPhotosToAirTunes;
- (void)_stopVideoPlaybackForIndexPath:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_suppresionContexts;
- (id)_tileForAsset:(id)arg1 shouldCreate:(BOOL)arg2 tileCache:(id)arg3;
- (void)_transcodeVideoUsingMode:(int)arg1;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 insideCurrentAssetContainer:(BOOL)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(BOOL)arg6;
- (void)_updateAfterAnimation;
- (void)_updateCachedIndexesForAssetContainerDidChange:(id)arg1;
- (void)_updateCurrentIndexForPageController:(id)arg1;
- (void)_updateFilteredImagesAndShuffle:(BOOL)arg1;
- (void)_updateForCommentsControllerEditMode:(id)arg1;
- (id)_updateIndexPath:(id)arg1 insertedSections:(id)arg2 deletedSections:(id)arg3;
- (void)_updateStatusBarVisibilityWithDuration:(double)arg1;
- (void)_updateTVOutAfterAnimation;
- (void)_updateTileImageAfterZoomTransition;
- (void)_validateTileCache:(id)arg1;
- (void)_willDisplayTileController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)airPlayRemoteSlideshowAssetKeys:(id)arg1;
- (void)airPlaySession:(id)arg1 didFailToStreamPhotoWithError:(id)arg2;
- (id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2;
- (id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2;
- (BOOL)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2;
- (BOOL)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(id)arg3;
- (int)albumFilter;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (unsigned int)allAssetsCount;
- (int)allowedDeleteOperationForAsset:(id)arg1;
- (void)animateToIndex;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)assetContainerDataSource;
- (void)assetContainerDidChange:(id)arg1;
- (id)assetContainerList;
- (void)assetContainerListDidChange:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (BOOL)barsAreVisible;
- (void)beginEditingPhoto;
- (void)beginLocalOrigamiSlideshowWithSettings:(id)arg1;
- (void)beginLocalSlideshowWithSettings:(id)arg1;
- (void)beginRemoteSlideshowToRouteID:(id)arg1 settings:(id)arg2;
- (BOOL)canDelayImageLoading;
- (BOOL)canEditPhoto;
- (BOOL)canEditVideo;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canShowCopyCallout;
- (BOOL)canShowNextImage;
- (BOOL)canShowPreviousImage;
- (void)cancelVideoEditingMode:(id)arg1;
- (id)commentsView;
- (id)contentScrollView;
- (void)copy:(id)arg1;
- (void)currentAirplayRouteChanged;
- (id)currentAsset;
- (id)currentAssetContainer;
- (id)currentAssetContainerForZoomTransition;
- (id)currentAssetForZoomTransition;
- (id)currentIndexPath;
- (BOOL)currentItemIsPlaying;
- (id)currentTile;
- (id)currentTileForZoomTransition;
- (unsigned int)currentTileIndex;
- (id)currentVideoView;
- (void)dealloc;
- (BOOL)delayImageLoading;
- (id)delegate;
- (void)deleteImageClicked:(id)arg1;
- (BOOL)deletesDuplicatesWhenNecessary;
- (void)didEndEditingPhoto;
- (void)didLoadFullScreenImage:(id)arg1 forPhotoAtIndex:(unsigned int)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)dismissPopovers;
- (void)displayNextPhoto:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)endEditingPhoto;
- (void)hideCommentsTable;
- (id)imageDataProvider;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (id)initWithImageDataProvider:(id)arg1;
- (BOOL)isActiveViewControllerInNavigationController;
- (BOOL)isCameraApp;
- (BOOL)isEditing;
- (BOOL)isEditingVideo;
- (BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (BOOL)isPlayingSlideshow;
- (BOOL)isRotationEnabled;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)mainScroller;
- (void)mainScrollerDidEndSmoothScroll;
- (id)mostRecentlyActiveTile;
- (id)navigationBar;
- (id)newNavigationBar;
- (id)newToolbar;
- (int)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (id)pageController:(id)arg1 viewControllerAtIndex:(int)arg2;
- (id)pageController;
- (void)pageControllerDidEndPaging:(id)arg1;
- (id)pageControllerScrollView;
- (id)pageControllerView;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (void)pauseCurrentMedia:(id)arg1;
- (id)photoCountFormatter;
- (id)photoScrollerTitle;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(BOOL)arg2 atIndex:(int)arg3 forLoupe:(BOOL)arg4;
- (void)photoScrubber:(id)arg1 scrubbingSpeedDidChange:(int)arg2;
- (id)photoScrubber;
- (int)photoThumbnailFormat;
- (void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2;
- (BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDidSetHDRTypeForPhoto:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)playCurrentMedia:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (BOOL)prepareToDisplayActivitySheet;
- (void)prepareToSendViaEmail;
- (id)remakerContainerView;
- (void)removeCurrentPhoto:(id)arg1;
- (void)removeRemakerContainerView;
- (void)revealComment:(id)arg1;
- (id)rootNavigationController;
- (id)rotatingFooterView;
- (void)saveSelectionOfMusic:(id)arg1 transition:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendViaEmailClicked;
- (void)sendViaMMSClicked;
- (void)setAirTunesMode:(int)arg1;
- (void)setAppInteractionDisabled:(BOOL)arg1;
- (void)setAssetContainerList:(id)arg1 currentImageIndexPath:(id)arg2;
- (void)setBottomBarDisabled:(BOOL)arg1;
- (void)setCanDelayImageLoading:(BOOL)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(BOOL)arg2;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setCurrentTileIndex:(unsigned int)arg1 updateAfterAnimation:(BOOL)arg2;
- (void)setCurrentTileIndex:(unsigned int)arg1;
- (void)setDelayImageLoading:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1;
- (void)setIsCameraApp:(BOOL)arg1;
- (void)setMainScrollerEnabled:(BOOL)arg1;
- (void)setMostRecentlyActiveTile:(id)arg1;
- (void)setNavigationBarDisabled:(BOOL)arg1;
- (BOOL)setNextSlideshowState:(int)arg1;
- (void)setPageControllerScrollView:(id)arg1;
- (void)setPhotoScrubber:(id)arg1;
- (void)setPhotoThumbnailFormat:(int)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1;
- (void)setShouldShowOverlaysWhenViewAppears:(BOOL)arg1;
- (void)setShouldShowOverlaysWhenViewDisappears:(BOOL)arg1;
- (void)setSlideshowSettingsForCurrentAssetContainer:(id)arg1;
- (void)setStatusBarIsLocked:(BOOL)arg1;
- (void)setUsesPhotoBrowserStyleStatusBar:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoEditingMode:(BOOL)arg1;
- (BOOL)shouldPlayVideoWhenViewAppears;
- (BOOL)shouldShowActionMenu;
- (BOOL)shouldShowOverlaysWhenViewAppears;
- (BOOL)shouldShowOverlaysWhenViewDisappears;
- (BOOL)shouldShowPlayButton;
- (void)showCommentsTable;
- (void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2;
- (void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2;
- (BOOL)showingCommentsTable;
- (BOOL)showsAirTunesOption;
- (void)slideImageOverMessage;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (id)slideshowSettingsForCurrentAssetContainer;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (BOOL)statusBarIsLocked;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)togglePlayPause:(id)arg1;
- (void)transitionDidEndWithOperation:(int)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionWillBegin;
- (void)trimVideo:(id)arg1;
- (void)updateAfterCollapse;
- (void)updateBarsAnimated:(BOOL)arg1;
- (void)updateOverlaysAnimated:(BOOL)arg1;
- (void)updateProgressView;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (int)videoRemakerMode;
- (void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidCreateAttachments:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (id)videoViewRequestsPickedAirplayRoute:(id)arg1;
- (BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayoutSubviews;
- (BOOL)wantsPhotoBrowserStyleStatusBar;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
