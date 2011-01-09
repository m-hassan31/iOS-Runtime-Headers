/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSURLDownload, NSString;



@interface WebUIDownloadManager : NSObject 
{
    id _delegate;
    NSURLDownload *_download;
    NSString *_downloadPath;
}


- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidBegin:(id)arg1;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)_cleanUp;
- (void)_downloadDidFail:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
