/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */



@interface CKMessageComposition : NSObject 
{
}

@property BOOL isTextOnly;
@property(copy) NSString *subject;
@property(copy) NSString *markupString;
@property(copy) NSString *textString;
@property(retain) NSArray *resources;
@property(readonly) BOOL hasContent;

+ (id)newCompositionForText:(id)arg1;
+ (id)newComposition;
+ (void)deleteFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)messageCompositionFromFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)newCompositionForMessage:(id)arg1;

- (void)setSubject:(id)arg1;
- (id)subject;
- (id)markupString;
- (void)setResources:(id)arg1;
- (id)resources;
- (BOOL)isTextOnly;
- (BOOL)hasContent;
- (void)setIsTextOnly:(BOOL)arg1;
- (void)setMarkupString:(id)arg1;
- (void)setTextString:(id)arg1;
- (void)writeToFileWithPrefix:(id)arg1 path:(id)arg2;
- (id)textString;

@end
