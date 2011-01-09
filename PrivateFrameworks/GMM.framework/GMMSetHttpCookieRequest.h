/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMSetHttpCookieRequest : PBRequest 
{
    BOOL _gmmInstalled;
    BOOL _hasGmmInstalled;
    BOOL _gmmInvokedViaMimeType;
    BOOL _gmmInvokedViaUrl;
}

@property BOOL gmmInvokedViaUrl;
@property BOOL gmmInvokedViaMimeType;
@property(readonly) BOOL hasGmmInstalled;
@property BOOL gmmInstalled;


- (void)setGmmInstalled:(BOOL)arg1;
- (BOOL)gmmInvokedViaUrl;
- (void)setGmmInvokedViaUrl:(BOOL)arg1;
- (BOOL)gmmInvokedViaMimeType;
- (void)setGmmInvokedViaMimeType:(BOOL)arg1;
- (BOOL)hasGmmInstalled;
- (BOOL)gmmInstalled;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
