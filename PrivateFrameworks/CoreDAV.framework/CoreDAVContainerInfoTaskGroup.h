/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSMutableSet;



@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    NSInteger _phase;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    NSInteger _containerInfoDepth;
    NSString *_appSpecificHomeSetPropNameSpace;
    NSString *_appSpecificHomeSetPropName;
}

@property <CoreDAVContainerInfoTaskGroupDelegate> *delegate;
@property NSInteger containerInfoDepth;


- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (id)_copyContainerParserMappings;
- (NSInteger)containerInfoDepth;
- (void)setContainerInfoDepth:(NSInteger)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
- (id)description;
- (void)dealloc;

@end
