/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface ODIHNodeInfo : NSObject 
{
    NSInteger mTreeDepth;
    NSInteger mRow;
    struct ODIHRange { 
        float mMid; 
        float mLength; 
    } mXRange;
    BOOL mConnectToVerticalSide;
    NSInteger mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; } *mXRanges;
}


- (struct ODIHRange { float x1; float x2; })xRange;
- (void)setXRange:(struct ODIHRange { float x1; float x2; })arg1;
- (NSInteger)treeDepth;
- (void)setTreeDepth:(NSInteger)arg1;
- (void)setRow:(NSInteger)arg1;
- (BOOL)connectToVerticalSide;
- (void)setConnectToVerticalSide:(BOOL)arg1;
- (NSInteger)extraRowsBetweenParentAndSelf;
- (void)setExtraRowsBetweenParentAndSelf:(NSInteger)arg1;
- (float)xOffsetRelativeToParent;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (void)addToXOffsetRelativeToParent:(float)arg1;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)xRanges;
- (NSInteger)row;
- (id)init;
- (void)dealloc;

@end
