/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class <CNFRegWizardControllerDelegate>;



@interface CNFRegWizardController : PSSetupController 
{
    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int reloadOnViewWillAppear : 1; 
    } _wizardFlags;
}

@property BOOL canStartNested;
@property BOOL canShowSplashScreen;
@property(readonly) NSInteger currentControllerDisplayStyle;
@property BOOL reloadOnViewWillAppear;
@property <CNFRegWizardControllerDelegate> *firstRunDelegate;

+ (NSInteger)_firstRunState;
+ (BOOL)shouldShowFirstRunController:(BOOL)arg1;
+ (BOOL)shouldShowFirstRunController;

- (id)controllerClassesToShow:(BOOL)arg1;
- (id)controllersToShow:(BOOL)arg1;
- (id)controllersToShow;
- (id)controllerToShow:(BOOL)arg1;
- (id)controllerToShow;
- (void)setupController;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)firstRunController:(id)arg1 finishedWithState:(NSUInteger)arg2;
- (BOOL)canStartNested;
- (void)setCanStartNested:(BOOL)arg1;
- (BOOL)canShowSplashScreen;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (NSInteger)currentControllerDisplayStyle;
- (id)firstRunDelegate;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setReloadOnViewWillAppear:(BOOL)arg1;
- (BOOL)reloadOnViewWillAppear;
- (void)dismiss:(BOOL)arg1 aliased:(BOOL)arg2;
- (void)dismissWithState:(NSUInteger)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
