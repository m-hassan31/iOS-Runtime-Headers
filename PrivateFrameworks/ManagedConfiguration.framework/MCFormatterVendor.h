/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumberFormatter;



@interface MCFormatterVendor : NSObject 
{
    NSNumberFormatter *_numberFormatter;
    struct dispatch_queue_s { } *_syncQueue;
}

+ (id)sharedInstance;

- (id)numberFormatter;
- (void)_localeDidChange:(id)arg1;
- (id)init;
- (void)dealloc;

@end
