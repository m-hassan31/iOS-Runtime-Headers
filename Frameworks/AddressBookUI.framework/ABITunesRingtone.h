/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, NSDictionary;



@interface ABITunesRingtone : NSObject 
{
    NSString *_identifier;
    NSString *_name;
    NSString *_path;
    NSDictionary *_playbackProperties;
    BOOL _purchased;
}

@property(getter=isPurchased) BOOL purchased;
@property(retain) NSDictionary *playbackProperties;
@property(retain) NSString *path;
@property(retain) NSString *name;
@property(retain) NSString *identifier;


- (void)setPurchased:(BOOL)arg1;
- (void)setPlaybackProperties:(id)arg1;
- (id)playbackProperties;
- (BOOL)isPurchased;
- (BOOL)loadFromPropertyList:(id)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end
