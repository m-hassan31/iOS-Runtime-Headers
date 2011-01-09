/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL;



@interface ISCookieStorage : NSObject 
{
    struct dispatch_queue_s { } *_dispatchQueue;
    void *_processAssertion;
    NSInteger _processAssertionCount;
    NSURL *_storageLocation;
}

@property(readonly) NSURL *storageLocation;

+ (id)sharedStorage;
+ (id)sharedInstance;

- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (id)initWithStorageLocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)removeAllCookies;
- (void)removeCookiesWithProperties:(id)arg1;
- (id)storageLocation;
- (void)_beginProcessAssertion;
- (void)_bindInsertStatement:(struct sqlite3_stmt { }*)arg1 forCookie:(id)arg2 userIdentifier:(id)arg3;
- (BOOL)_bindStatement:(struct sqlite3_stmt { }*)arg1 withValues:(id)arg2;
- (id)_columnNameForCookieProperty:(id)arg1;
- (id)_cookieForSelectStatement:(struct sqlite3_stmt { }*)arg1;
- (struct __CFSet { }*)_copyPrivateCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)_endProcessAssertion;
- (void)synchronizeCookies;

@end
