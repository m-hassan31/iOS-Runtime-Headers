/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINibDecoder, NSString, NSData, NSBundle;



@interface UINibStorage : NSObject 
{
    NSString *bundleResourceName;
    NSBundle *bundle;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    BOOL instantiatingForSimulator;
}

@property BOOL instantiatingForSimulator;
@property(retain) UINibDecoder *nibDecoder;
@property(copy) NSData *archiveData;
@property(retain) NSBundle *bundle;
@property(copy) NSString *bundleResourceName;


- (void)setNibDecoder:(id)arg1;
- (void)setArchiveData:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleResourceName:(id)arg1;
- (id)nibDecoder;
- (id)archiveData;
- (id)bundleResourceName;
- (BOOL)instantiatingForSimulator;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (id)bundle;
- (void)dealloc;

@end
