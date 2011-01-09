/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;



@interface MFRecursiveLock : NSRecursiveLock <MFLockObject>
{
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (BOOL)isLockedByMe;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)tryLock;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (void)lock;
- (void)unlock;
- (id)description;
- (id)init;
- (void)dealloc;

@end
