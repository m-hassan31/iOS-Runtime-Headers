/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UIKeyboardInputMode : UITextInputMode 
{
    NSString *primaryLanguage;
    NSString *identifier;
    NSString *softwareLayout;
    NSString *hardwareLayout;
}

@property(retain) NSString *hardwareLayout;
@property(retain) NSString *softwareLayout;
@property(retain) NSString *identifier;
@property(retain) NSString *primaryLanguage;

+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;

- (void)setHardwareLayout:(id)arg1;
- (void)setSoftwareLayout:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (id)hardwareLayout;
- (id)softwareLayout;
- (id)primaryLanguage;
- (id)initWithIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)dealloc;

@end
