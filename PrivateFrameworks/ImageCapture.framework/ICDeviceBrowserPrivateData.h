/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableArray;



@interface ICDeviceBrowserPrivateData : NSObject 
{
    id _delegate;
    BOOL _browsing;
    NSMutableArray *_internalDevices;
}

@property(retain) NSMutableArray *internalDevices;
@property(getter=isBrowsing) BOOL browsing;
@property id delegate;


- (void)setInternalDevices:(id)arg1;
- (void)setBrowsing:(BOOL)arg1;
- (BOOL)isBrowsing;
- (id)internalDevices;
- (void)finalize;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
