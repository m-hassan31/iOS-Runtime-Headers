/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSError, NSArray;



@interface SUInputSourceInputStream : NSInputStream 
{
    int (*_clientCallback)();
    struct { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
    id _delegate;
    NSArray *_inputSources;
    NSInteger _inputSourceIndex;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _sentAtEndEvent;
    BOOL _sentOpenEvent;
    NSError *_streamError;
    NSUInteger _streamStatus;
}

@property(readonly) NSArray *inputSources;


- (id)initWithInputSources:(id)arg1;
- (void)_close;
- (id)_currentInputSource;
- (void)_scheduleCallback;
- (void)_setStreamError:(id)arg1;
- (void)_streamEventCallback;
- (id)inputSources;
- (id)initWithFileAtPath:(id)arg1;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (BOOL)hasBytesAvailable;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (NSUInteger)streamStatus;
- (id)streamError;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { NSInteger x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (id)initWithURL:(id)arg1;
- (void)close;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;

@end
