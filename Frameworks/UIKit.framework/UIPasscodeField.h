/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, NSMutableArray, NSMutableString;



@interface UIPasscodeField : UIView <UITextFieldDelegate>
{
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIButton *_okButton;
    BOOL _opaqueBackground;
    BOOL _centerHorizontally;
    NSInteger _keyboardType;
    NSInteger _keyboardAppearance;
    NSInteger _emptyContentReturnKeyType;
    id _delegate;
}

+ (Class)textFieldClass;
+ (float)defaultHeight;
+ (void)_initializeSafeCategory;

- (void)setKeyboardType:(NSInteger)arg1 appearance:(NSInteger)arg2;
- (void)setKeyboardType:(NSInteger)arg1 appearance:(NSInteger)arg2 emptyContentReturnKeyType:(NSInteger)arg3;
- (void)_updateFields;
- (BOOL)showsOKButton;
- (void)setShowsOKButton:(BOOL)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)deleteLastCharacter;
- (NSInteger)numberOfEntryFields;
- (void)setNumberOfEntryFields:(NSInteger)arg1 opaqueBackground:(BOOL)arg2;
- (void)setNumberOfEntryFields:(NSInteger)arg1;
- (void)_textDidChange;
- (void)okButtonClicked:(id)arg1;
- (void)setKeyboardType:(NSInteger)arg1;
- (BOOL)textFieldShouldStartEditing:(id)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)appendString:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)_accessibilityChildren;
- (id)accessibilityLabel;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1;

@end
