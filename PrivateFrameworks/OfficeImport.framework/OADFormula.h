/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;



@interface OADFormula : NSObject 
{
    NSInteger mType;
    struct OADFormulaArg { 
        NSInteger type; 
        NSInteger value; 
    } mArgs[3];
    NSString *mName;
}


- (id)initWithType:(NSInteger)arg1 arg0:(struct OADFormulaArg { NSInteger x1; NSInteger x2; })arg2 arg1:(struct OADFormulaArg { NSInteger x1; NSInteger x2; })arg3 arg2:(struct OADFormulaArg { NSInteger x1; NSInteger x2; })arg4;
- (struct OADFormulaArg { NSInteger x1; NSInteger x2; })argAtIndex:(NSUInteger)arg1;
- (NSInteger)type;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end
