/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIKeyboard, UITransitionView, UIView<PINEntryView>;



@interface DevicePINPane : PSEditingPane <UIKeyInput>
{
    UITransitionView *_transitionView;
    BOOL _transitioning;
    UIView<PINEntryView> *_pinView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _pinViewFrame;
    UIKeyboard *_keypad;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keypadFrame;
    BOOL _keypadActive;
    NSInteger _autocapitalizationType;
    NSInteger _autocorrectionType;
    NSInteger _keyboardType;
    NSInteger _keyboardAppearance;
    BOOL _playSound;
    BOOL _isBlocked;
    BOOL _simplePIN;
}

@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger returnKeyType;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger autocorrectionType;
@property NSInteger autocapitalizationType;


- (id)password;
- (BOOL)hasText;
- (void)deleteBackward;
- (void)setAutocapitalizationType:(NSInteger)arg1;
- (void)setAutocorrectionType:(NSInteger)arg1;
- (void)setKeyboardAppearance:(NSInteger)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (NSInteger)autocapitalizationType;
- (NSInteger)autocorrectionType;
- (NSInteger)keyboardAppearance;
- (NSInteger)keyboardType;
- (BOOL)isSecureTextEntry;
- (void)insertText:(id)arg1;
- (void)transitionViewDidComplete:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setPlaysKeyboardClicks:(BOOL)arg1;
- (void)activateKeypadView;
- (void)_setKeypadState:(BOOL)arg1 animated:(BOOL)arg2;
- (void)clearPassword;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
- (void)deactivateKeypadView;
- (void)dismissKeypad;
- (void)showFailedAttempts:(NSInteger)arg1;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(BOOL)arg3 animate:(BOOL)arg4;
- (void)hideFailedAttempts;
- (void)hideError;
- (void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
- (void)okButtonPressed;
- (void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2;
- (void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2;
- (BOOL)simplePIN;
- (id)specifierLabel;
- (BOOL)requiresKeyboard;

@end
