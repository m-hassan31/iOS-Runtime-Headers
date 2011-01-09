/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKFriendRequestComposeViewControllerDelegate>, GKComposeController, NSString;



@interface GKFriendRequestComposeViewController : UINavigationController 
{
    <GKFriendRequestComposeViewControllerDelegate> *_composeViewDelegate;
    GKComposeController *_composeController;
    NSString *_message;
    NSUInteger _recipientCount;
}

@property NSUInteger recipientCount;
@property(retain) NSString *message;
@property(retain) GKComposeController *composeController;
@property <GKFriendRequestComposeViewControllerDelegate> *composeViewDelegate;

+ (NSUInteger)maxNumberOfRecipients;

- (void)setMessage:(id)arg1;
- (id)message;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)prepareForNewRecipients:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientsNonPlayerIDCommon:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithAliases:(id)arg1;
- (void)sendFinishedMessageToDelegate;
- (NSUInteger)recipientCount;
- (void)setRecipientCount:(NSUInteger)arg1;
- (id)composeController;
- (void)setComposeController:(id)arg1;
- (id)composeViewDelegate;
- (void)setComposeViewDelegate:(id)arg1;
- (void)composeControllerAppeared:(id)arg1;
- (void)composeControllerSendStarted:(id)arg1;
- (void)composeControllerCancelled:(id)arg1;

@end
