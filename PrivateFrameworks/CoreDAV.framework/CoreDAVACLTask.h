/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray;



@interface CoreDAVACLTask : CoreDAVTask 
{
    NSArray *_accessControlEntities;
}

@property(retain) NSArray *accessControlEntities;
@property <CoreDAVACLTaskDelegate> *delegate;


- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)accessControlEntities;
- (void)setAccessControlEntities:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (id)initWithURL:(id)arg1;
- (id)description;
- (void)dealloc;

@end
