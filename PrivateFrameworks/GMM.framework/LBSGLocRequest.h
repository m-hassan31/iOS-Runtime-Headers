/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGUserProfile, NSMutableArray, LBSGPlatformProfile;



@interface LBSGLocRequest : PBRequest 
{
    LBSGPlatformProfile *_platformProfile;
    NSMutableArray *_appProfiless;
    LBSGUserProfile *_userProfile;
    NSMutableArray *_requestElementss;
}

@property(readonly) NSInteger appProfilessCount;
@property(readonly) BOOL hasUserProfile;
@property(readonly) NSInteger requestElementssCount;
@property(retain) NSMutableArray *requestElementss;
@property(retain) LBSGUserProfile *userProfile;
@property(retain) NSMutableArray *appProfiless;
@property(retain) LBSGPlatformProfile *platformProfile;


- (NSInteger)appProfilessCount;
- (void)setAppProfiles:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)appProfilesAtIndex:(NSUInteger)arg1;
- (void)addAppProfiles:(id)arg1;
- (BOOL)hasUserProfile;
- (NSInteger)requestElementssCount;
- (void)setRequestElements:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)requestElementsAtIndex:(NSUInteger)arg1;
- (void)addRequestElements:(id)arg1;
- (id)requestElementss;
- (void)setRequestElementss:(id)arg1;
- (id)userProfile;
- (void)setUserProfile:(id)arg1;
- (id)appProfiless;
- (void)setAppProfiless:(id)arg1;
- (id)platformProfile;
- (void)setPlatformProfile:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
