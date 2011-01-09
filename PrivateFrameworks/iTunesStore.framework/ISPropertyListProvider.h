/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISPropertyListProvider : ISDataProvider <NSCopying>
{
    BOOL _shouldPostFooterSectionChanged;
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
}

@property BOOL shouldTriggerDownloads;
@property BOOL shouldProcessProtocol;
@property BOOL shouldProcessDialogs;
@property BOOL shouldProcessAccount;
@property BOOL shouldPostFooterSectionChanged;


- (void)setShouldPostFooterSectionChanged:(BOOL)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (BOOL)processDialogFromPropertyList:(id)arg1 returningError:(id*)arg2;
- (BOOL)processPropertyList:(id)arg1 returningError:(id*)arg2;
- (void)_processAccount:(id)arg1 fallback:(id)arg2;
- (void)_processActions:(id)arg1 fallback:(id)arg2;
- (BOOL)_processFailureTypeFromPropertyList:(id)arg1 error:(id*)arg2;
- (void)_processPingsInDictionary:(id)arg1;
- (void)_processPreferences:(id)arg1;
- (void)_processStoreCredits:(id)arg1 fallback:(id)arg2;
- (BOOL)_processStoreVersion:(id)arg1 returningError:(id*)arg2;
- (void)_processTriggerDownload:(id)arg1 fallback:(id)arg2;
- (BOOL)_runAuthorizationDialog:(id)arg1 returningError:(id*)arg2;
- (BOOL)shouldTriggerDownloads;
- (void)setShouldTriggerDownloads:(BOOL)arg1;
- (BOOL)shouldProcessProtocol;
- (BOOL)shouldProcessDialogs;
- (void)setShouldProcessDialogs:(BOOL)arg1;
- (BOOL)shouldProcessAccount;
- (void)setShouldProcessAccount:(BOOL)arg1;
- (BOOL)shouldPostFooterSectionChanged;
- (void)setShouldProcessProtocol:(BOOL)arg1;

@end
