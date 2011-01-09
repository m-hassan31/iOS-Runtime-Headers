/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADShapeGeometry;



@interface OADShape : OADGraphic 
{
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}


- (void)setTextBody:(id)arg1;
- (void)flattenProperties;
- (void)createPresetGeometryWithShapeType:(NSInteger)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)textBody;
- (id)shapeProperties;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (NSInteger)type;
- (id)init;
- (void)dealloc;

@end
