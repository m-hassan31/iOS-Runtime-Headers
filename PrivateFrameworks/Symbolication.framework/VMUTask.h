/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUMachTaskContainer, NSArray, <VMUMemory>;



@interface VMUTask : NSObject 
{
    <VMUMemory> *_memory;
    VMUMachTaskContainer *_machTaskContainer;
    BOOL _isTranslated;
    NSArray *_headers;
}

+ (BOOL)pidIsTranslated:(NSInteger)arg1;
+ (id)findDyldHeaderInMemory:(id)arg1 address:(unsigned long long)arg2;
+ (id)taskWithMachTaskContainer:(id)arg1;

- (id)initWithMachTaskContainer:(id)arg1;
- (id)memory;
- (BOOL)isTranslated;
- (NSUInteger)task;
- (void)dealloc;
- (NSInteger)pid;
- (id)headers;

@end
