/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableData, NSString, SubCalURLRequest, <SubCalValidationTaskDelegate>, NSURL;



@interface SubCalValidationTask : SubCalDATask 
{
    <SubCalValidationTaskDelegate> *_delegate;
    SubCalURLRequest *_request;
    NSURL *_subscriptionURL;
    NSString *_username;
    NSString *_password;
    BOOL _performQuickValidation;
    NSMutableData *_icsData;
    NSString *_calendarName;
    BOOL _foundBeginVCal;
    BOOL _foundCalName;
    NSUInteger _searchIndex;
}

@property BOOL performQuickValidation;
@property(retain) NSString *password;
@property(retain) NSString *username;
@property(retain) NSURL *subscriptionURL;
@property <SubCalValidationTaskDelegate> *delegate;


- (void)dealloc;
- (void)willFinish;
- (void)performDelegateCallbackWithError:(id)arg1;
- (void)didFinish;
- (void)performTask;
- (BOOL)subCalURLRequest:(id)arg1 shouldAllowTrust:(struct __SecTrust { }*)arg2 forHost:(id)arg3;
- (void)subCalURLRequest:(id)arg1 updatedData:(id)arg2;
- (void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (BOOL)_isInvalidVCalBeginningForData:(id)arg1;
- (id)_stringBeforeNewline:(const char *)arg1 length:(NSUInteger)arg2;
- (id)_searchForCalNameInConnectionData:(id)arg1;
- (void)_tryQuickValidationCurrentData:(id)arg1;
- (BOOL)performQuickValidation;
- (void)setPerformQuickValidation:(BOOL)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)subscriptionURL;
- (void)setSubscriptionURL:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end