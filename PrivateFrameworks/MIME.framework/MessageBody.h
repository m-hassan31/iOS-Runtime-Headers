/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;



@interface MessageBody : MFWeakObject 
{
    Message *_message;
}


- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3;
- (BOOL)isRich;
- (NSUInteger)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)attachments;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)htmlContentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)htmlContent;
- (BOOL)isHTML;
- (id)textHtmlPart;
- (id)rawData;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)dealloc;

@end
