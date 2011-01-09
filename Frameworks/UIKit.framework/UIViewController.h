/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISearchDisplayController, UIDropShadowView, UITabBarItem, NSBundle, UIView, UIViewController, NSArray, UIBarButtonItem, UIPopoverController, NSHashTable, UIDimmingView, NSString, UIResponder, UINavigationItem;



@interface UIViewController : UIResponder <NSCoding>
{
    UIView *_view;
    UITabBarItem *_tabBarItem;
    UINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    NSString *_title;
    NSString *_nibName;
    NSBundle *_nibBundle;
    UIViewController *_parentViewController;
    NSHashTable *_childViewControllers;
    UIViewController *_childModalViewController;
    UIViewController *_parentModalViewController;
    UIView *_modalTransitionView;
    UIResponder *_modalPreservedFirstResponder;
    UIResponder *_defaultFirstResponder;
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    UIView *_presentationSuperview;
    UIView *_sheetView;
    id _currentAction;
    UIView *_savedHeaderSuperview;
    UIView *_savedFooterSuperview;
    UIBarButtonItem *_editButtonItem;
    UISearchDisplayController *_searchDisplayController;
    UIPopoverController *_popoverController;
    NSInteger _modalTransitionStyle;
    NSInteger _modalPresentationStyle;
    NSInteger _lastKnownInterfaceOrientation;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSizeForViewInPopover;
    struct CGSize { 
        float width; 
        float height; 
    } _formSheetSize;
    struct { 
        unsigned int appearState : 2; 
        unsigned int isEditing : 1; 
        unsigned int isPerformingModalTransition : 1; 
        unsigned int hidesBottomBarWhenPushed : 1; 
        unsigned int autoresizesArchivedViewToFullSize : 1; 
        unsigned int viewLoadedFromControllerNib : 1; 
        unsigned int isRootViewController : 1; 
        unsigned int isSheet : 1; 
        unsigned int isSuspended : 1; 
        unsigned int wasApplicationFrameAtSuspend : 1; 
        unsigned int wantsFullScreenLayout : 1; 
        unsigned int shouldUseFullScreenLayout : 1; 
        unsigned int allowsAutorotation : 1; 
        unsigned int searchControllerRetained : 1; 
        unsigned int oldModalInPopover : 1; 
        unsigned int isModalInPopover : 1; 
        unsigned int restoreDeepestFirstResponder : 1; 
        unsigned int isInWillRotateCallback : 1; 
        unsigned int disallowMixedOrientationPresentations : 1; 
    } _viewControllerFlags;
}

@property(readonly) SUKeyboardBackstopViewController *keyboardBackstopViewController;
@property(retain) SUStorePageProtocol *storePageProtocol;
@property(readonly) CGRect documentBounds;
@property(getter=isLoaded,readonly) BOOL loaded;
@property(getter=isLoading,readonly) BOOL loading;
@property(readonly) BOOL shouldInvalidateForMemoryPurge;
@property(retain,readonly) GKImageBackgroundView *gkBackgroundView;
@property(readonly) UIPopoverController *gkPopoverController;
@property(retain) UITabBarItem *tabBarItem;
@property(retain,readonly) UITabBarController *tabBarController;
@property(retain,readonly) UISplitViewController *splitViewController;
@property(retain,readonly) UINavigationItem *navigationItem;
@property BOOL hidesBottomBarWhenPushed;
@property(retain,readonly) UINavigationController *navigationController;
@property(retain) UIView *view;
@property(readonly) UIViewController *modalViewController;
@property BOOL wantsFullScreenLayout;
@property UIViewController *parentViewController;
@property NSInteger interfaceOrientation;
@property(retain) UITransitionView *modalTransitionView;
@property BOOL searchBarHidNavBar;
@property(readonly) BOOL _isModalSheet;
@property(readonly) BOOL _isPresentedModally;
@property(readonly) BOOL _useSheetRotation;
@property(readonly) BOOL _isDimmingBackground;
@property BOOL modalInPopover;
@property(getter=isInWillRotateCallback) BOOL inWillRotateCallback;
@property(retain) UISearchDisplayController *searchDisplayController;
@property NSInteger modalPresentationStyle;
@property NSInteger modalTransitionStyle;
@property(retain) UIViewController *childModalViewController;
@property(retain) UIDropShadowView *dropShadowView;
@property(retain) NSHashTable *childViewControllers;
@property(copy) NSString *title;
@property(retain) NSBundle *nibBundle;
@property(readonly) UIView *savedHeaderSuperview;
@property(copy) NSString *nibName;
@property CGSize contentSizeForViewInPopover;

