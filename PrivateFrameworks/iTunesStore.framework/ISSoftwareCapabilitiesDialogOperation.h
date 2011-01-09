/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;



@interface ISSoftwareCapabilitiesDialogOperation : ISOperation 
{
    NSDictionary *_mismatches;
    id _requiredCapabilities;
}

@property(readonly) NSDictionary *mismatches;
@property(readonly) id requiredCapabilities;


- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;
- (void)run;
- (void)dealloc;
- (id)mismatches;
- (id)requiredCapabilities;
- (void)_postDefaultDialog;

@end
