/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, NSArray;



@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol>
{
    NSUInteger _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    NSInteger _cpuType;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    NSInteger _pid;
    NSInteger _ppid;
    struct timeval { 
        NSInteger tv_sec; 
        NSInteger tv_usec; 
    } _startTime;
}

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(NSInteger)arg1;
+ (NSInteger)processParentId:(NSInteger)arg1;

- (id)initWithPid:(NSInteger)arg1;
- (id)procTableName;
- (id)_infoFromCommandLine:(NSInteger)arg1;
- (id)realAppName;
- (id)requestedAppName;
- (id)firstArgument;
- (id)envVars;
- (id)userAppName;
- (NSInteger)ppid;
- (BOOL)isApp;
- (BOOL)isCFM;
- (BOOL)isNative;
- (BOOL)signal:(NSInteger)arg1;
- (NSInteger)compareByName:(id)arg1;
- (NSInteger)compareByUserAppName:(id)arg1;
- (id)initWithTask:(NSUInteger)arg1;
- (BOOL)isMachO;
- (NSInteger)cpuType;
- (BOOL)isRunning;
- (BOOL)terminate;
- (NSUInteger)task;
- (struct timeval { NSInteger x1; NSInteger x2; })startTime;
- (NSInteger)compare:(id)arg1;
- (void)finalize;
- (void)update;
- (id)name;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)arguments;
- (id)init;
- (void)dealloc;
- (NSInteger)pid;

@end
