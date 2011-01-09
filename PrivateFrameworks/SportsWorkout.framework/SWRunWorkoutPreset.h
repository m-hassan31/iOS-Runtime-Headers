/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSDecimalNumber, NSString, SWVoicePromptController, NSMutableArray;



@interface SWRunWorkoutPreset : NSObject <SWRunWorkoutObserver>
{
    NSString *_presetGoal;
    NSUInteger _templateId;
    NSString *_templateName;
    NSString *_workoutName;
    float _goal;
    NSDecimalNumber *_goalInDisplayUnits;
    NSString *_goalType;
    SWVoicePromptController *_promptController;
    NSMutableArray *_timeObservationTargets;
    NSMutableArray *_distanceObservationTargets;
    NSMutableArray *_calorieObservationTargets;
    NSMutableArray *_stateObservationTargets;
    NSMutableArray *_userEventObservationTargets;
}

@property(readonly) NSString *distanceDisplayUnits;
@property(readonly) NSString *workoutName;
@property(readonly) NSString *templateName;
@property(readonly) NSUInteger templateId;
@property(readonly) NSString *goalType;
@property(readonly) float goal;
@property(readonly) NSString *presetGoal;

+ (id)presetForCustomGoalWithAmount:(id)arg1 units:(id)arg2;
+ (id)presetForGoal:(id)arg1;

- (id)initWithPresetGoal:(id)arg1 goal:(float)arg2 goalType:(id)arg3 goalInDisplayUnits:(id)arg4 templateId:(NSUInteger)arg5 templateName:(id)arg6 workoutName:(id)arg7;
- (void)_addTimeObservationTarget:(id)arg1;
- (void)_addDistanceObservationTarget:(id)arg1;
- (void)_addCalorieObservationTarget:(id)arg1;
- (void)_addStateObservationTarget:(id)arg1;
- (void)_addUserEventObservationTarget:(id)arg1;
- (void)_observeSteadilyIncreasingValueForRunWorkoutController:(id)arg1 withCurrentWorkoutValue:(id)arg2 targets:(id)arg3;
- (void)_observeStateChangeForWorkoutController:(id)arg1 oldState:(id)arg2 newState:(id)arg3 targets:(id)arg4;
- (void)_workoutController:(id)arg1 observeUserEvent:(id)arg2 targets:(id)arg3;
- (void)_stopAllPromptsOrFireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireAttaboysForWorkoutController:(id)arg1;
- (void)_setUpBenchmarkTargets;
- (void)_setUpBenchmarkTargetsForKilometerDistanceWorkout;
- (void)_setUpHalfwayTarget;
- (void)_setUpHalfwayTargetWithUnits:(id)arg1;
- (void)_setUpFinalRushTargets;
- (void)_setUpGoalCompletedTarget;
- (void)_setUpGoalCompletedTargetWithUnits:(id)arg1;
- (id)_distanceDisplayUnitsForWorkoutData:(id)arg1;
- (id)_distanceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2;
- (id)_paceDisplayUnitsForWorkoutData:(id)arg1;
- (id)_paceInDisplayUnits:(id)arg1 forWorkoutData:(id)arg2;
- (id)presetGoal;
- (id)goalType;
- (NSUInteger)templateId;
- (id)templateName;
- (id)workoutName;
- (float)goal;
- (id)distanceDisplayUnits;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(NSUInteger)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (void)dealloc;

@end
