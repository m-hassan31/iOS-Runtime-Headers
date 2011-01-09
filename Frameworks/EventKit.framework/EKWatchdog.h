/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;



@interface EKWatchdog : NSObject 
{
    double _timeout;
    NSString *_identifier;
    struct dispatch_source_s { } *_timer;
}

+ (void)executeWithTimeout:(double)arg1 identifier:(id)arg2 block:(id)arg3;

- (id)initWithTimeout:(double)arg1 identifier:(id)arg2;
- (id)initWithTimeout:(double)arg1 identifier:(id)arg2 block:(id)arg3;
- (void)start;
- (void)invalidate;
- (void)dealloc;

@end
