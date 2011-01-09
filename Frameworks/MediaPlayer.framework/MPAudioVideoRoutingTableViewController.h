/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVDestinationBrowser, NSMutableArray, MPAudioDeviceController;



@interface MPAudioVideoRoutingTableViewController : UITableViewController 
{
    MPAudioDeviceController *_audioDeviceController;
    MPAVDestinationBrowser *_videoDestinationBrowser;
    NSMutableArray *_routes;
    NSInteger _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
}

@property(readonly) MPAVDestinationBrowser *videoDestinationBrowser;
@property(readonly) MPAudioDeviceController *audioDeviceController;


- (void)viewDidAppear:(BOOL)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithAudioDeviceController:(id)arg1 videoDestinationBrowser:(id)arg2;
- (id)videoDestinationBrowser;
- (BOOL)_isDeviceVideoRoute:(id)arg1;
- (BOOL)_isPotentialDeviceVideoRoute:(id)arg1;
- (id)_routes;
- (id)audioDeviceController;
- (void)_availableRoutesDidChangeNotification:(id)arg1;

@end
