/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary { } *mQuicklookProperties;
    struct __CFDictionary { } *mAttachments;
    struct __CFData { } *mMainHtmlData;
    struct __CFString { } *mUriScheme;
    struct __CFString { } *mUuidStr;
}


- (id)initWithUriScheme:(struct __CFString { }*)arg1;
- (struct __CFDictionary { }*)quicklookDictionary;
- (struct __CFData { }*)mainHtmlData;
- (BOOL)giveOutputToPreviewRequest:(struct __QLPreviewRequest { }*)arg1;
- (BOOL)setData:(struct __CFData { }*)arg1 mimeType:(struct __CFString { }*)arg2 forNamedResource:(struct __CFString { }*)arg3;
- (BOOL)setDataForMainHtmlResource:(struct __CFData { }*)arg1;
- (struct __CFString { }*)createUriForResource:(struct __CFString { }*)arg1;
- (void)setDocumentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPageElementXPath:(struct __CFString { }*)arg1 withThumbnailsOnLeft:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end
