/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UIRuntimeConnection : NSObject <NSCoding>
{
    id source;
    id destination;
    NSString *label;
}


- (void)setSource:(id)arg1;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)source;
- (void)connectForSimulator;
- (void)connect;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
