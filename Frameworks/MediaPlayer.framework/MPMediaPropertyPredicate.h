/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPMediaPropertyPredicate : MPMediaPredicate 
{
    void *_internal;
}

@property(copy) NSString *property;
@property(copy) id value;
@property NSInteger comparisonType;

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(NSInteger)arg3;

- (NSInteger)comparisonType;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)setComparisonType:(NSInteger)arg1;
- (void)setProperty:(id)arg1;
- (id)property;

@end
