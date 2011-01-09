/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIRemoteWindow;



@interface UIRemoteView : UIView 
{
    NSString *_remoteViewIdentifier;
    UIRemoteWindow *_remoteWindow;
    BOOL _captureAllWindows;
    BOOL _remoteViewOpaque;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 captureAllWindows:(BOOL)arg2;
- (void)setRemoteViewOpaque:(BOOL)arg1;
- (void)registerWithIdentifier:(id)arg1;
- (id)remoteViewIdentifier;
- (void)unregister;
- (void)dealloc;

@end
