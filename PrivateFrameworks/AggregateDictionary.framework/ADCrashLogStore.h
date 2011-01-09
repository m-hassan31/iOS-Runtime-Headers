/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class NSDateFormatter, NSString, NSMutableDictionary;



@interface ADCrashLogStore : NSObject 
{
    NSString *_crashLogPathPrefix;
    NSMutableDictionary *_scalars;
    NSMutableDictionary *_distributions;
    NSDateFormatter *_dateFormatter;
}

+ (id)_crashLogDataFromDescription:(id)arg1 errorDescription:(id*)arg2;
+ (id)_deviceID;
+ (id)_systemID;
+ (BOOL)_shouldIncludeSystemID;
+ (id)_lockdownStringForKey:(struct __CFString { }*)arg1;
+ (id)_OSVersion;

- (void)dealloc;
- (id)initWithCrashLogPathPrefix:(id)arg1;
- (id)initWithDefaultCrashLogPath;
- (NSInteger)daysSince1970ForLastCrashLogSerialized;
- (void)addScalar:(long long)arg1 forKey:(id)arg2;
- (void)addDistribution:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg1 forKey:(id)arg2;
- (id)_crashLogPathForDate:(id)arg1;
- (void)serializeWithDate:(NSInteger)arg1;

@end
