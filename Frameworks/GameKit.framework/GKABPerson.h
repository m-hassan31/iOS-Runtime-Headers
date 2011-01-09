/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;



@interface GKABPerson : NSObject 
{
    NSString *_firstName;
    NSString *_lastName;
}

@property(retain) NSString *lastName;
@property(retain) NSString *firstName;

+ (id)personWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)personForContact:(void*)arg1;
+ (id)personForPlayer:(id)arg1;

- (id)lastName;
- (void)setLastName:(id)arg1;
- (id)firstName;
- (void)setFirstName:(id)arg1;
- (id)description;
- (void)dealloc;

@end
