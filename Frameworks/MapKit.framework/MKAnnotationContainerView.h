/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAnnotationContainerViewInternal;



@interface MKAnnotationContainerView : UIView 
{
    MKAnnotationContainerViewInternal *_internal;
}

@property(readonly) NSArray *annotations;
@property(copy) NSArray *selectedAnnotations;
@property Class calloutViewClass;

+ (void)_initializeSafeCategory;

- (void)addAnnotation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)searchResultToSelect;
- (void)setSearchResultToSelect:(id)arg1;
- (id)_bubble;
- (void)calloutViewDidFadeOut:(id)arg1;
- (void)_removeBubbleWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_removeBubbleWithAnimation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centerLongLat;
- (struct { double x1; double x2; })_longLatSpan;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)_unregisterObserverForBubbleAnnotation:(id)arg1;
- (void)_registerObserverForBubbleAnnotation:(id)arg1;
- (void)setBubbleAnnotationView:(id)arg1;
- (id)bubblePin;
- (BOOL)useCLReverseGeocoder;
- (void)setUseCLReverseGeocoder:(BOOL)arg1;
- (void)_loadMetaDataForAnnotationView:(id)arg1 throttled:(BOOL)arg2;
- (void)_loadMetaDataForSearchResults:(id)arg1;
- (struct CGPoint { float x1; float x2; })_bubbleAnchorPoint;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })mapTransform;
- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { float x1; float x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animated:(BOOL)arg5;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 userInitiated:(BOOL)arg4 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 userInitiated:(BOOL)arg4;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 userInitiated:(BOOL)arg5 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg6;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1;
- (void)_deselectAnnotationView;
- (void)updateBubble;
- (void)_searchResultNameDidChange:(id)arg1;
- (void)updateCountdowns;
- (void)_resetAnnotationViewPerspective;
- (void)_updateAnnotationViewPerspective;
- (void)_scrollToBubble;
- (id)selectedSearchResult;
- (void)_updateGeocodeForAnnotationView:(id)arg1 bubble:(id)arg2 animated:(BOOL)arg3;
- (void)searchResultReverseGeocoded:(id)arg1;
- (void)panoramaInfoReturnedForObject:(id)arg1;
- (void)panoramaInfoReturnedForObjects:(id)arg1;
- (void)_userLocationInView:(id)arg1 frame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 center:(struct CADoublePoint { double x1; double x2; }*)arg3 accuracy:(float*)arg4 location:(id)arg5;
- (NSInteger)userLocationViewUpdateMode;
- (void)_updateAnnotationView:(id)arg1;
- (id)annotationViews;
- (void)_findNextView:(id*)arg1 orientation:(NSInteger*)arg2 context:(id)arg3;
- (void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViews:(id)arg1;
- (BOOL)_pinPositionAvailableAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)searchResultForPinAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearSearchResultPinsExcluding:(id)arg1;
- (void)clearSearchResultPins;
- (void)refreshSearchResult:(id)arg1;
- (void)refreshSearchResults:(id)arg1;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (id)searchResultPins;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 scrollToFit:(BOOL)arg5;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)setSelectedSearchResult:(id)arg1;
- (void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2;
- (id)_viewForUserLocationAnnotation:(id)arg1;
- (id)_viewForInternalAnnotation:(id)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)_dropPinsIfNeeded:(id)arg1 animated:(BOOL)arg2;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (id)_retrieveViewForAnnotation:(id)arg1;
- (id)_addViewForAnnotation:(id)arg1;
- (void)_notifyAddedAnnotationViews:(id)arg1 animated:(BOOL)arg2;
- (void)_registerObserverForAnnotation:(id)arg1;
- (void)_unregisterObserverForAnnotation:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_displayRect;
- (void)_refreshDisplayedAnnotations;
- (void)_displayAnnotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includePending:(BOOL)arg2 animated:(BOOL)arg3 removeOffscreenAnnotations:(BOOL)arg4;
- (void)_addViewsForAnnotations:(id)arg1 animated:(BOOL)arg2;
- (BOOL)userLocationAnnotationDidHide;
- (void)_removeAnnotationViews:(id)arg1;
- (void)_removeAnnotationView:(id)arg1;
- (void)_removeAnnotationView:(id)arg1 updateCollections:(BOOL)arg2;
- (BOOL)isAnimationsEnabled;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; id x5; BOOL x6; })currentComparisonContext;
- (NSUInteger)indexForAnnotationView:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (void)annotationViewsDidChangeZIndex:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_userLocationInView:(id)arg1 frame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 center:(struct CADoublePoint { double x1; double x2; }*)arg3 accuracy:(float*)arg4;
- (BOOL)hasPendingAnimations;
- (void)updateUserLocationView:(BOOL)arg1;
- (void)addManagedAnnotation:(id)arg1;
- (id)addViewForManagedAnnotation:(id)arg1;
- (void)setDidAddUserLocationView:(BOOL)arg1;
- (void)setUserLocationViewUpdateMode:(NSInteger)arg1;
- (BOOL)userLocationAnnotationWillShow;
- (void)restoreUserLocationViewUpdateMode;
- (BOOL)didAddUserLocationView;
- (BOOL)_userLocationPosition:(struct CADoublePoint { double x1; double x2; }*)arg1 bounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 accuracy:(float*)arg3 location:(id)arg4;
- (void)resetUserLocation;
- (void)set_mapTileView:(id)arg1;
- (void)setCalloutViewClass:(Class)arg1;
- (Class)calloutViewClass;
- (void)_setTransitCalloutAlphas:(float)arg1;
- (struct { double x1; double x2; })availablePinLongLatFromCenterCoordinate:(struct { double x1; double x2; })arg1 withMapTileView:(id)arg2;
- (void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1;
- (id)calloutAnnotationView;
- (void)draggingTouchMovedToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)calloutView;
- (void)updateUserLocationView;
- (void)setVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)userLocationView;
- (void)_loadMetaDataForSearchResult:(id)arg1;
- (void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1;
- (void)showAnnotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showBubbleAfterScroll;
- (struct { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (BOOL)freezeUserLocationView;
- (struct CGSize { float x1; float x2; })accessoryPadding;
- (void)_setShowingTransitCallouts:(BOOL)arg1;
- (void)selectPendingSearchResultAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2;
- (BOOL)showAddedAnnotationsAnimated:(BOOL)arg1;
- (BOOL)hasDroppingPins;
- (void)addSearchResults:(id)arg1;
- (void)addSearchResults:(id)arg1 selectSearchResult:(id)arg2;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3 scrollToFit:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationAndCalloutRectForSelectedSearchResult;
- (void)resetBubble;
- (void)setMapTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)annotationViewForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMapType:(NSUInteger)arg1;
- (id)_mapTileView;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (NSUInteger)mapType;
- (id)userLocation;
- (id)selectedAnnotations;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (id)annotations;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (void)_accessibilityZoomAtPoint:(struct CGPoint { float x1; float x2; })arg1 zoomIn:(BOOL)arg2;
- (BOOL)_accessibilityIsShowingPopover;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityActivate;
- (BOOL)_accessibilityEscape;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_accessibilitySupportsActivateAction;

@end
