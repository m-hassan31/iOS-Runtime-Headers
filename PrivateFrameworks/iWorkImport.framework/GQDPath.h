/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDPath : NSObject 
{
    char *mPathString;
}

+ (char *)createPathString:(struct CGPath { }*)arg1;
+ (struct __CFString { }*)createString:(struct CGPath { }*)arg1;

- (BOOL)isRect;
- (BOOL)isRectangular;
- (char *)pathStr;
- (struct CGPath { }*)createBezierPath;
- (BOOL)hasVerticalFlip;
- (BOOL)hasHorizontalFlip;
- (BOOL)horizontalFlip;
- (BOOL)verticalFlip;
- (void)dealloc;

@end
