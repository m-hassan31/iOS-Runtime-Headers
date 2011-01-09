/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, GMMDateTime, NSString;



@interface GMMNewRoute : PBCodable 
{
    NSInteger _distanceMeters;
    BOOL _hasDistanceMeters;
    NSInteger _durationSeconds;
    BOOL _hasDurationSeconds;
    NSInteger _trafficDelaySeconds;
    BOOL _hasTrafficDelaySeconds;
    GMMDateTime *_departureDateTime;
    GMMDateTime *_arrivalDateTime;
    NSString *_cost;
    NSMutableArray *_offsetPolylines;
    NSMutableArray *_steps;
    NSInteger _mode;
    BOOL _hasMode;
    NSString *_deprecatedDistance;
    NSString *_deprecatedDuration;
}

@property(readonly) BOOL hasDepartureDateTime;
@property(readonly) BOOL hasArrivalDateTime;
@property(readonly) BOOL hasCost;
@property(readonly) NSInteger offsetPolylinesCount;
@property(readonly) NSInteger stepsCount;
@property(readonly) BOOL hasDeprecatedDistance;
@property(readonly) BOOL hasDeprecatedDuration;
@property(retain) NSString *deprecatedDuration;
@property(retain) NSString *deprecatedDistance;
@property(readonly) BOOL hasMode;
@property NSInteger mode;
@property(retain) NSMutableArray *steps;
@property(retain) NSMutableArray *offsetPolylines;
@property(retain) NSString *cost;
@property(retain) GMMDateTime *arrivalDateTime;
@property(retain) GMMDateTime *departureDateTime;
@property(readonly) BOOL hasTrafficDelaySeconds;
@property NSInteger trafficDelaySeconds;
@property(readonly) BOOL hasDurationSeconds;
@property NSInteger durationSeconds;
@property(readonly) BOOL hasDistanceMeters;
@property NSInteger distanceMeters;


- (void)setDistanceMeters:(NSInteger)arg1;
- (void)setDurationSeconds:(NSInteger)arg1;
- (void)setTrafficDelaySeconds:(NSInteger)arg1;
- (NSInteger)offsetPolylinesCount;
- (void)setOffsetPolyline:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)offsetPolylineAtIndex:(NSUInteger)arg1;
- (void)addOffsetPolyline:(id)arg1;
- (NSInteger)stepsCount;
- (void)setStep:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)stepAtIndex:(NSUInteger)arg1;
- (void)addStep:(id)arg1;
- (BOOL)hasDeprecatedDistance;
- (BOOL)hasDeprecatedDuration;
- (id)deprecatedDuration;
- (void)setDeprecatedDuration:(id)arg1;
- (id)deprecatedDistance;
- (void)setDeprecatedDistance:(id)arg1;
- (BOOL)hasMode;
- (void)setSteps:(id)arg1;
- (id)offsetPolylines;
- (void)setOffsetPolylines:(id)arg1;
- (void)setCost:(id)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (void)setDepartureDateTime:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasDistanceMeters;
- (NSInteger)distanceMeters;
- (BOOL)hasDurationSeconds;
- (NSInteger)durationSeconds;
- (BOOL)hasTrafficDelaySeconds;
- (NSInteger)trafficDelaySeconds;
- (BOOL)hasDepartureDateTime;
- (id)departureDateTime;
- (BOOL)hasArrivalDateTime;
- (id)arrivalDateTime;
- (BOOL)hasCost;
- (id)cost;
- (id)steps;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setMode:(NSInteger)arg1;
- (NSInteger)mode;
- (id)description;
- (id)description;
- (id)init;
- (void)dealloc;

@end
