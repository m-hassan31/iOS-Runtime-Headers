/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;



@interface ITTaskAssertion : NSObject 
{

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _expireHandler;

    NSString *_debugInfo;
}


- (id)initWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;
- (void)performExpirationHandler;
- (id)description;
- (void)invalidate;
- (void)dealloc;

@end
