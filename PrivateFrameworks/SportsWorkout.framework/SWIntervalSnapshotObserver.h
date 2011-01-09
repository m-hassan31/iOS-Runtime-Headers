/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSMutableArray;



@interface SWIntervalSnapshotObserver : NSObject <SWRunWorkoutObserver>
{
    NSMutableArray *_snapshots;
    NSUInteger _timeIntervalInSeconds;
    float _distanceIntervalInMiles;
    float _calorieInterval;
    NSUInteger _previousTimeSnapshotIndex;
    NSUInteger _previousDistanceSnapshotIndex;
    NSUInteger _previousCalorieSnapshotIndex;
}

@property(readonly) NSArray *snapshots;


- (id)initWithCalorieInterval:(float)arg1;
- (id)initWithDistanceIntervalInMiles:(float)arg1;
- (id)initWithTimeIntervalInSeconds:(NSUInteger)arg1;
- (id)snapshots;
- (void)adjustSnapshotsForDistanceScaleFactor:(float)arg1;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(NSUInteger)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (id)_init;
- (void)dealloc;

@end
