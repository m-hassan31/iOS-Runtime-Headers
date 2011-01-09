/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVWeakKeyValueObserverProxy, AVWeakReference, NSMutableArray, AVAsset;



@interface AVAssetReaderInternal : NSObject 
{
    AVWeakReference *weakReference;
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVAsset *asset;
    struct OpaqueFigAssetReader { } *figAssetReader;
    struct { 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            NSInteger timescale; 
            NSUInteger flags; 
            long long epoch; 
        } duration; 
    } timeRange;
    NSMutableArray *outputs;
    NSInteger status;
    NSError *error;
    struct dispatch_queue_s { } *statusReadWriteQueue;
}



@end
