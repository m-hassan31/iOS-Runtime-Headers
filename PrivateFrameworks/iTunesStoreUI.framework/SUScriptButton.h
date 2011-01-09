/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class WebScriptObject, SUScriptCanvasContext;



@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem>
{
    id _action;
    SUScriptCanvasContext *_canvas;
    BOOL _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

@property(retain) UIImage *image;
@property(retain) id action;
@property(retain) SUScriptCanvasContext *canvas;
@property BOOL enabled;
@property BOOL loading;
@property(retain) NSString *subtitle;
@property(retain) NSString *style;
@property(retain) NSString *title;
@property(retain) WebScriptObject *target;
@property BOOL shouldPerformDefaultAction;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)nativeButtonOfType:(NSInteger)arg1;
- (void)performActionWithArguments:(id)arg1;
- (void)setNativeButton:(id)arg1;
- (id)canvas;
- (BOOL)loading;
- (void)setCanvas:(id)arg1;
- (id)_copySubtitle;
- (id)_copyStyle;
- (id)_copyTitle;
- (BOOL)_isLoading;
- (void)_setLoading:(BOOL)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)_boxedNativeButton;
- (id)_nativeButton;
- (BOOL)shouldPerformDefaultAction;
- (void)setShouldPerformDefaultAction:(BOOL)arg1;
- (id)buttonItem;
- (void)setLoading:(BOOL)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)_setStyle:(id)arg1;
- (BOOL)enabled;
- (BOOL)_isEnabled;
- (void)_setEnabled:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (id)action;
- (id)style;
- (id)title;
- (id)image;
- (void)setStyle:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (id)init;
- (id)target;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)attributeKeys;

@end
