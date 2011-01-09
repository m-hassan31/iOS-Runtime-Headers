/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDRGradient : NSObject <GQDNameMappable>
{
    struct __CFArray { } *mStops;
    NSInteger mType;
    float mOpacity;
    float mAngle;
    struct CGPoint { 
        float x; 
        float y; 
    } mStart;
    struct CGPoint { 
        float x; 
        float y; 
    } mEnd;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct __CFArray { }*)stops;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (float)angle;
- (NSInteger)type;
- (struct CGPoint { float x1; float x2; })start;
- (struct CGPoint { float x1; float x2; })end;
- (float)opacity;
- (void)dealloc;

@end
