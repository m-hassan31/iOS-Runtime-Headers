/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */



@interface WebDefaultFrameLoadDelegate : NSObject 
{
}

+ (id)sharedFrameLoadDelegate;

- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
- (void)webView:(id)arg1 windowScriptObjectAvailable:(id)arg2;
- (void)webViewDidDisplayInsecureContent:(id)arg1;
- (void)webView:(id)arg1 didRunInsecureContent:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObjectForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearInspectorWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;

@end
