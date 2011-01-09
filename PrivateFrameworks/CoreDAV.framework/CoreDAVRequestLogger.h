/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, NSArray;



@interface CoreDAVRequestLogger : NSObject 
{
    <CoreDAVAccountInfoProvider> *_provider;
    NSArray *_responseHeadersSortDescriptors;
}

@property(retain) NSArray *responseHeadersSortDescriptors;


- (id)responseHeadersSortDescriptors;
- (void)setResponseHeadersSortDescriptors:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (void)logCoreDAVRequest:(id)arg1;
- (void)logCoreDAVResponseSnippet:(id)arg1;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(NSInteger)arg2;
- (void)dealloc;

@end
