/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUScriptMediaPickerController : SUScriptViewController 
{
}

@property BOOL allowsPickingMultipleItems;
@property(readonly) NSArray *mediaTypes;
@property(retain) NSString *prompt;

+ (id)webScriptNameForKey:(const char *)arg1;

- (BOOL)allowsPickingMultipleItems;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (BOOL)_allowsPickingMultipleItems;
- (void)_setAllowsPickingMultipleItems:(BOOL)arg1;
- (void)_setMediaTypes:(id)arg1;
- (id)_copyMediaTypes;
- (id)initWithMediaTypes:(id)arg1;
- (id)_copyPrompt;
- (void)_setPrompt:(id)arg1;
- (id)newNativeViewController;
- (void)setNativeViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setMediaTypes:(id)arg1;
- (id)mediaTypes;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (id)attributeKeys;

@end
