/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary { } *mAttachments;
    struct __CFData { } *mMainHtmlData;
    struct __CFString { } *mUriPrefix;
    struct __CFString { } *mUuidStr;
}


- (struct __CFDictionary { }*)attachments;
- (void)setUriPrefix:(struct __CFString { }*)arg1;
- (struct __CFData { }*)mainHtmlData;
- (struct __CFDictionary { }*)createOutputDictionary;
- (BOOL)setData:(struct __CFData { }*)arg1 mimeType:(struct __CFString { }*)arg2 forNamedResource:(struct __CFString { }*)arg3;
- (BOOL)setDataForMainHtmlResource:(struct __CFData { }*)arg1;
- (struct __CFString { }*)createUriForResource:(struct __CFString { }*)arg1;
- (void)setDocumentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPageElementXPath:(struct __CFString { }*)arg1 withThumbnailsOnLeft:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end
