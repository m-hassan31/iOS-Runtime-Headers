/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDColor;



@interface GQDRGradientStop : NSObject 
{
    float mFraction;
    GQDColor *mColor;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (float)fraction;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (id)color;
- (void)dealloc;

@end
