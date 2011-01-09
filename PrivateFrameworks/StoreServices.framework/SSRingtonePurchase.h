/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber;



@interface SSRingtonePurchase : SSPurchase <NSCoding, NSCopying>
{
    NSNumber *_assigneeIdentifier;
    BOOL _shouldMakeDefaultRingtone;
}

@property BOOL shouldMakeDefaultRingtone;
@property(retain) NSNumber *assigneeIdentifier;


- (BOOL)shouldMakeDefaultRingtone;
- (void)setShouldMakeDefaultRingtone:(BOOL)arg1;
- (id)assigneeIdentifier;
- (void)setAssigneeIdentifier:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
