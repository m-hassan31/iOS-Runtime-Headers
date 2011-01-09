/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLock;



@interface MKCanDrawCache : NSObject 
{
    struct Cache<GMMTilePath,int> {} **_caches;
    NSUInteger _lodCount;
    NSLock *_cacheLock;
}


- (void)invalidateCache;
- (id)init;
- (void)dealloc;
- (void)invalidateCacheInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCacheInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 atLOD:(NSUInteger)arg2;
- (NSInteger)canDrawInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 atScale:(float)arg2;
- (void)setCanDraw:(NSInteger)arg1 forMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 atScale:(float)arg3;

@end