+ (BOOL)doesOverrideViewControllerMethod:(SEL)arg1;
+ (struct CGSize { float x1; float x2; })defaultFormSheetSize;
+ (id)existingNibNameMatchingClassName:(id)arg1 bundle:(id)arg2;
+ (NSInteger)_keyboardDirectionForTransition:(NSInteger)arg1 isOrderingIn:(BOOL)arg2;
+ (void)removeViewControllerForView:(id)arg1;
+ (void)setViewController:(id)arg1 forView:(id)arg2;
+ (BOOL)_isViewSizeFullScreen:(id)arg1 inWindow:(id)arg2;
+ (void)_forceLegacyModalViewControllers:(BOOL)arg1;
+ (BOOL)_shouldUseLegacyModalViewControllers;
+ (void)setCustomTransitionDuration:(double)arg1;
+ (double)customTransitionDuration;
+ (BOOL)_doesOverrideLegacyShouldAutorotateMethod;
+ (double)durationForTransition:(NSInteger)arg1;
+ (id)viewControllerForView:(id)arg1;
+ (void)_initializeSafeCategory;
+ (void)configureStatusBarForTransitionToViewController:(id)arg1 animated:(BOOL)arg2;
+ (void)_dequeueTransitionSafeInvocations;
+ (void)_enqueueTransitionSafeInvocation:(id)arg1;
+ (void)endTransitionSafety;
+ (void)beginTransitionSafety;
+ (id)transitionSafePerformer:(id)arg1;
+ (id)transitionSafetyDelegate;

