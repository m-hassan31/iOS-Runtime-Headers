/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;



@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem 
{
    NSMutableSet *_privileges;
}

@property(retain) NSMutableSet *privileges;


- (BOOL)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addPrivilege:(id)arg1;
- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)privileges;
- (void)setPrivileges:(id)arg1;
- (id)description;
- (void)dealloc;

@end
