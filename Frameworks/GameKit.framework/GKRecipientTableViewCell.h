/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKRecipientTableViewCellView, GKComposeRecipient;



@interface GKRecipientTableViewCell : UITableViewCell 
{
    GKRecipientTableViewCellView *_recipientView;
    GKComposeRecipient *_recipient;
}

+ (id)cellForRecipient:(id)arg1;
+ (float)height;
+ (id)identifier;
+ (void)_initializeSafeCategory;

- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)accessibilityLabel;

@end
