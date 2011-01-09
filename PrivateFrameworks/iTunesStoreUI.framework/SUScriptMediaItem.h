/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */



@interface SUScriptMediaItem : SUScriptObject 
{
}

@property(readonly) MPMediaItem *nativeItem;

+ (id)copyScriptMediaTypesForNativeMediaTypes:(NSInteger)arg1;
+ (NSInteger)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)nativePropertyForScriptProperty:(id)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(NSInteger)arg1;
+ (id)scriptPropertyForNativeProperty:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)nativeItem;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
- (id)_copyImageURLWithWidth:(NSInteger)arg1 height:(NSInteger)arg2;
- (id)_className;
- (id)_valueForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
