/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SACancelRequest : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)cancelRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cancelRequest;

- (id)encodedClassName;
- (id)groupIdentifier;

@end