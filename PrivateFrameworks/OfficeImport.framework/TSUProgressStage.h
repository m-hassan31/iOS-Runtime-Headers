/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUProgressStage, TSUProgressContext;



@interface TSUProgressStage : NSObject 
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    TSUProgressStage *m_parentStage;
    TSUProgressContext *m_context;
}


- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (void)setProgressPercentage:(double)arg1;
- (double)overallProgress;
- (double)nextSubStageParentSize;
- (void)setNextSubStageParentSize:(double)arg1;
- (id)initRootStageInContext:(id)arg1;
- (id)parentStage;
- (double)currentPosition;
- (void)advanceProgress:(double)arg1;
- (void)end;
- (id)description;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end