- (BOOL)_displaysFullScreen;
- (NSInteger)_imagePickerStatusBarMode;
- (void)_setUseTelephonyUI:(BOOL)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (struct CGSize { float x1; float x2; })formSheetSize;
- (void)setFormSheetSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)_startModalPresentationInPopover;
- (void)_endModalPresentationInPopover;
- (void)setModalInPopover:(BOOL)arg1;
- (BOOL)isModalInPopover;
- (BOOL)modalInPopover;
- (void)_doCommonSetup;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (void)setDefaultFirstResponder:(id)arg1;
- (void)_loadViewFromNibNamed:(id)arg1 bundle:(id)arg2;
- (id)nibName;
- (id)nibBundle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultInitialViewFrame;
- (float)_statusBarHeightForCurrentInterfaceOrientation;
- (void)loadView;
- (void)viewDidLoad;
- (void)forceUnloadView;
- (void)unloadView;
- (void)unloadViewIfReloadable;
- (void)unloadViewForced:(BOOL)arg1;
- (void)viewWillUnload;
- (void)viewDidUnload;
- (id)existingView;
- (id)_existingView;
- (id)contentScrollView;
- (void)_setExistingNavigationItem:(id)arg1;
- (id)_existingNavigationItem;
- (void)_setExistingTabBarItem:(id)arg1;
- (id)_existingTabBarItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (BOOL)autoresizesArchivedViewToFullSize;
- (void)setAutoresizesArchivedViewToFullSize:(BOOL)arg1;
- (void)autoresizeArchivedView;
- (BOOL)_containsFirstResponder;
- (void)updateTitleForViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (id)parentViewController;
- (void)setParentViewController:(id)arg1;
- (id)_nonModalParentViewController;
- (id)_nonModalAncestorViewController;
- (id)_rootAncestorViewController;
- (id)_modalParentViewController;
- (id)_ancestorViewControllerOfClass:(Class)arg1 allowModalParent:(BOOL)arg2;
- (BOOL)_isAppearingOrAppeared;
- (NSInteger)_appearState;
- (BOOL)_hasAppeared;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)_tryBecomeRootViewControllerInWindow:(id)arg1;
- (void)_resignRootViewController;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (BOOL)_canReloadView;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (BOOL)_isViewInWindowWithoutParentViewController;
- (id)_visibleView;
- (void)applicationWantsViewsToDisappear;
- (BOOL)_shouldUseFullScreenLayout;
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (BOOL)_reallyWantsFullScreenLayout;
- (void)setWantsFullScreenLayout:(BOOL)arg1;
- (BOOL)isPerformingModalTransition;
- (id)modalTransitionView;
- (void)setModalTransitionView:(id)arg1;
- (id)presentedViewController;
- (id)modalViewController;
- (id)currentAction;
- (void)_overlayPresentAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)isSheet;
- (void)setIsSheet:(BOOL)arg1;
- (void)_sheetPresentAnimationDidStop;
- (void)_setPopoverController:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displyingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dismissModalOverlayViewController;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_dismissModalOverlayAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)userDidCancelPopoverView:(id)arg1;
- (void)_notifyPopOverThatView:(id)arg1 isTransitioning:(BOOL)arg2;
- (void)_dismissModalOverlayViewControllerAnimated:(BOOL)arg1;
- (void)_sheetDismissAnimationDidStop;
- (void)_legacyPresentModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (NSInteger)_preferredInterfaceOrientationGivenCurrentOrientation:(NSInteger)arg1;
- (BOOL)_isDimmingBackground;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (BOOL)_isModalSheet;
- (BOOL)_useSheetRotation;
- (void)presentModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (NSInteger)_transitionForModalTransitionStyle:(NSInteger)arg1 appearing:(BOOL)arg2;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_tryRecursivelyPresentModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (void)_legacyDismissModalViewController:(id)arg1 withTransition:(NSInteger)arg2;
- (void)_resetViewController;
- (void)dismissModalViewControllerWithTransition:(NSInteger)arg1;
- (void)_dismissModalViewControllerWithTransition:(NSInteger)arg1 from:(id)arg2;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_viewWillStartPresentCustomTransition;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)_didFinishPresentTransition;
- (void)_legacyModalPresentTransitionDidComplete;
- (void)_didFinishDismissTransition;
- (void)_legacyModalDismissTransitionDidComplete;
- (void)_addDismissButton;
- (void)_clearDismissButton;
- (void)_handleDismiss;
- (BOOL)_disallowMixedOrientationPresentations;
- (void)_setDisallowMixedOrientationPresentations:(BOOL)arg1;
- (BOOL)_shouldAutoPinInputViewsForModalFormSheet;
- (BOOL)_shouldIgnoreTouchesForModalFormSheet;
- (id)_backgroundColorForModalFormSheet;
- (void)_beginDisablingInterfaceAutorotation;
- (void)_endDisablingInterfaceAutorotation;
- (BOOL)_isInterfaceAutorotationDisabled;
- (void)_updateInterfaceOrientationAnimated:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (void)_setAllowsAutorotation:(BOOL)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)rotatingHeaderViewForWindow:(id)arg1;
- (id)rotatingHeaderView;
- (id)rotatingFooterViewForWindow:(id)arg1;
- (id)rotatingFooterView;
- (void)_clearLastKnownInterfaceOrientation;
- (void)_setInterfaceOrientationOnModalRecursively:(NSInteger)arg1;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })_centerForOrientation:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForOrientation:(NSInteger)arg1;
- (void)setInWillRotateCallback:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (void)getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1 forWindow:(id)arg2;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })tranformForScreenOriginRotation:(float)arg1;
- (void)window:(id)arg1 resizeFromOrientation:(NSInteger)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)accessibilityLargeTextDidChange;
- (id)defaultPNGName;
- (id)searchDisplayController;
- (void)_setSearchDisplayController:(id)arg1 retain:(BOOL)arg2;
- (void)setSearchDisplayController:(id)arg1;
- (void)_setSearchDisplayControllerUnretained:(id)arg1;
- (BOOL)searchBarHidNavBar;
- (void)setSearchBarHidNavBar:(BOOL)arg1;
- (void)setModalPresentationStyle:(NSInteger)arg1;
- (NSInteger)modalTransitionStyle;
- (void)setModalTransitionStyle:(NSInteger)arg1;
- (id)childModalViewController;
- (void)setChildModalViewController:(id)arg1;
- (id)dropShadowView;
- (void)setDropShadowView:(id)arg1;
- (id)childViewControllers;
- (void)setChildViewControllers:(id)arg1;
- (void)setNibBundle:(id)arg1;
- (id)savedHeaderSuperview;
- (void)setNibName:(id)arg1;
- (id)_popoverController;
- (id)tabBarItem;
- (void)setTabBarItem:(id)arg1;
- (id)tabBarController;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)_moreListTitle;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)moreListTableCell;
- (id)splitViewController;
- (void)_editingAnimationFinished;
- (id)editButtonItem;
- (void)_toggleEditing:(id)arg1;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)navigationController;
- (BOOL)hidesBottomBarWhenPushed;
- (void)setHidesBottomBarWhenPushed:(BOOL)arg1;
- (id)toolbarItems;
- (void)setToolbarItems:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(BOOL)arg2;
- (void)attentionClassDumpUser:(id)arg1 yesItsUsAgain:(id)arg2 althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)arg3 itWasntMuchFunWhenYourAppStoppedWorking:(id)arg4 pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)arg5;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (double)durationForTransition:(NSInteger)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)navigationItem;
- (id)title;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (NSInteger)modalPresentationStyle;
- (BOOL)wantsFullScreenLayout;
- (BOOL)isViewLoaded;
- (BOOL)_isPresentedModally;
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
- (id)viewControllerForRotation;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(NSInteger)arg2;
- (NSInteger)_lastKnownInterfaceOrientation;
- (void)window:(id)arg1 willRotateToInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg2;
- (void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)window:(id)arg1 didRotateFromInterfaceOrientation:(NSInteger)arg2;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (BOOL)isInWillRotateCallback;
- (id)rotatingContentViewForWindow:(id)arg1;
- (void)awakeFromNib;
- (id)nextResponder;
- (void)setView:(id)arg1;
- (id)view;
- (id)init;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (NSInteger)interfaceOrientation;
- (void)didReceiveMemoryWarning;
- (id)defaultFirstResponder;
- (void)setTitle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)ab_wantsToPresentModalViewControllerWithoutAnyHelp;
- (NSInteger)abViewControllerType;
- (void)presentMoviePlayerViewControllerAnimated:(id)arg1;
- (void)dismissMoviePlayerViewControllerAnimated;
- (NSInteger)uiipc_filterForMediaTypes:(id)arg1;
- (BOOL)uiipc_useTelephonyUI;
- (id)uiipc_imagePickerOptions;
- (NSInteger)setStatusBarForFullScreenViewAnimated:(BOOL)arg1 useTelephonyUI:(BOOL)arg2 canHideStatusBar:(BOOL)arg3 newStatusBarMode:(NSInteger*)arg4;
- (void)revertStatusBar:(NSInteger)arg1 currentStatusBar:(NSInteger)arg2 animated:(BOOL)arg3;
- (id)uiipc_imagePickerController;
- (id)gkBackgroundView;
- (id)gkPopoverController;
- (void)gkAdjustBackgroundForSplitPosition;
- (void)_gkRefreshContents;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (id)copyArchivableJetsamContext;
- (BOOL)isDescendantOfViewController:(id)arg1;
- (BOOL)isInMoreList;
- (BOOL)isRootViewController;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (id)parentModalViewController;
- (void)parentViewControllerHierarchyDidChange;
- (void)resetRestoredContext;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (BOOL)shouldInvalidateForMemoryPurge;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)reloadForNetworkTypeChange;
- (id)_sectionForViewController:(id)arg1;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (void)dismissAnimated:(BOOL)arg1;
- (id)section;
- (BOOL)canDisplaySectionGroup:(id)arg1;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (id)displayedURL;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setStorePageProtocol:(id)arg1;
- (BOOL)viewIsReady;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (BOOL)hasDisplayableContent;
- (BOOL)loadMoreWithURL:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(NSInteger)arg2 animated:(BOOL)arg3;
- (BOOL)reloadWithURLRequest:(id)arg1;
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptViewController;
- (void)setShowsBackgroundShadow:(BOOL)arg1;
- (BOOL)showsBackgroundShadow;
- (BOOL)presentViewController:(id)arg1 inOverlayWithConfiguration:(id)arg2;
- (BOOL)presentOverlayViewController:(id)arg1 withTransition:(id)arg2;
- (void)dismissOverlayBackgroundViewController;
- (id)overlayBackgroundViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)overlayViewController;
- (id)scriptWindowContext;
- (id)storeSplitViewController;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (struct CGSize { float x1; float x2; })maximumViewSize;
- (id)navigationItemForScriptInterface;
- (id)keyboardBackstopViewController;

@end
