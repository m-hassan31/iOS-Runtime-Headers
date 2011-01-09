/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSData, NSDictionary, NSURL;



@interface SSURLConnectionResponse : NSObject <SSCoding>
{
    NSDictionary *_allHeaderFields;
    NSData *_body;
    long long _expectedContentLength;
    NSString *_mimeType;
    NSInteger _statusCode;
    NSString *_suggestedFilename;
    NSString *_textEncodingName;
    NSURL *_url;
}

@property(readonly) NSURL *URL;
@property(readonly) NSString *textEncodingName;
@property(readonly) NSString *suggestedFilename;
@property(readonly) NSInteger statusCode;
@property(readonly) NSString *MIMEType;
@property(readonly) long long expectedContentLength;
@property(readonly) NSData *bodyData;
@property(readonly) NSDictionary *allHeaderFields;


- (id)bodyData;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (NSInteger)statusCode;
- (id)MIMEType;
- (id)URL;
- (void)dealloc;
- (long long)expectedContentLength;
- (id)textEncodingName;
- (id)suggestedFilename;
- (id)allHeaderFields;

@end
