/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSCondition;



@interface AVCallbackHandler : NSObject 
{
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition *_condition;
    id _params;
}

@property SEL mainThreadAction;
@property SEL action;
@property id target;


- (void)setCallbackParams:(id)arg1;
- (id)waitForCallbackParams;
- (BOOL)hasParams;
- (SEL)mainThreadAction;
- (void)setMainThreadAction:(SEL)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)init;
- (id)target;
- (void)dealloc;

@end
