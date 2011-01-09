/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */



@interface WebVisiblePosition : NSObject 
{
    struct WebObjectInternal { } *_internal;
}

@property NSInteger affinity;

+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; NSInteger x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; NSInteger x2; })arg1;
+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; NSInteger x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; NSInteger x2; })arg1;

- (BOOL)withinTextUnitOfGranularity:(NSInteger)arg1;
- (id)enclosingTextUnitOfGranularity:(NSInteger)arg1;
- (id)positionWithinAdjacentTextUnitOfGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2;
- (id)boundaryOfEnclosingTextUnitOfGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2;
- (NSInteger)textDirection;
- (BOOL)directionIsDownstream:(NSInteger)arg1;
- (id)nextCharacterBoundaryInDirection:(NSInteger)arg1;
- (id)nextWordBoundaryInDirection:(NSInteger)arg1;
- (id)nextSentenceBoundaryInDirection:(NSInteger)arg1;
- (id)nextLineBoundaryInDirection:(NSInteger)arg1;
- (id)nextParagraphBoundaryInDirection:(NSInteger)arg1;
- (id)nextDocumentBoundaryInDirection:(NSInteger)arg1;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; NSInteger x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; NSInteger x2; })_visiblePosition;
- (id)positionAtStartOrEndOfWord;
- (BOOL)atAlphaNumericBoundaryInDirection:(NSInteger)arg1;
- (BOOL)requiresContextForWordBoundary;
- (NSInteger)affinity;
- (void)setAffinity:(NSInteger)arg1;
- (BOOL)atBoundaryOfGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2;
- (id)enclosingTextUnitOfGranularity:(NSInteger)arg1 inDirectionIfAtBoundary:(NSInteger)arg2;
- (id)positionOfNextBoundaryOfGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2;
- (NSInteger)compare:(id)arg1;
- (NSInteger)distanceFromPosition:(id)arg1;
- (id)positionByMovingInDirection:(NSInteger)arg1 amount:(unsigned long)arg2;
- (id)positionByMovingInDirection:(NSInteger)arg1 amount:(unsigned long)arg2 withAffinityDownstream:(BOOL)arg3;
- (BOOL)withinTextUnitOfGranularity:(NSInteger)arg1 inDirectionIfAtBoundary:(NSInteger)arg2;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
