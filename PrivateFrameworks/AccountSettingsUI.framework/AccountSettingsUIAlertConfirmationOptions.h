/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSString;



@interface AccountSettingsUIAlertConfirmationOptions : NSObject 
{
    NSInteger _selectedButtonIndex;
    NSInteger _keepDataButtonIndex;
    NSInteger _mergeDataButtonIndex;
    NSInteger _deleteDataButtonIndex;
    NSInteger _cancelButtonIndex;
    NSString *_dataclass;
    BOOL _enableAction;
    NSString *_tag;
}

+ (BOOL)isEnableAction:(id)arg1;
+ (BOOL)isNonDestructiveAction:(id)arg1;

- (void)setDataclass:(id)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setIsEnableAction:(BOOL)arg1;
- (void)setupButtonIndexesForActions:(id)arg1;
- (BOOL)userCancelled;
- (BOOL)userChoiceWillDeleteData;
- (id)userAction;

@end
