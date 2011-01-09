/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputInternal;



@interface AVCaptureInput : NSObject 
{
    AVCaptureInputInternal *_inputInternal;
}

@property(readonly) NSArray *ports;


- (id)notReadyError;
- (id)ports;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)session;
- (void)setSession:(id)arg1;

@end
