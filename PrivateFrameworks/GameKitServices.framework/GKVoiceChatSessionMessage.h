/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableData;



@interface GKVoiceChatSessionMessage : GKOOBMessage 
{
    NSMutableData *_data;
    NSUInteger _conferenceID;
    NSUInteger _subtype;
}


- (NSUInteger)subtype;
- (id)data;
- (id)initWithBytes:(void*)arg1 length:(unsigned long)arg2;
- (id)init;
- (BOOL)_checkType:(unsigned short)arg1;
- (BOOL)_checkSize:(unsigned long)arg1;
- (id)initWithPayload:(id)arg1 conferenceID:(NSUInteger)arg2 subtype:(NSUInteger)arg3;
- (NSUInteger)conferenceID;
- (id)payload;

@end
