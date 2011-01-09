/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface _PFTask : NSObject 
{
    NSInteger _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } lock;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } condition;
    NSInteger isFinishedFlag;
}

+ (NSInteger)getNumActiveProcessors;
+ (double)getProcessorSpeed;
+ (unsigned long long)getPhysicalMemory;

- (id)initWithFunction:(int (*)())arg1 withArgument:(void*)arg2 andPriority:(NSInteger)arg3;
- (void)finalize;
- (NSUInteger)retainCount;
- (void)release;
- (id)retain;
- (void)dealloc;

@end
