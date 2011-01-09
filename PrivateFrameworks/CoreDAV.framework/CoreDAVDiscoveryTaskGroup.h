/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableArray, NSString, NSArray;



@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate, CoreDAVSVRLookupTaskDelegate>
{
    NSArray *_wellKnownPaths;
    NSString *_requiredComplianceClass;
    NSArray *_httpPorts;
    NSArray *_httpsPorts;
    NSString *_httpServiceString;
    NSString *_httpsServiceString;
    BOOL _didReceiveAuthenticationError;
    NSMutableArray *_discoveries;
}

@property <CoreDAVDiscoveryTaskGroupDelegate> *delegate;
@property BOOL didReceiveAuthenticationError;


- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;
- (id)allDiscoveryPaths:(id)arg1;
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;
- (void)startOptionsTask:(id)arg1;
- (void)startPropfindTask:(id)arg1;
- (void)srvLookupTask:(id)arg1 host:(id)arg2 port:(NSInteger)arg3 error:(id)arg4;
- (void)optionsTask:(id)arg1 error:(id)arg2;
- (void)completeDiscovery:(id)arg1 gotPrincipalURL:(id)arg2 error:(id)arg3;
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;
- (void)addToDiscoveryArray:(id*)arg1 discovery:(id)arg2;
- (void)sortDiscoveries:(id)arg1 priorFailed:(id*)arg2 subsequentFailed:(id*)arg3 priorIncomplete:(id*)arg4 subsequentIncomplete:(id*)arg5 priorUnstarted:(id*)arg6 subsequentUnstarted:(id*)arg7 priorSuccess:(id*)arg8 subsequentSuccess:(id*)arg9;
- (BOOL)didReceiveAuthenticationError;
- (void)setDidReceiveAuthenticationError:(BOOL)arg1;
- (void)cancelTaskGroup;
- (void)cancelTasks;
- (void)syncAway;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)dealloc;

@end
