/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;



@interface CPTracing : NSObject 
{
    NSString *mFilename;
}


- (void)updateOpstat:(long*)arg1 isStarting:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: v16@0:4^l8B12 */

- (void)writeOpstat:(long*)arg1 tracePoint:(long)arg2 filter:(NSInteger)arg3;
- (void)writeHeader;
- (id)initWithFilename:(id)arg1;
- (void)dealloc;

@end
