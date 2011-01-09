/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebTextIteratorPrivate;



@interface WebTextIterator : NSObject 
{
    WebTextIteratorPrivate *_private;
}

+ (id)dd_iteratorForDocument:(id)arg1;

- (id)initWithRange:(id)arg1;
- (id)currentText;
- (BOOL)atEnd;
- (id)currentRange;
- (const unsigned short*)currentTextPointer;
- (NSUInteger)currentTextLength;
- (void)dealloc;
- (void)advance;
- (id)currentNode;
- (BOOL)dd_checkCurrentRangeAgainstString:(struct __CFString { }*)arg1;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { NSUInteger x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; NSInteger x3; NSInteger x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2;
- (struct __DDScanQuery { struct __CFRuntimeBase { NSUInteger x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; NSInteger x3; NSInteger x4; int (*x5)(); void *x6; }*)dd_newQueryStopRange:(id*)arg1;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { NSUInteger x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; NSInteger x3; NSInteger x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2 document:(id)arg3 DOMWasModified:(BOOL*)arg4 URLificationBlock:(id)arg5;

@end
